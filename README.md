# OptimalWellInflow
Repository contains scripts and .DATA files that accompany the Master thesis Nakibuule(2021).

# Master Project
The master project work develops a workflow in which the optimal pressure distribution along the well is determined, this pressure distribution is then used as a basis to model inflow control devices. In this work the WSEGVALV key word is used for ICD modelling. In the workflow the horizontal well is partitioned into a number of segments and a new model with individual standalone wells (well segments) is generated. The BHP of each of the well segments is optimized with respect to NPV. In the optimization loop, the nuber of control time steps are gradually increased until there is no further increase in the NPV. 

The script optimalwellinflow.py executes this workflow, the variables required by the code are declared in the input.py file.
The well control optimization is executed in FieldOpt (https://github.com/PetroleumCyberneticsGroup/FieldOpt).
Data files for the simple synthetic models described in Nakibuule (2021) are included.

