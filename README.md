# OptimalWellInflow
Repository contains scripts and .DATA files that accompany the Master thesis Nakibuule(2021).

### Master Thesis
The master project work develops a workflow in which the optimal pressure distribution along the well is determined, this pressure distribution is then used as a basis to model inflow control devices. In this work the WSEGVALV key word is used for ICD modelling. 

In the workflow the horizontal well is partitioned into a number of segments and a new model with individual standalone wells (well segments) is generated. The BHP of each of the well segments is optimized with respect to NPV. In the optimization loop, the number of well control time steps are gradually increased until there is no further increase in the NPV. 

The script optimalwellinflow.py executes this workflow, the variables required by the code are declared in the input.py file.
The well control optimization is executed in FieldOpt (https://github.com/PetroleumCyberneticsGroup/FieldOpt).
Data files for the simple synthetic models; homogeneous and heterogeneous reservoirs, described in Nakibuule (2021) are included. Tese can be run with both Flow (https://opm-project.org/) and Eclipse. The Models folder contains the initial models to which the workflow is applied and models with ICD  folder contains the same mode  ls remodelled with ICDs.

Reference:
Nakibuule, M.A.(2021).Optimal Well Inflow Modelling. Norwegian University of Science and Technology, Department of Geoscience and Petroleum. 
