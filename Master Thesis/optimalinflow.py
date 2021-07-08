import json
import numpy as np
import pandas as pd
import sys
import os.path
from os import path
import os
import shutil
from inputs import *


#Partitioning wells function
def split(start, end,segments,spacing):
#spacing usually model cell size to avoid wells penetrating the same cell
    for jj in range(0,np.size(start)):
        #size of input coordinates
        x_delta = (end[jj] - start[jj]+2*spacing) / float(segments)
        #z_delta = (end[jj+2] - start[jj+2]) / float(segments) #for deviated wells
        z_delta = 0 # for horizontal wells
        points = []
        for i in range(0, segments):
            points.append([start[jj]-spacing+i*x_delta+spacing,start[jj+1],
            	start[jj+2]+i*z_delta,
            start[jj]-spacing + (i+1) * x_delta-spacing,start[jj+1],start[jj+2] 
            + (i+1) * z_delta])
        return points 
#Generating control time steps for json file
def Controlsteps (years,steps):
	Timesteps =[]
	T_delta = (years*365)/steps
	for i in range(0,steps):
		T = round(i*T_delta)
		Timesteps.append(T)
	return Timesteps

def Timesteps (years,steps):
	Timesteps =[]
	T_delta = (years*365)/steps
	for i in range(0,(steps+1)):
		T = round(i*T_delta)
		Timesteps.append(T)
	return Timesteps
  
##################################Start of workflow##############################

#Splitting well and generating new well partiton coordinates
coordinates=split(heel,toe, ii,spacing)
np.savetxt('coordinates.csv',coordinates,fmt="%1.1f",delimiter=',',newline="\n",
header = "x,y,z,x,y,z")

#loading well segment coordinate file
df=pd.read_csv("coordinates.csv")

#loading initial driver file
jsonfile = DRIVER_FILE + CASE +'.json'
with open(jsonfile, 'r') as file1:
	data = json.load(file1)


#adding well control tab
#editing well P1 coordinates
P1_heel = {'IsVariable':False,'x':df.iloc[0,0],'y':df.iloc[0,1],'z':df.iloc[0,2]}
P1_toe = {'IsVariable':False,'x':df.iloc[0,3],'y':df.iloc[0,4],'z':df.iloc[0,5]}
data['Model']['Wells'][0]['SplinePointArray']=[]
data['Model']['Wells'][0]['SplinePointArray'].append(P1_heel)
data['Model']['Wells'][0]['SplinePointArray'].append(P1_toe)


for jj in range(1,ii):
	control = {'Controls':[{'BHP': 110, 'IsVariable':True, 'Mode':'BHP', 'TimeStep':0}],
	'DefinitionType':'WellSpline','Group':'P','Name':'P'+str(jj+1),'PreferredPhase':'Oil',
	'SplinePointArray': 
	[{'IsVariable':False,'x':df.iloc[jj,0],'y':df.iloc[jj,1],'z':df.iloc[jj,2]},
	{'IsVariable':False,'x':df.iloc[jj,3],'y':df.iloc[jj,4],'z':df.iloc[jj,5]}],
	'Type':'Producer','WellboreRadius': 0.125}

	data['Model']['Wells'].insert(jj,control)

	#Adding well in Optimizer tab
	data['Optimizer']['Constraints'][0]['Wells'].insert(jj,'P'+str(jj+1))


#Edits
data['Global']['Name']=str(ii)+'WSHOEBOXMODEL'
data['Simulator']['ScheduleFile']='include/'+str(ii)+'WSHOEBOXMODEL_SCH.INC'
data['Optimizer']['Parameters']['MaxGenerations'] = 1 
#single evaluation needed to generete wellcompletion data

jsonfile_new = DRIVER_FILE+CASE+str(ii)+'.json'
with open(jsonfile_new, 'w') as file2:
	json.dump(data,file2,indent="   ")

#############################################################################################
#creating model directory
if os.path.exists(NEW_MODEL) and os.path.isdir(NEW_MODEL):
	shutil.rmtree(NEW_MODEL)
	os.mkdir(NEW_MODEL)
else:
	os.mkdir(NEW_MODEL)

#Generating DATA File for FLOW simulation
with open(INITIAL_MODEL+'/1WSHOEBOX.DATA','r') as modelfile1:
	modeldata = modelfile1.read()

#editing data file
modeldata = modeldata.replace('./include/1WSHOEBOXMODEL_SCH.INC','./include/'
+str(ii)+'WSHOEBOXMODEL_SCH.INC')


#copying EGRID and INIT file
egrid1=INITIAL_MODEL+'/1WSHOEBOX.EGRID'
egrid2 = NEW_MODEL	
shutil.copy(egrid1,egrid2)

init1 = INITIAL_MODEL+'/1WSHOEBOX.INIT'
shutil.copy(init1,NEW_MODEL)

#changing into new model working directory
os.chdir(NEW_MODEL)

#renaming copied egrid and init file
os.rename('1WSHOEBOX.EGRID',str(ii)+'WSHOEBOX.EGRID')
os.rename('1WSHOEBOX.INIT',str(ii)+'WSHOEBOX.INIT')

#Writing New DATA file
with open(str(ii)+'WSHOEBOX.DATA','w') as modelfile2:
	modelfile2.write(modeldata)

#creating and copying include files into model folder
#os.mkdir('include')

src = INITIAL_MODEL+'/include'
dst = NEW_MODEL+'/include'
shutil.copytree(src,dst)

os.chdir(NEW_MODEL+'/include')
os.rename('1WSHOEBOXMODEL_SCH.INC', str(ii)+'WSHOEBOXMODEL_SCH.INC')

##################################################################################

os.chdir(PROJECT_PATH)

#Running single evaluation to obtain COMPDATA
if os.path.exists(INITIAL_OUTPUT) and os.path.isdir(INITIAL_OUTPUT):
	shutil.rmtree(INITIAL_OUTPUT)
	os.mkdir(INITIAL_OUTPUT)
else:
	os.mkdir(INITIAL_OUTPUT)

os.system('FieldOpt'+' '+jsonfile_new +' '+ INITIAL_OUTPUT+' '+'-v'+' '+'3'+' '+
	'-f'+' '+'-r'+' '+'serial'+
	' ' +'-g'+NEW_MODEL+'/'+str(ii)+'WSHOEBOX.EGRID'+' '+'-e'+' '+'bash_flw-bin.sh'+
	' '+'-s'+' '+NEW_MODEL+'/'
+str(ii)+'WSHOEBOX.DATA')

#extracting model file
shutil.rmtree(NEW_MODEL)
src = INITIAL_OUTPUT+'/model'+str(ii)
dst = FINAL_MODEL
shutil.move(src,dst)

#################################OPTIMIZATION LOOP ####################################
#optimization  Parameter tuning
jsonfile_old = CASE + str(ii)+ '.json'
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									
with open(DRIVER_FILE + jsonfile_old, 'r') as file:
    data = json.load(file)
data['Optimizer']['Parameters']['MaxGenerations'] = 100 #setting maximum evaluations
data['Optimizer']['Parameters']['PSO-SwarmSize'] = (25*(ii/2))
    

with open(DRIVER_FILE + jsonfile_old, 'w') as file:																																																																																	
    json.dump(data,file,indent=4)


minT_delta = (t*365)/max_ctrlstep
currentctrlstep = 1
T_delta = (t*365)/currentctrlstep

if os.path.exists(OPT_OUTPUT+'_'+str(currentctrlstep)) and os.path.isdir(OPT_OUTPUT+
	'_'+str(currentctrlstep)):
	shutil.rmtree(OPT_OUTPUT+'_'+str(currentctrlstep))
	os.mkdir(OPT_OUTPUT+'_'+str(currentctrlstep))
else:
	os.mkdir(OPT_OUTPUT+'_'+str(currentctrlstep))

	
#initializing single control time step optimization
os.system('mpirun'+' '+ '-n'+ ' '+ '8'+ ' '+ FIELDOPT_BIN_PATH +' '+DRIVER_FILE + 
	jsonfile_old +' '+ OPT_OUTPUT+'_'+str(currentctrlstep) +' '+'-v'+' '+'1'+' '+'-f'
	+' '+'-r'+' '+'mpisync'+' ' +'-g'+FINAL_MODEL+'/'+str(ii)+'WSHOEBOX.EGRID'+' '+'-e'
	+' '+'bash_flow.sh'+' '+'-s'+' '+FINAL_MODEL+'/'+str(ii)+'WSHOEBOX.DATA')

#os.system('FieldOpt' +' '+CASE+'.json' +' '+ OPT_OUTPUT+'_'+str(currentctrlstep) +' '
	#+'-v'+' '+'3'+' '+'-f'+' '+'-r'+' '+'serial'+' ' +'-g'+NEW_MODEL+'/'+str(i)
	#+'WSHOEBOX.EGRID'+' '+'-e'+' '+'bash_flw-bin.sh'+' '+'-s'+' '+NEW_MODEL+'/'+str(i)+'WSHOEBOX.DATA')



#### loading optimization data for 1control step ################
#path opt_log depends on serial or parallel run is used
opt_log = OPT_OUTPUT+'_'+str(currentctrlstep)+'/rank0/log_extended.json'
with open(opt_log, 'r') as logfile1:
	optdata = json.load(logfile1)

BHP_data = optdata['Cases'][-1]['Variables']

with open ('bhp'+str(ii)+'.csv','w') as file:
	writer =csv.writer(file,delimiter=',')
	writer.writerow(["Key","Value"])
	for BHP in BHP_data:
		writer.writerows(BHP.items())

df=pd.read_csv('bhp'+str(ii)+'.csv',index_col='Key')

controlsteps_previous = Controlsteps(12,1)

npv_df=pd.read_csv(OPT_OUTPUT+'_'+str(currentctrlstep)+'/rank0/log_optimization.csv',sep=',')
npv1 = npv_df.iloc[-1,10]
NPV.append(npv1)
#################################################################

with open(DRIVER_FILE + jsonfile_old, 'r') as file1:
	data = json.load(file1)

data['Model']['ControlTimes'] = []

ControlTimes = Timesteps(t,16)
print(ControlTimes)

data['Model']['ControlTimes']= ControlTimes


while currentctrlstep <= max_ctrlstep:

	currentctrlstep = currentctrlstep*2
	controlsteps_current = Controlsteps(12,currentctrlstep)
	
	T_delta = controlsteps_current[1]
	print(controlsteps_current)
       
    #this is to be changed according to the optimization method used
	data['Optimizer']['Parameters']['MaxGenerations'] = (25*currentctrlstep) 
	
	for jj in range(0,ii):

		data['Model']['Wells'][jj]['Controls'] = []
		
		
		for t in controlsteps_current:
				#extract BHP at that time step
				if t in controlsteps_previous:
					bhp = df.loc['Var#BHP#P'+str(jj+1)+'#'+str(int(t)),'Value']
					ctrlstep = {'BHP':bhp, 'IsVariable':True, 'Mode':'BHP', 'TimeStep':t}
					data['Model']['Wells'][jj]['Controls'].append(ctrlstep)
					
				else :
					bhp = df.loc['Var#BHP#P'+str(jj+1)+'#'+str(int(t-T_delta)),'Value']
					ctrlstep = {'BHP':bhp, 'IsVariable':True, 'Mode':'BHP', 'TimeStep':t}
					data['Model']['Wells'][jj]['Controls'].append(ctrlstep)
				

	jsonfile_new = CASE +str(ii)+str(currentctrlstep)+'.json'
	with open(DRIVER_FILE + jsonfile_new, 'w') as file2:
		json.dump(data,file2,indent=4)


	if os.path.exists(OPT_OUTPUT+'_'+str(currentctrlstep)) and os.path.isdir(OPT_OUTPUT+'_'
		+str(currentctrlstep)):
		shutil.rmtree(OPT_OUTPUT+'_'+str(currentctrlstep))
		os.mkdir(OPT_OUTPUT+'_'+str(currentctrlstep))
	else:
		os.mkdir(OPT_OUTPUT+'_'+str(currentctrlstep))

	os.system('mpirun'+' '+ '-n'+ ' '+ '6'+ ' '+FIELDOPT_BIN_PATH+' '+DRIVER_FILE + jsonfile_new +
		' '+ OPT_OUTPUT+'_'+str(currentctrlstep)+' '+'-t'+' '+'300'+' '+'-v'+' '+'1'+' '+'-f'+' '+
		'-r'+' '+'mpisync'+' ' +'-g'+' '+FINAL_MODEL+'/'+str(ii)+'WSHOEBOX.EGRID'+' '+'-e'+' '+
		'bash_flow.sh'+' '+'-s'+' '+FINAL_MODEL+'/'+str(ii)+'WSHOEBOX.DATA')

	#os.system('FieldOpt'+' '+DRIVER_FILE + jsonfile_new +' '+ OPT_OUTPUT+'_'+str(currentctrlstep)+
	#' '+'-v'+' '+'3'+' '+'-f'+' '+'-r'+' '+'serial'+' ' +'-g'+' '+FINAL_MODEL+'/'+str(ii)+
	#'WSHOEBOX.EGRID'+' '+'-e'+' '+'bash_flw-bin.sh'+' '+'-s'+' '+FINAL_MODEL+'/'+str(ii)+'WSHOEBOX.DATA')

	npv_df=pd.read_csv(OPT_OUTPUT+'_'+str(currentctrlstep)+'/rank0/log_optimization.csv',sep=',')
	npv2= npv_df.iloc[-1,10]
	
	NPV.append(npv2)
	if npv2==npv1: break 
	
	controlsteps_previous = controlsteps_current
	
	opt_log = OPT_OUTPUT+'_'+str(currentctrlstep)+'/rank0/log_extended.json'
	with open(opt_log, 'r') as logfile1:
		optdata = json.load(logfile1)

	BHP_data = optdata['Cases'][-1]['Variables']

	with open ('bhp'+str(ii)+'.csv','w') as file:
		writer =csv.writer(file,delimiter=',')
		writer.writerow(["Key","Value"])
		for BHP in BHP_data:
			writer.writerows(BHP.items())

	df=pd.read_csv('bhp'+str(ii)+'.csv',index_col='Key')
    npv1=npv2
np.savetxt('npv'+str(ii)+'.csv', NPV, fmt="%1.1f", delimiter= ',', newline= "\n",)
