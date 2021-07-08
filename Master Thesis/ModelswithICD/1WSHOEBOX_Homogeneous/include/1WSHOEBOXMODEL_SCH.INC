WELSPECS
    P1 P 18 30 1* OIL 1* 1* 1* 1* /

/

COMPDAT
    P1 18 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 19 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 20 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 21 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 22 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 23 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 24 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 25 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 26 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 27 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 28 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 29 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 30 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 31 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 32 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 33 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 34 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 35 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 36 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 37 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 38 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 39 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 40 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /
    P1 41 30 2 2 OPEN 1* 15.6108 0.25 1* 1* 1* X /

/

-- xxxxx WELL SEGMENT SPECIFICATION DATA xxxxxxxxxxx
WELSEGS
-- 1)  2)  3)  4)  5)  6)  7)  8)  9)
P1  2005  2005  1*  INC  HF-  DF  425  730 /
-- 1) Well name
-- 2) Depth of the nodal point of the top segment
-- 3) Length down the tubing to the nodal point of the top segment
-- 4) Effective wellbore volume of the top segment
-- 5) Type of tubing length and depth information entered in the
-- subsequent records of this keyword
-- 6) Components of the pressure drop to be included in the
-- calculation for each of the well’s segments
-- 7) Default multiphase flow model for the well’s segments
-- 8) X coordinate of the nodal point of the top segment
-- 9) Y coordinate of the nodal point of the top segment

-- 1)  2)  3)  4)  5)  6)  7)  8) tubing segments
2  2  1  1  75  0  0.125  1.5e-2 /
3  3  1  2  75  0  0.125  1.5e-2 /
4  4  1  3  75  0  0.125  1.5e-2 /
5  5  1  4  75  0  0.125  1.5e-2 /
6  6  1  5  75   0  0.125  1.5e-2 /
7  7  1  6  75   0  0.125  1.5e-2 /
8  8  1  7  75   0  0.125  1.5e-2 /
9  9  1  8  75   0  0.125  1.5e-2 /
-- 1)  2)  3)  4)  5)  6)  7)  8) ICD segments
10  10  2  1  0.01   0  0.2    1.5e-5 /
11  11  3  2  0.01   0  0.2    1.5e-5 /
12  12  4  3  0.01   0  0.2    1.5e-5 /
13  13  5  4  0.01   0  0.2    1.5e-5 /
14  14  6  5  0.01   0  0.2    1.5e-5 /
15  15  7  6  0.01   0  0.2    1.5e-5 /
16  16  8  7  0.01   0  0.2    1.5e-5 /
17  17  9  8  0.01   0  0.2    1.5e-5 /
-- 1)  2)  3)  4)  5)  6)  7)  8) grid blocks segments
18  18  10  10  25  0  0.1236  2e-2 /
19  19  10  18  25  0  0.1236  2e-2 /
20  20  10  19  25  0  0.1236  2e-2 /
21  21  11  11  25  0  0.1236  2e-2 /
22  22  11  21  25  0  0.1236  2e-2 /
23  23  11  22  25  0  0.1236  2e-2 /
24  24  12  12  25  0  0.1236  2e-2 /
25  25  12  24  25  0  0.1236  2e-2 /
26  26  12  25  25  0  0.1236  2e-2 /
27  27  13  13  25  0  0.1236  2e-2 /
28  28  13  27  25  0  0.1236  2e-2 /
29  29  13  28  25  0  0.1236  2e-2 /
30  30  14  14  25  0  0.1236  2e-2 /
31  31  14  30  25  0  0.1236  2e-2 /
32  32  14  31  25  0  0.1236  2e-2 /
33  33  15  15  25  0  0.1236  2e-2 /
34  34  15  33  25  0  0.1236  2e-2 /
35  35  15  34  25  0  0.1236  2e-2 /
36  36  16  16  25  0  0.1236  2e-2 /
37  37  16  36  25  0  0.1236  2e-2 /
38  38  16  37  25  0  0.1236  2e-2 /
39  39  17  17  25  0  0.1236  2e-2 /
40  40  17  39  25  0  0.1236  2e-2 /
41  41  17  40  25  0  0.1236  2e-2 /
/

-- 1) Segment number at the start of the range
-- 2) Segment number at the far end of the range
-- 3) The branch number
-- 4) Number of the segment to which the segment at the start of the
-- range (item 1) is joined, that is its neighbor in the direction of
-- the wellhead
-- 5) The length of each segment in the range
-- 6) Depth change along each segment in the range
-- 7) Tubing internal diameter / the equivalent diameter for annular
-- cross-sections
-- 8) The effective absolute roughness of the tubing
-- COMMENT: -Number of segments = 4
--          -Length of the 1st tubing segment (segment #2) = 150
--          -Length of the 2nd tubing segment (segment #3) = 150
--          -Length of the 3rd tubing segment (segment #4) = 150
--          -Length of the 4th tubing segment (segment #5) = 150
--          -Tubing internal diameter = 0.125
--          -Tubing thickness = 0.01
--          -The effective absolute roughness of the tubing = 1.5e-2
--           (quite large, to illustrate the pressure drop due to
--           friction in the well)
--          -Valve length (distance from inlet to outlet) = tubing
--           thickness = 0.01
--          -Valve diameter when fully open = 0.1
--          -The effective absolute roughness of the valve = 1.5e-5
--           (small valve length and roughness --> pressure drops due
--           to hydrostatic & friction are negligible)
--          -Annulus = wellbore sandface to tubing external surface
--           (the well does not have casing)
--          -Annular cross-sectional area = wellbore - tubing external
--                           = phi/4 * (0.1905^2 - (0.125 + 2*0.01)^2)
--                           = 0.0119893
--          -Equivalent diameter for annular cross-sections = 0.1236
--          -The effective absolute roughness of the annulus = 2e-2
-- xxxxxxxxx COMPLETION SEGMENT SPECIFICATION DATA xxxxxxxxxxxxxxxxxx

COMPSEGS
P1 /
-- 1)  2)  3)  4)  5)  6)  7)
18 30	2	10	0.01	25.01    /
19 30	2	10	25.01	50.01   /
20 30	2	10	50.01	75.01 /
21 30	2	11	75.01	100.01 /
22 30	2	11	100.01	125.01 / 
23 30	2	11	125.01	150.01 /
24 30	2	12	150.01	175.01 /
25 30	2	12	175.01	200.01 /
26 30	2	12	200.01	225.01 /
27 30	2	13	225.01	250.01 /
28 30	2	13	250.01	275.01 /
29 30	2	13	275.01	300.01 /
30 30	2	14	300.01	325.01 /
31 30	2	14	325.01	350.01 /
32 30	2	14	350.01	375.01 /
33 30	2	15	375.01	400.01 /
34 30	2	15	400.01	425.01 /
35 30	2	15	425.01	450.01 /
36 30	2	16	450.01	475.01 /
37 30	2	16	475.01	500.01 /
38 30	2	16	500.01	525.01 /
39 30	2	17	525.01	550.01 /
40 30	2	17	550.01	575.01 /
41 30	2	17	575.01	600.01 /
 
/
-- 1) I - location of the individual connection
-- 2) J - location of the individual connection
-- 3) K - location of the individual connection
-- 4) Branch number on which this connection is located
-- 5) Distance down the tubing from the well’s zero tubing length
-- reference point to the start of the connection in this grid block
-- 6) Distance down the tubing from the well’s zero tubing length
-- reference point to the end of the connection in this grid block
-- 7) Direction of penetration through the grid block or the range
-- COMMENT: item 6 = item 5 + item 5 in WELSEGS

-- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
--WSEGSICD
-- 1)  2)  3)  4)
--P1  6  6   1e-8      0.01 1000 1 /
--P1  7  7   2e-4      0.01 1000 1 /
--P1  8  8   2e-4      0.01 1000 1 /
--P1  9  9   1e-8      0.01 1000 1 /
/
-- 1) Well name
-- 2) Segment number at start of range
-- 3) Segment number at end of range
-- 4) strength of ICD (a_icd)
-- 5) length of ICD
-- 6) Density of calibration fluid
-- 7) Viscosity of calibration fluid

WSEGVALV
-- 1)  2)  3)  4)
P1  10 1  0.00785398 0 /
P1  11 1  2.57995379991585e-5 0/
P1  12 1  2.09839453692616e-5 0/
P1  13 1  2.10366463778671e-5 0/
P1  14 1  2.26712140963532e-5 0/
P1  15 1  2.29642559533187e-5 0/
P1  16 1  1.99116265029394e-5 0/
P1  17 1  0.000143310949705   0/
/
-- 1) Well name
-- 2) Segment number to contain the valve
-- 3) The dimensionless flow coefficient for the valve, Cv
-- 4) Cross-section area for flow in the constriction, Ac
-- COMMENT: -The dimensionless flow coefficient for the valve = 1
--          -Based on the input for valve maximum diameter, when fully
--           open (0.1), the maximum value for Ac is 0.00785398

WCONPROD
   P1 OPEN BHP 1* 1* 1* 5000 1* 82.5/
/

TSTEP
 12*365 /


