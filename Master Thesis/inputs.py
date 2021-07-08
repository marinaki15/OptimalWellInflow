
#INPUT VARIABLES

#Input variables for well partitioning and modelling loop
#Number of well  segments
ii =8

#Well partitioning inputs; heel and toe well coordinates, spacing
heel= [425,730,2005]
toe = [1025,730,2005]
spacing = 12.5


#Declare case(optimization algorithm)
CASE = 'fo_driver.CntrlOpt_inj.PSO'


#FieldOpt path
#FIELDOPT_BIN_PATH='/home/marinaki/git/PCG/FieldOpt/FieldOpt/cmake-build-debug/bin/FieldOpt'

#Directory Paths
PROJECT_PATH='/home/m/lib/Thesis/auto' #path to main project folder
#PROJECT_PATH='/home/marinaki/auto'
INITIAL_MODEL=PROJECT_PATH +'/1W_homogeneous' #path to initial single well model
NEW_MODEL=PROJECT_PATH + '/model'+str(ii) #path to new partitioned well model
DRIVER_FILE = PROJECT_PATH+'/Driverfiles/' #path to json driver files initial and generated
INITIAL_OUTPUT = PROJECT_PATH + '/initial' #temporary output location for single optimization run
OPT_OUTPUT = PROJECT_PATH + '/output/'+CASE +str(ii) #final optimization output
FINAL_MODEL = PROJECT_PATH+ '/models/Injector' #path all generated models for optimization

#Gridblock indices for well specs file [I,J]
heel2 = [18,30]
toe2 = [41,30]

#Specifyting Well control
wcon = 'BHP'
value = 130

#Input variables for optimization loop

#Simulation period in years
T = 12.0  #If using python 2.7 and below enter as an integer 

#Maximum number of times BHP will be varied per well 
max_ctrlstep = 16 

