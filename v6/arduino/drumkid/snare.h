#ifndef snare_H_
#define snare_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define snare_NUM_CELLS 2840
#define snare_SAMPLERATE 16384
 
CONSTTABLE_STORAGE(int8_t) snare_DATA [] = {2, -3, 9, 17, -13, -23, -21, -6, 3,
11, 12, 13, 17, 11, 5, 0, 3, 2, -3, -12, -13, -10, -17, -20, -21, -16, -9, -4,
6, 11, 5, -2, -2, 12, 23, 21, 10, -1, -7, -9, -7, 1, 5, 9, 15, 16, 21, 20, 12,
13, 17, 18, 12, 5, -4, -7, -11, -32, -24, -12, -27, -10, -5, -23, -9, -2, -23,
-13, 14, -13, -29, -11, -15, -16, -15, -10, -2, 1, -1, -2, -8, -28, -4, 29, 15,
3, 1, -19, -18, 20, 43, 35, 20, 28, 40, 36, 26, 21, 16, 13, 11, 6, 6, 5, -16,
-26, -16, -3, 1, -19, -14, -10, -18, -5, 2, 9, 16, 17, 19, 24, 20, 9, 3, 3, 4,
-16, -5, 4, -16, -31, -15, -1, -3, 25, 17, 21, 44, 26, 22, 26, -3, -11, 4, 33,
0, -14, 17, -23, -37, -56, -64, -56, -40, -16, -21, -10, -25, -63, -74, -54,
-54, -29, 2, -60, -99, -49, -20, -74, -88, -19, 9, -66, -59, 21, 20, -13, -18,
5, 31, 44, 34, 44, 51, 53, 54, 46, 57, 50, 45, 45, 26, 41, 43, 30, 41, 48, 23,
13, 38, 49, 40, 30, 31, 35, 34, 19, 21, 19, 11, 13, 30, 30, 23, 29, 39, 12, -19,
-5, 29, 2, -43, 13, 22, 18, 8, -10, 16, 16, -5, 15, 30, -57, -108, -65, -4, 0,
-51, 1, 5, -48, -60, -52, -42, -79, -84, -84, -79, -81, -97, -79, -45, -65, -84,
-66, -66, -36, -47, -74, -64, -68, 0, -15, -69, -56, -60, -48, -35, -4, 43, 26,
-38, -18, 23, 54, 8, -14, 45, 58, 47, 53, 38, 44, 71, 64, 56, 45, 57, 65, 59,
52, 63, 61, 50, 44, 46, 59, 47, 37, 53, 59, 48, 31, 43, 51, 37, 27, 21, 24, 34,
44, 23, 25, 24, 9, -22, -3, 29, 0, -22, -15, 14, 44, -8, -62, 6, 24, -26, -63,
-54, -3, 17, -39, -57, -16, 12, -44, -103, -26, 25, -48, -97, -54, -21, -33,
-60, -56, -67, -55, -61, -64, -44, -53, -63, -67, -61, -52, 25, 10, -51, -24, 6,
4, -27, -44, 13, -9, -60, -17, -8, -23, 25, 58, 11, -6, -15, 27, 53, 36, 21, 35,
42, 0, 39, 46, 23, 29, 50, 60, 45, 52, 52, 36, 44, 13, 16, 39, 42, 33, 28, 38,
27, -8, -21, 44, 20, -3, -21, -8, 21, -23, -8, 7, 3, -41, -31, 39, 52, -1, -33,
24, -22, -54, -8, -2, 33, 23, -7, -20, -24, 28, 29, -12, 6, 18, -13, -14, -17,
2, 39, -11, -3, 23, 4, 4, 0, 30, 7, -36, -5, 24, 5, -26, 9, 30, 5, 22, 4, 8, 22,
28, 17, -4, 21, 8, 18, 14, 15, 6, -4, -15, -14, 40, 5, -6, 14, 27, 20, 3, 0, 4,
34, 20, 4, 0, 38, -15, -27, 29, 4, 3, 24, 41, 9, -25, -16, 7, 26, 5, -2, 9, -10,
1, -6, -24, 14, 9, 12, 7, -25, -10, -11, -8, -1, -22, 4, 2, -42, -17, -11, -22,
-22, -4, -9, -38, -27, 9, -21, -63, -37, -1, 4, -24, -24, -22, -11, -6, -23,
-37, -7, -29, -29, -18, -17, 3, 1, 13, 8, -19, -2, 27, 14, 13, -12, 17, 38, 16,
6, -13, 5, 10, -6, 12, 18, 12, 46, 27, 9, 12, 1, 16, 39, 7, -5, 6, -10, 23, 33,
2, 17, 39, 35, -9, -31, 10, 5, 21, 36, 14, 10, 22, 16, -7, 20, 20, 9, 0, 10, 27,
17, 7, 0, -3, 12, 29, -9, -10, 4, -1, 11, 10, -11, 2, 8, -2, 2, -11, -7, -2, 4,
2, 1, -1, -4, 0, 1, 3, -13, -19, 6, 14, 7, 1, -6, 8, 15, 11, -3, 2, 6, 8, 1, 9,
20, 8, 7, 5, 0, -10, -3, -11, 9, 13, 4, 15, 4, -9, 5, 26, -19, -21, -2, 2, -3,
-5, 6, -1, -20, -14, -2, -5, -7, -10, -8, -4, 1, -5, -4, -3, -20, -25, 6, -2,
-10, -1, -9, -10, -8, 7, -10, -31, -15, 6, -1, -15, -7, 6, 4, -3, -2, -10, -5,
-2, 11, 7, -15, -7, -3, 3, -4, -8, -10, -3, 8, 3, -2, 4, 3, -8, 7, 10, 9, 3, 10,
16, 3, 3, 11, 8, 0, 10, 16, 8, 1, 6, 3, 10, 11, -1, 3, 6, 16, 8, -4, 7, 6, 10,
12, 0, 2, 5, 8, 10, 8, 9, 2, -2, 7, 11, 4, -6, -3, 8, 11, 1, 7, 12, 7, 13, 4, 2,
6, 1, 7, 2, -3, 1, 2, 3, -5, -2, 10, 3, -5, -9, 2, 3, -4, 2, -9, -3, 4, -9, -3,
3, 4, -1, -8, -10, -6, -4, -5, -7, -7, -12, -11, -8, -5, -6, -12, -8, -3, -3,
-10, -8, -8, -10, 0, -4, -9, 0, 4, -3, -13, -6, 4, -4, -10, -15, 1, 5, -3, -4,
-5, 2, 0, 3, 3, -7, -5, 11, 8, 8, 4, -3, -2, -1, 2, 1, -1, -1, 5, 7, -1, -7, 0,
5, 3, 2, -8, -10, 7, 14, 0, -9, 2, 6, 1, 2, -3, -5, 6, 4, -7, -2, 1, 6, 2, -4,
1, 3, 8, 6, 7, 9, 1, -1, -4, 1, 10, -3, -7, 6, 8, 5, -1, 2, 7, 5, 5, 4, 3, -5,
1, 6, -2, -2, 3, 0, 2, 3, 2, 1, 5, 0, -2, -3, 0, 4, -1, -3, -3, -3, -3, -3, -8,
0, 2, -5, -9, -7, 1, 4, 7, -9, -11, -1, 1, 1, -6, -6, -4, -6, -8, -5, 0, -9, -8,
-1, -4, -10, -4, 4, -1, -3, -7, -6, -1, -4, -4, -4, -7, -5, -5, -4, -5, -3, -1,
-1, -2, -6, 4, 3, -2, -1, -5, 0, 4, 1, -4, 2, 4, -5, -4, -1, -2, -2, -1, 0, -1,
3, 3, -6, -4, 5, 0, -1, 3, 1, 0, -1, 1, 1, 0, 0, 3, 1, -2, 1, 1, 2, -1, -1, 3,
2, -2, 2, 2, 1, 5, 2, 2, 3, -1, -1, -2, 0, 4, 3, 0, 1, 2, 2, 2, 1, 4, 4, 0, -1,
-1, -1, -1, 0, 3, -2, 0, 3, 2, -4, -5, 0, 2, 3, -5, -1, 4, -6, -7, 3, 0, -2, 1,
-1, -5, -4, -2, -4, -1, -2, -5, -5, -2, -5, -5, -3, -6, -6, -5, -5, -6, -9, -4,
-1, -2, -5, -8, -3, -1, 1, -3, -6, -4, -2, -1, -1, -2, -3, -1, -4, -3, 0, -2, 0,
0, 0, -3, -5, -1, 2, -4, -4, 2, -3, -4, 1, 1, -1, -1, -4, -2, 4, 1, -3, 0, 1, 1,
4, -1, -1, -1, 0, 1, -3, 0, -1, -5, -1, 5, 2, -3, -1, 6, 0, -4, 2, 3, -2, -3, 1,
1, -5, -3, 4, 4, 0, 0, 0, 1, 0, 1, 1, 0, 2, 3, -2, 0, 3, -3, -3, 3, 2, -1, 0, 1,
-1, -2, -4, -1, 2, -3, -2, 2, 1, 0, -2, 1, 0, -3, -3, 1, 3, -2, -4, -5, -2, 4,
2, -2, 1, -3, -2, -1, -6, -6, -2, -3, -6, -3, 0, -1, -3, -4, -2, -2, -3, -1, -4,
-5, 1, 1, -1, -3, -3, -1, 0, 0, -2, -1, -2, -4, 0, -2, -4, -1, -2, -2, -2, -3,
-2, 0, 0, 1, 1, -2, -1, 1, -2, -4, 0, -2, 0, -1, -3, -1, -2, 1, -3, -6, -2, 2,
1, -4, -3, 0, 2, -2, -5, -3, 3, 0, -4, 1, -1, -1, -2, -1, 0, 0, 1, -1, -1, -1,
1, 0, -1, 0, -1, -2, -1, -2, -1, 0, -1, 0, 3, 1, -2, 0, 3, 2, 1, -2, 1, 3, 2, 0,
2, 4, 1, 3, 4, 2, 2, 0, 3, 2, 0, 1, 2, 2, 1, -1, 0, 3, 1, 1, 1, 2, 2, 0, 0, 1,
1, -1, 1, 1, 1, 1, 0, 0, -2, -2, 0, -1, -3, -3, 0, -3, -2, -1, -3, -3, -3, -3,
-4, -3, -5, -3, -4, -5, -5, -3, -3, -5, -5, -4, -3, -6, -4, -5, -5, -4, -3, -4,
-6, -5, -6, -5, -1, -2, -6, -5, -2, -2, -1, -2, -4, -3, -3, -3, -1, -3, -3, 0,
-1, 0, 0, 1, 1, 3, 1, 0, 2, 1, 0, 1, 2, 1, 2, 0, 1, 2, 1, 1, 0, 3, 5, 2, 1, 1,
3, 3, 1, 1, 1, 2, 1, 2, 2, -1, 0, 1, 1, 3, 1, 0, 1, 2, 2, -1, 1, 1, 1, 0, 0, 1,
2, 1, 1, 1, 1, -1, -1, 1, -1, -1, 2, 0, 0, 1, 0, -1, 0, 1, -1, -1, -2, -2, 0, 0,
-1, -1, 0, -1, -2, -1, 0, -3, -2, -1, -1, 0, -2, -3, -3, -1, -2, -2, -1, -1, -1,
-1, 0, -1, -1, -1, -1, -1, 0, -3, -1, 1, 1, -2, -1, 1, 0, -2, -1, -1, 0, -1, -2,
-1, 1, 0, -2, -1, 0, -2, -1, 2, -1, -1, -1, 0, -1, -1, -2, -1, -1, -1, -1, -2,
1, -1, -2, -2, -1, -1, -1, 0, -1, -1, -1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1,
1, 2, 2, -1, 1, 2, 1, 1, 1, 1, 1, 3, 2, 1, 2, 1, 3, 3, 2, 3, 0, 3, 4, 2, 2, 2,
2, 2, 3, 2, 2, 1, 0, 0, 3, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, -1, -1, 0, 0, -1,
-2, -1, 0, -2, -2, -1, -1, -2, -3, -3, -4, -2, -3, -2, -2, -2, -3, -3, -2, -2,
-3, -4, -2, -2, -3, -4, -3, -1, -1, -3, -3, -3, -3, -4, -2, -2, -3, -2, -3, -1,
-2, -1, -1, -1, 0, -1, -1, 0, 0, -2, 0, 1, -1, 0, 1, 1, 1, 1, 0, 2, 1, 2, 3, 1,
0, 3, 1, 0, 2, 2, 2, 2, 3, 2, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 1,
0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2,
0, 2, 1, 1, 1, 1, 2, 1, 0, 1, 2, 1, 0, 0, 1, 0, -1, -1, 1, 1, -2, -1, 0, 0, 0,
-1, 0, -1, -2, -1, 0, 0, -2, -2, -1, -2, -2, -1, -2, -1, -1, -1, -1, -1, 0, -1,
-1, -1, 0, -2, -2, -1, -1, 0, 0, -1, 0, -1, -1, -1, -1, 0, 0, -2, -2, 0, -1, -2,
-1, 0, -1, 0, 1, 0, 0, 0, 0, 1, 0, -1, 0, 0, 0, 0, 0, -1, 1, 0, 0, 2, 1, 0, 1,
0, 1, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2,
2, 3, 3, 4, 3, 3, 3, 3, 2, 2, 3, 3, 3, 3, 2, 3, 2, 3, 1, 1, 2, 2, 1, 1, 1, 1, 0,
0, -1, 0, -1, 1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -1, -2, -2, -2, -1, -1, -2,
-2, -2, -3, -3, -3, -2, -1, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -3, -2, -2,
-2, -2, -2, -2, -2, -1, -3, -2, 0, 0, -2, -1, -1, -1, -1, 0, -1, -1, 1, 0, 0, 0,
1, 1, 0, 1, 1, 1, 1, 2, 1, 1, 1, 0, 1, 1, 0, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1,
1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 3, 1, 2, 2, 2, 2, 1, 3,
2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 1, 0, 0, 1, 1, 0, 0, -1, 0,
0, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -2, -1, -1, -2, -3, -1, -1, -1, -2, -1,
-1, -2, -1, -1, -1, -1, -1, -2, 0, -1, -2, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0,
1, -1, -1, -1, -1, -1, 0, 1, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 1,
0, -1, -1, 0, 0, 0, 0, 1, 1, 0, -1, 0, 0, 0, 0, 0, -1, 1, 1, 1, 0, 0, 0, 1, 1,
0, 0, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1,
1, 1, 0, 1, 2, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, -1, 0, 0,
0, 1, 0, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, 1, 0, 0, -1, -1, -1, 1, -1, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1,
0, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0,
0, -1, 0, 0, 0, 0, 0, 1, 0, -1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 2, 1, 1,
1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1,
-1, 1, 0, 0, -1, -1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, -1, -1,
-1, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1, -1, 1, 0, -1, -1, 0,
0, 0, 0, -1, 1, 1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1,
0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, -1, -1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1,
1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0,
0, 0, 1, 0, 0, 1, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 1,
0, -1, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1,
0, 0, 0, 0, -1, 0, -1, 1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
0, -1, 0, -1, -1, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0,
-1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0,
1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, 1, -1, 0, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0, 1, 0, -1, 0, 0, 0,
-1, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, 0, -1,
0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, -1,
0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1,
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, -1, 0,
0, 0, 0, 0, 0, 1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, -1, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0,
1, 1, 0, 0, 0, -1, 0, -1, -1, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0,
-1, -1, };

#endif /* snare_H_ */
