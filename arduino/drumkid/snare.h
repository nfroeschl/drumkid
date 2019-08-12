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
 
CONSTTABLE_STORAGE(int8_t) snare_DATA [] = {1, -3, 9, 17, -12, -22, -21, -7, 3,
11, 13, 13, 18, 11, 4, 1, 4, 1, -2, -12, -13, -9, -18, -21, -20, -16, -8, -4, 6,
12, 5, -1, -2, 11, 24, 21, 9, 0, -6, -9, -7, 1, 5, 8, 15, 15, 20, 21, 11, 12,
17, 18, 12, 4, -4, -7, -11, -32, -24, -11, -27, -9, -6, -24, -9, -2, -23, -13,
14, -13, -28, -11, -15, -16, -15, -9, -1, 1, -1, -2, -9, -27, -4, 28, 14, 2, 1,
-21, -18, 20, 42, 34, 21, 28, 41, 36, 25, 21, 16, 13, 11, 6, 5, 6, -16, -26,
-16, -3, 1, -20, -14, -10, -19, -5, 4, 8, 16, 17, 20, 23, 20, 9, 3, 2, 4, -16,
-4, 3, -15, -32, -16, -1, -4, 25, 17, 22, 43, 27, 22, 25, -3, -11, 5, 33, 0,
-13, 17, -24, -37, -55, -64, -55, -40, -16, -21, -11, -25, -63, -75, -55, -54,
-29, 2, -60, -99, -48, -20, -74, -88, -19, 8, -66, -59, 21, 20, -13, -19, 4, 32,
43, 34, 44, 51, 52, 54, 46, 56, 50, 44, 46, 26, 41, 43, 29, 41, 46, 22, 14, 39,
49, 40, 29, 31, 35, 34, 19, 21, 19, 11, 13, 30, 30, 23, 29, 39, 11, -19, -5, 29,
3, -42, 14, 22, 17, 9, -10, 17, 17, -6, 15, 30, -57, -109, -65, -4, 0, -50, 1,
4, -48, -61, -52, -42, -80, -84, -83, -80, -81, -96, -79, -45, -66, -84, -66,
-65, -37, -46, -73, -65, -68, 0, -15, -68, -56, -59, -49, -34, -5, 43, 26, -38,
-17, 23, 55, 9, -14, 44, 58, 48, 52, 38, 44, 72, 64, 56, 47, 58, 64, 58, 52, 63,
61, 50, 45, 47, 59, 47, 36, 52, 59, 48, 31, 43, 50, 36, 27, 22, 26, 34, 44, 25,
25, 23, 9, -21, -3, 28, -1, -23, -15, 14, 45, -7, -62, 6, 24, -26, -63, -55, -4,
18, -39, -55, -15, 13, -45, -103, -25, 25, -48, -99, -54, -22, -33, -61, -57,
-67, -56, -62, -64, -44, -53, -63, -67, -60, -53, 24, 10, -50, -24, 6, 4, -27,
-43, 12, -8, -61, -17, -8, -23, 25, 58, 11, -6, -15, 28, 53, 36, 21, 35, 41, 1,
39, 46, 23, 29, 50, 60, 45, 53, 53, 36, 43, 13, 17, 39, 42, 32, 28, 38, 27, -8,
-20, 45, 20, -3, -20, -9, 22, -24, -8, 7, 4, -40, -31, 39, 52, -1, -33, 24, -22,
-54, -9, -2, 33, 22, -7, -19, -24, 29, 30, -11, 7, 18, -13, -15, -17, 2, 38,
-11, -3, 22, 4, 5, 1, 30, 7, -36, -5, 24, 5, -25, 8, 31, 5, 21, 4, 7, 21, 29,
17, -4, 21, 7, 18, 15, 14, 7, -6, -16, -14, 40, 5, -5, 14, 27, 21, 3, -1, 5, 35,
21, 4, 0, 37, -15, -26, 29, 4, 3, 24, 41, 9, -25, -17, 8, 26, 6, -3, 9, -9, 0,
-6, -24, 15, 9, 12, 7, -26, -11, -12, -7, -1, -22, 3, 1, -42, -17, -10, -22,
-21, -4, -9, -38, -29, 10, -22, -62, -36, 0, 4, -24, -24, -22, -10, -7, -25,
-36, -7, -29, -30, -18, -18, 3, 2, 13, 8, -19, -2, 27, 13, 13, -11, 18, 37, 16,
6, -12, 5, 10, -7, 12, 18, 11, 46, 27, 9, 11, 1, 15, 39, 8, -6, 6, -10, 23, 32,
3, 17, 38, 34, -10, -31, 9, 5, 21, 36, 13, 9, 22, 17, -7, 20, 21, 9, 1, 10, 27,
17, 7, -1, -4, 11, 29, -8, -10, 4, -2, 12, 10, -11, 2, 9, -2, 2, -12, -8, -1, 4,
2, 0, 0, -4, 0, 1, 2, -13, -19, 5, 14, 7, 0, -6, 8, 16, 11, -2, 1, 5, 8, 1, 8,
20, 8, 7, 5, 0, -9, -4, -11, 9, 12, 3, 14, 4, -9, 5, 27, -19, -22, -1, 2, -3,
-6, 5, 0, -19, -15, -1, -5, -7, -10, -9, -4, 2, -4, -4, -4, -21, -25, 5, -3,
-10, -1, -9, -10, -8, 7, -10, -30, -15, 7, -1, -15, -7, 6, 4, -2, -4, -9, -6,
-2, 12, 8, -16, -7, -4, 3, -4, -8, -10, -2, 8, 4, -3, 5, 3, -9, 7, 10, 9, 1, 10,
16, 2, 4, 11, 8, 0, 9, 17, 7, 1, 7, 4, 10, 11, -1, 3, 6, 16, 9, -4, 6, 7, 9, 12,
0, 1, 6, 9, 10, 8, 9, 1, -1, 7, 10, 4, -6, -3, 8, 10, 1, 7, 12, 7, 13, 2, 1, 5,
2, 7, 3, -2, 1, 3, 3, -5, -2, 10, 3, -6, -9, 2, 3, -4, 2, -10, -3, 4, -9, -4, 3,
2, -1, -8, -10, -6, -3, -5, -6, -8, -11, -11, -7, -5, -7, -12, -10, -2, -4, -10,
-8, -8, -8, 0, -5, -8, -1, 5, -3, -12, -6, 3, -5, -10, -15, 2, 5, -3, -5, -4, 2,
0, 4, 3, -6, -5, 11, 8, 8, 4, -3, -2, -1, 2, 1, 0, -1, 5, 7, -2, -8, 0, 5, 3, 3,
-9, -11, 7, 14, 0, -8, 2, 5, 1, 1, -4, -4, 6, 4, -6, -2, 1, 6, 3, -4, 0, 3, 7,
6, 7, 10, 1, -1, -3, 1, 10, -2, -7, 6, 10, 5, -2, 2, 7, 5, 5, 4, 2, -5, 2, 6,
-2, -1, 4, 1, 1, 4, 2, 1, 5, 0, -3, -3, -1, 3, -1, -3, -3, -4, -2, -2, -8, -1,
2, -5, -10, -6, 1, 3, 7, -8, -10, -1, 1, 1, -6, -6, -4, -6, -8, -5, -1, -9, -8,
-1, -4, -10, -4, 4, -1, -2, -7, -6, -1, -4, -3, -5, -7, -5, -5, -4, -5, -4, -1,
-1, -3, -6, 5, 3, -2, 0, -4, 1, 5, 2, -3, 2, 4, -4, -4, 0, -2, -2, -2, -1, 0, 2,
3, -6, -4, 5, -1, -1, 4, 1, 1, -1, 2, 1, -1, 0, 2, 2, -1, 1, 1, 2, -2, 0, 3, 2,
-1, 1, 3, 1, 5, 1, 2, 2, 0, 0, -2, 0, 3, 2, 0, 1, 2, 2, 2, 1, 3, 3, -1, -1, -1,
-1, 0, -1, 3, -1, 0, 3, 1, -3, -5, 0, 2, 3, -6, -2, 4, -6, -7, 3, 0, -1, 1, 0,
-5, -4, -2, -4, -1, -1, -6, -5, -2, -4, -5, -5, -8, -7, -5, -5, -6, -9, -5, -1,
-3, -6, -7, -3, 0, 1, -2, -7, -4, -1, -1, -1, -3, -3, -1, -5, -2, 0, -3, 1, 0,
0, -2, -6, 0, 1, -4, -5, 2, -3, -3, 1, 1, 0, -2, -3, -2, 4, 2, -3, 1, 0, 2, 3,
-2, -1, 0, 1, 2, -3, 1, -2, -5, -1, 5, 2, -5, -1, 6, 1, -5, 3, 4, -3, -3, 2, 2,
-5, -4, 4, 4, 1, -1, 0, 0, 1, 1, 1, -1, 2, 3, -3, 0, 3, -3, -3, 2, 3, -1, -1, 1,
-2, -2, -4, -1, 2, -2, -1, 1, 1, -1, -2, 0, 1, -3, -3, 1, 3, -2, -4, -5, -1, 4,
1, -2, 1, -3, -4, -1, -6, -6, -3, -3, -7, -2, 1, -2, -2, -4, -3, -2, -3, 0, -4,
-5, 0, 0, -1, -2, -4, -1, 0, 0, -2, -1, -1, -4, 1, -2, -3, -3, -2, -2, -3, -3,
-1, 0, 0, 1, -1, -2, -1, 1, -2, -3, 0, -2, -1, -1, -2, 0, -2, 1, -3, -6, -3, 1,
-1, -4, -2, -1, 3, -1, -5, -3, 3, 0, -3, 1, -1, 0, -3, -1, 0, -1, 1, -1, -2, -2,
1, 1, 0, 0, -2, -1, -1, -1, -1, 0, -2, 1, 3, 1, -2, 0, 3, 2, 0, -3, 1, 4, 2, 0,
3, 4, 1, 3, 4, 1, 1, -1, 2, 4, 0, 2, 3, 3, 2, 0, 1, 4, 1, 0, 2, 2, 1, 0, 0, 0,
1, -1, 1, 1, 1, 1, 0, 0, -2, -1, 0, -1, -3, -3, -1, -4, -2, -1, -2, -4, -3, -3,
-5, -3, -4, -3, -3, -4, -6, -4, -4, -6, -5, -4, -3, -6, -3, -5, -4, -4, -3, -3,
-6, -5, -7, -4, -1, -1, -4, -5, -2, -4, -1, -2, -6, -2, -2, -2, -1, -3, -3, 0,
0, 1, 1, 1, 2, 3, 1, 1, 2, 1, 0, 2, 2, 2, 2, 0, 2, 2, 1, 2, 0, 3, 4, 3, 0, 1, 3,
3, 1, 2, 2, 1, 2, 2, 1, 0, 1, 1, 1, 2, 1, 2, 2, 1, 1, -1, 2, 1, 0, 1, -1, 1, 2,
1, 0, 1, 0, 0, -1, 0, -1, -1, 1, 0, -1, 1, 0, -2, 0, 0, 0, 0, -2, -3, 0, -1, 0,
-1, 1, -1, -3, -1, 0, -3, -3, -2, -2, -1, -1, -3, -2, -1, -2, -2, -1, 0, -1, -2,
0, 0, 0, -2, 0, -1, 0, -2, -2, 1, 0, -1, -1, 2, 0, -1, -1, -1, -1, -1, -2, -1,
1, 0, -1, 0, 0, -2, -1, 1, 0, 0, -2, 0, -1, -1, -1, -1, -1, 0, -2, -2, 1, -1,
-2, -1, -2, 0, -1, 0, -1, -1, -1, 0, 1, -1, -1, 1, 0, -1, 1, 1, 0, 0, 1, 1, 0,
3, 1, -1, 0, 2, 1, 0, 0, 2, 1, 2, 2, 2, 2, 1, 3, 3, 2, 3, 1, 2, 3, 2, 1, 2, 2,
2, 4, 2, 2, 3, 0, 1, 2, 2, 0, 0, 0, 2, 1, 1, 0, 1, 1, 0, 0, -1, 0, 0, 0, -1, -2,
-1, 0, -2, -1, -1, -1, -2, -2, -3, -4, -2, -3, -2, -3, -3, -3, -4, -3, -3, -3,
-4, -2, -2, -4, -3, -3, -2, -2, -3, -3, -3, -2, -3, -3, -1, -3, -2, -2, -2, -1,
-2, -1, 0, 0, -1, -1, -1, 0, -2, 0, 1, 0, 0, 0, 2, 2, 1, 1, 2, 0, 1, 3, 2, 0, 1,
2, 0, 2, 3, 2, 3, 2, 2, 1, 2, 3, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 0,
1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 2, 1, 2,
2, 1, 0, -1, 1, 1, 0, 1, 1, 1, -1, 1, 0, 1, 0, -1, 1, 1, -1, -1, 1, 0, -1, -1,
-1, -1, -1, 0, -1, 0, -1, -2, 0, 0, -1, -2, -1, -1, 0, -2, -1, -1, -1, -1, -1,
0, 0, -1, -2, -1, -1, -1, -1, -1, 0, 0, -1, -1, -2, 0, 0, -1, -1, 0, -1, -1, 0,
-1, -2, 0, 1, 0, 0, -1, 1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0,
0, 0, 0, 1, 1, 1, 1, 1, 2, 1, 1, 0, 1, 3, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 3, 2,
2, 2, 3, 3, 2, 3, 3, 3, 3, 1, 2, 3, 3, 3, 2, 3, 2, 2, 1, 1, 2, 3, 1, 1, 1, 0, 1,
0, 0, -1, 0, 1, 0, -2, -1, -1, -1, -1, -1, -1, -2, -1, -2, -2, -3, -2, -2, -3,
-2, -2, -3, -3, -3, -2, -2, -3, -3, -2, -1, -2, -3, -3, -2, -1, -2, -3, -2, -2,
-2, -1, -1, -2, -1, -3, -2, -1, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, 1, -1, 0,
0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 3,
1, 1, 2, 1, 1, 3, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 1, 2,
2, 2, 2, 1, 1, 0, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0,
-1, 0, 0, -2, -1, -1, -2, -1, -1, -1, -2, -1, -1, 0, 0, -2, -1, -2, -2, -1, -1,
-2, -1, 0, -1, -1, -2, -1, -1, -1, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, 0, -1,
0, 0, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1, 1, -1,
-1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0,
1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, -1, 1, 0, 0, 0, 1,
0, 0, 0, 0, 1, -1, 0, -1, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, -1, 0,
-1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 1, 0, -1, -1, -1, -1, -1, -1, 0, -1,
-1, 0, -1, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1,
0, -1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1,
0, 1, 1, 1, 1, 2, 2, 1, 2, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0,
1, 0, 0, 1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0,
-1, -1, 0, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0,
1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0,
1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,
-1, 0, 0, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1,
-1, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0,
0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1,
0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0,
0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1,
0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0,
0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
1, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 1, 0, 0, 0, -1, -1, 0, 0, -1, 0,
-1, 1, 0, -1, 0, -1, 1, 0, 0, 0, -1, -1, 0, 1, 0, 0, 0, 1, 0, -1, 1, 0, 1, 0, 0,
0, 0, 0, 0, 1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0,
-1, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0,
0, 0, -1, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, };

#endif /* snare_H_ */
