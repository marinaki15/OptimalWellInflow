-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
-- PORE VOLUME
FRPV         Pore volume at reservoir
FOPV         Pore volume containing oil
FHPV         Pore volume containing hydrocardon
FORMW        Total stock tank oil produced by water influx
FORFW        Fraction of total oil produced by water influx

-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
-- INIT VOLUME
FGIP         Gas init in place
FGIPG        Gas init in place (gas phase)
FGIPL        Gas init in place (liquid phase)
FOIP         Oil init in place
FOIPG        Oil init in place (gas phase)
FOIPL        Oil init in place (liquid phase)
FWIP         Water initially in place

-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
-- PRESSURE
FPR          Field pressure
FPRH         Field reservoir pressure (hydrocarbon?)
FPRP         Field pressure weighted by pore volume

-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
-- FIELD RATES / CUMULATIVE / OTHERS
FGPR         Gas production rate
FOPR         Oil production rate
FWPR         Water production rate
FLPR         Liquid production rate
FVPR         Res volume production rate
FGIR         Gas injection rate
FOIR         Oil injection rate
FWIR         Water injection rate
FVIR         Res volume injection rate
FGPT         Gas production total
FOPT         Oil production total
FWPT         Water production total
FLPT         Liquid production total
FVPT         Res volume production total
FGIT         Gas injection total
FOIT         Oil injection total
FWIT         Water injection total
FVIT         Res volume injection total
FOE          Recovery factor
--           (OIP(initial) - OIP(now)) / OIP(initial)
FWCT         Water cut
FGOR         Gas-oil ratio
FRS          Gas-oil ratio (in liquid phase) average value
FRV          Oil-gas ratio (in gas phase) average value
FWGR         Water-gas ratio

-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
-- WELL PRESSURE

WBHP         Bottom hole pressure
/
WTHP         Tubing head pressure
/
WBP          One-point pressure average
/
WBP4         Four-point pressure average
/
WBP5         Five-point pressure average
/
WBP9         Nine-point pressure average
/

-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
-- WELL RATES / CUMULATIVE
WGPR
/
WOPR
/
WWPR
/
WLPR
/
WVPR
/
WGIR
/
WOIR
/
WWIR
/
WVIR
/
WGPT
/
WOPT
/
WWPT
/
WLPT
/
WVPT
/
WGIT
/
WOIT
/
WWIT
/
WVIT
/

-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
-- WELL OTHERS
WSTAT        State indicator
/
WMCTL        Mode of control
/
WWCT         Water Cut
/
WGOR         Gas-oil ratio
/
WWGR         Water-gas ratio
/
WPI          Productivity index of well’s preferred phase
/
WEPR         Energy production rate
/
CTFAC        Connection transmissibility factor
* /
/

-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
-- AQUIFER
FNQR         Aquifer influx rate
FNQT         Cumulative aquifer influx
ANQP         Aquifer pressure (average pressure weighted by water vol)
/

-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
-- CURRENT CPU USAGE IN SECONDS
TCPU         
PERFORMA

-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
-- OTHERS
TIMESTEP
