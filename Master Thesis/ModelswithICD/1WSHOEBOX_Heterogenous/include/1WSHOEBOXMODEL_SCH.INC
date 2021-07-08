WELSPECS
    P1 P 18 30 1* OIL 1* 1* 1* 1* /

/

COMPDAT
    P1 18 30 2 2 OPEN 1* 5.25432 0.25 1* 1* 1* X /
    P1 19 30 2 2 OPEN 1* 10.1544 0.25 1* 1* 1* X /
    P1 20 30 2 2 OPEN 1* 13.814 0.25 1* 1* 1* X /
    P1 21 30 2 2 OPEN 1* 18.937 0.25 1* 1* 1* X /
    P1 22 30 2 2 OPEN 1* 20.414 0.25 1* 1* 1* X /
    P1 23 30 2 2 OPEN 1* 14.1355 0.25 1* 1* 1* X /
    P1 24 30 2 2 OPEN 1* 37.9677 0.25 1* 1* 1* X /
    P1 25 30 2 2 OPEN 1* 17.3015 0.25 1* 1* 1* X /
    P1 26 30 2 2 OPEN 1* 6.13486 0.25 1* 1* 1* X /
    P1 27 30 2 2 OPEN 1* 20.0732 0.25 1* 1* 1* X /
    P1 28 30 2 2 OPEN 1* 16.5359 0.25 1* 1* 1* X /
    P1 29 30 2 2 OPEN 1* 23.6049 0.25 1* 1* 1* X /
    P1 30 30 2 2 OPEN 1* 19.0809 0.25 1* 1* 1* X /
    P1 31 30 2 2 OPEN 1* 22.3054 0.25 1* 1* 1* X /
    P1 32 30 2 2 OPEN 1* 76.0756 0.25 1* 1* 1* X /
    P1 33 30 2 2 OPEN 1* 128.8  0.25 1* 1* 1* X /
    P1 34 30 2 2 OPEN 1* 128.108 0.25 1* 1* 1* X /
    P1 35 30 2 2 OPEN 1* 166.381 0.25 1* 1* 1* X /
    P1 36 30 2 2 OPEN 1* 272.65 0.25 1* 1* 1* X /
    P1 37 30 2 2 OPEN 1* 242.703 0.25 1* 1* 1* X /
    P1 38 30 2 2 OPEN 1* 145.022 0.25 1* 1* 1* X /
    P1 39 30 2 2 OPEN 1* 114.666 0.25 1* 1* 1* X /
    P1 40 30 2 2 OPEN 1* 361.542 0.25 1* 1* 1* X /
    P1 41 30 2 2 OPEN 1* 282.339 0.25 1* 1* 1* X /


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
2  2  1  1  100  0  0.125  1.5e-2 /
3  3  1  2  100  0  0.125  1.5e-2 /
4  4  1  3  100  0  0.125  1.5e-2 /
5  5  1  4  100  0  0.125  1.5e-2 /
6  6  1  5  100  0  0.125  1.5e-2 /
7  7  1  6  100  0  0.125  1.5e-2 /
-- 1)  2)  3)  4)  5)  6)  7)  8) ICD segments
8  8  2  1  0.01   0  0.1    1.5e-5 /
9  9  3  2  0.01   0  0.1    1.5e-5 /
10 10 4  3  0.01   0  0.1    1.5e-5 /
11 11 5  4  0.01   0  0.1    1.5e-5 /
12 12 6  5  0.01   0  0.1    1.5e-5 /
13 13 7  6  0.01   0  0.1    1.5e-5 /
-- 1)  2)  3)  4)  5)  6)  7)  8) grid blocks segments
14  14  8  8   25  0  0.1236  2e-2 /
15  15  8  14  25  0  0.1236  2e-2 /
16  16  8  15  25  0  0.1236  2e-2 /
17  17  8  16  25  0  0.1236  2e-2 /
18  18  9  9   25  0  0.1236  2e-2 /
19  19  9  18  25  0  0.1236  2e-2 /
20  20  9  19  25  0  0.1236  2e-2 /
21  21  9  20  25  0  0.1236  2e-2 /
22  22  10 10  25  0  0.1236  2e-2 /
23  23  10 22  25  0  0.1236  2e-2 /
24  24  10 23  25  0  0.1236  2e-2 /
25  25  10 24  25  0  0.1236  2e-2 /
26  26  11 11  25  0  0.1236  2e-2 /
27  27  11 26  25  0  0.1236  2e-2 /
28  28  11 27  25  0  0.1236  2e-2 /
29  29  11 28  25  0  0.1236  2e-2 /
30  30  12 12  25  0  0.1236  2e-2 /
31  31  12 30  25  0  0.1236  2e-2 /
32  32  12 31  25  0  0.1236  2e-2 /
33  33  12 32  25  0  0.1236  2e-2 /
34  34  13 13  25  0  0.1236  2e-2 /
35  35  13 34  25  0  0.1236  2e-2 /
36  36  13 35  25  0  0.1236  2e-2 /
37  37  13 36  25  0  0.1236  2e-2 /
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
--          -Length of the 1st tubing segment (segment #2) = 150.333
--          -Length of the 2nd tubing segment (segment #3) = 162.861
--          -Length of the 3rd tubing segment (segment #4) = 137.805
--          -Length of the 4th tubing segment (segment #5) = 150.333
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
18	30	2	1	0.01	25.01    /
19	30	2	1	25.01	50.01   /
20	30	2	1	50.01	75.01 /
21	30	2	1	75.01	100.01 /
22	30	2	1	100.01	125.01 / 
23	30	2	1	125.01	150.01 /
24	30	2	1	150.01	175.01 /
25	30	2	1	175.01	200.01 /
26	30	2	1	200.01	225.01 /
27	30	2	1	225.01	250.01 /
28	30	2	1	250.01	275.01 /
29	30	2	1	275.01	300.01 /
30	30	2	1	300.01	325.01 /
31	30	2	1	325.01	350.01 /
32	30	2	1	350.01	375.01 /
33	30	2	1	375.01	400.01 /
34	30	2	1	400.01	425.01 /
35	30	2	1	425.01	450.01 /
36	30	2	1	450.01	475.01 /
37	30	2	1	475.01	500.01 /
38	30	2	1	500.01	525.01 /
39	30	2	1	525.01	550.01 /
40	30	2	1	550.01	575.01 /
41	30	2	1	575.01	600.01 /
 
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

WSEGVALV
-- 1)  2)  3)  4)
P1  8   1  0.007853981633974  /
P1  9   1  3.62260728422172e-05 /
P1  10  1  5.21373427359669e-05  /
P1  11  1  8.47450852276028e-05  /
P1  12  1  0.000189684431186  /
P1  13  1  0.000235862656761  /
/
-- 1) Well name
-- 2) Segment number to contain the valve
-- 3) The dimensionless flow coefficient for the valve, Cv
-- 4) Cross-section area for flow in the constriction, Ac
-- COMMENT: -The dimensionless flow coefficient for the valve = 1
--          -Based on the input for valve maximum diameter, when fully
--           open (0.1), the maximum value for Ac is 0.00785398

WCONPROD
   P1 OPEN BHP 1* 1* 1* 5000 1* 97.272/
/

TSTEP
12*365 /




