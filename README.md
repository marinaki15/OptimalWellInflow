# OptimalWellInflow
Repository contains scripts and .DATA files that accompany the Master thesis Nakibuule(2021).

### Master Thesis
The master project work develops a workflow in which the optimal pressure distribution along the well is determined, this pressure distribution is then used as a basis to model inflow control devices. In this work the WSEGVALV key word is used for ICD modelling. 

In the workflow the horizontal well is partitioned into a number of segments and a new model with individual standalone wells (well segments) is generated. The BHP of each of the well segments is optimized with respect to NPV. In the optimization loop, the number of well control time steps are gradually increased until there is no further increase in the NPV. 

The script optimalwellinflow.py executes this workflow, the variables required by the code are declared in the input.py file.
The well control optimization is executed in FieldOpt (https://github.com/PetroleumCyberneticsGroup/FieldOpt).
Data files for the simple synthetic models described in Nakibuule (2021) are included.

### Specialization Project
The specialization project was done as a precusor to the master thesis. In the project the optimall pressure distribution was determmines by optimizing the BHP of the well segments with only a single control  time step. The folder includes the working setup for running FieldOpt optimizations.
