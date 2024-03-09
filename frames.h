#ifndef __FRAMES_H
#define __FRAMES_H

#define FRAME_DELAY (42)
#define FRAME_WIDTH (48)
#define FRAME_HEIGHT (48)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
const byte PROGMEM frames[][288] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,3,255,255,224,0,0,31,0,1,248,0,0,120,0,0,30,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,127,254,0,112,28,3,252,63,192,56,48,15,0,1,240,12,224,56,0,0,28,7,96,240,0,0,15,6,49,192,3,224,3,140,31,128,127,254,0,248,14,1,240,15,128,112,4,7,0,0,224,32,0,28,0,0,56,0,0,56,0,0,28,0,0,112,7,240,6,0,0,96,63,254,7,0,0,48,240,15,14,0,0,27,128,1,220,0,0,15,0,0,248,0,0,6,0,0,48,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,3,255,255,224,0,0,31,0,1,248,0,0,120,0,0,30,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,127,254,0,112,28,3,252,63,192,56,48,15,0,1,240,12,224,56,0,0,28,7,96,240,0,0,15,6,49,192,3,224,3,140,31,128,127,254,0,248,14,1,240,15,128,112,4,7,0,0,224,32,0,28,0,0,56,0,0,56,0,0,28,0,0,112,7,240,6,0,0,96,63,254,7,0,0,48,240,15,14,0,0,27,128,1,220,0,0,15,0,0,248,0,0,6,0,0,48,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,3,255,255,224,0,0,31,0,1,248,0,0,120,0,0,30,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,127,254,0,112,28,3,252,63,192,56,48,15,0,1,240,12,224,56,0,0,28,7,96,240,0,0,15,6,49,192,3,224,3,140,31,128,127,254,0,248,14,1,240,15,128,112,4,7,0,0,224,32,0,28,0,0,56,0,0,56,0,0,28,0,0,112,7,240,6,0,0,96,63,254,7,0,0,48,240,15,14,0,0,27,128,1,220,0,0,15,0,0,248,0,0,6,0,0,48,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,3,255,255,224,0,0,31,0,1,248,0,0,120,0,0,30,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,127,254,0,112,28,3,252,63,192,56,48,15,0,1,240,12,224,56,0,0,28,7,96,240,0,0,15,6,49,192,3,224,3,140,31,128,127,254,0,248,14,1,240,15,128,112,4,7,0,0,224,32,0,28,0,0,56,0,0,56,0,0,28,0,0,112,7,240,6,0,0,96,63,254,7,0,0,48,240,15,14,0,0,27,128,1,220,0,0,15,0,0,248,0,0,6,0,0,48,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,3,255,255,224,0,0,31,0,1,248,0,0,120,0,0,30,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,127,254,0,112,28,3,252,63,192,56,48,15,0,1,240,12,224,56,0,0,28,7,96,240,0,0,15,6,49,192,63,252,3,140,31,129,254,127,128,248,14,7,128,3,224,112,4,14,0,0,112,32,0,56,0,0,28,0,0,112,1,192,14,0,0,224,63,252,7,0,0,112,248,31,14,0,0,57,192,3,156,0,0,31,0,0,248,0,0,14,0,0,112,0,0,4,15,240,32,0,0,0,31,248,0,0,0,0,120,30,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,254,0,0,0,1,255,255,192,0,0,31,128,1,248,0,0,120,0,0,62,0,1,224,0,0,7,128,3,128,0,0,1,192,14,0,63,254,0,112,28,3,255,255,192,56,56,15,128,1,240,12,96,60,0,0,60,6,96,240,15,240,14,6,49,192,127,255,3,140,27,131,224,7,193,216,15,15,0,0,240,112,4,28,0,0,56,48,0,56,0,0,12,0,0,224,15,240,6,0,0,96,127,254,7,0,0,49,224,15,142,0,0,27,128,1,220,0,0,31,0,0,120,0,0,12,0,0,48,0,0,0,7,224,0,0,0,0,31,248,0,0,0,0,120,30,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,248,0,0,0,1,255,255,192,0,0,31,128,3,248,0,0,124,0,0,62,0,0,224,0,0,7,128,3,128,0,0,1,192,14,0,63,252,0,112,28,1,255,255,128,56,56,15,128,3,240,28,96,60,0,0,60,6,224,112,0,0,14,7,113,192,7,240,3,142,59,128,127,255,1,220,31,3,224,15,192,248,12,7,0,0,240,48,0,28,0,0,56,0,0,56,0,0,12,0,0,224,7,240,6,0,0,224,63,254,7,0,0,112,240,15,14,0,0,59,128,1,220,0,0,31,0,0,248,0,0,14,0,0,48,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,31,248,0,0,0,0,62,124,0,0,0,0,240,15,0,0,0,0,96,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,254,0,0,0,3,255,255,192,0,0,31,128,1,248,0,0,120,0,0,62,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,63,254,0,112,28,1,255,255,192,24,112,15,128,1,240,12,224,60,0,0,60,7,224,240,0,0,15,7,113,192,0,0,3,142,59,128,0,0,1,220,31,0,0,0,0,120,12,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,127,254,0,0,0,1,224,7,128,0,0,7,0,0,224,0,0,14,0,0,112,0,0,28,15,240,56,0,0,12,63,252,56,0,0,6,224,7,112,0,0,7,192,3,224,0,0,3,0,0,192,0,0,0,15,240,0,0,0,0,63,252,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,252,0,0,0,1,248,63,128,0,0,7,0,1,224,0,0,28,0,0,56,0,0,112,15,240,14,0,0,224,127,255,3,0,1,131,192,3,193,128,3,7,0,0,224,192,1,156,0,0,57,128,0,240,0,0,15,0,0,96,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,240,0,0,0,0,28,56,0,0,0,0,127,254,0,0,0,0,255,255,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,28,120,0,0,0,0,96,134,0,0,0,0,142,113,0,0,0,0,179,197,128,0,0,0,127,255,0,0,0,0,60,60,0,0,0,0,240,15,0,0,0,0,96,6,0,0,0,0,48,12,0,0,0,0,24,24,0,0,0,0,12,48,0,0,0,0,6,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,63,252,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,49,140,0,0,0,0,95,250,0,0,0,0,255,255,0,0,0,0,240,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,248,0,0,0,0,255,255,0,0,0,3,192,3,192,0,0,7,0,128,224,0,0,28,31,252,56,0,0,56,240,31,12,0,0,115,128,1,206,0,0,55,0,0,252,0,0,28,0,0,56,0,0,8,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,63,252,0,0,0,0,124,62,0,0,0,0,240,15,0,0,0,0,96,6,0,0,0,0,48,12,0,0,0,0,24,24,0,0,0,0,12,48,0,0,0,0,6,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,3,254,127,224,0,0,31,0,0,248,0,0,120,0,0,30,0,0,224,0,0,7,0,3,128,63,252,1,192,7,1,255,255,128,224,14,7,128,3,224,112,28,30,0,0,120,56,12,120,0,0,28,56,6,224,0,0,7,112,7,192,0,0,3,224,3,128,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,63,252,0,0,0,0,248,31,0,0,0,1,192,3,128,0,0,3,131,224,192,0,0,3,31,248,192,0,0,1,240,15,128,0,0,0,239,247,0,0,0,0,63,252,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,254,0,0,0,3,255,255,192,0,0,31,128,1,248,0,0,120,0,0,62,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,63,254,0,112,28,1,255,255,192,24,112,15,128,1,240,12,224,60,0,0,60,7,224,240,0,0,15,7,113,192,0,0,3,142,59,128,0,0,1,220,31,0,0,0,0,120,12,0,0,0,0,48,0,0,15,248,0,0,0,0,255,255,0,0,0,1,224,7,192,0,0,7,0,0,224,0,0,28,0,0,48,0,0,56,7,224,28,0,0,56,63,252,12,0,0,24,252,63,24,0,0,15,192,3,248,0,0,7,128,1,240,0,0,2,0,0,96,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,63,252,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,248,0,0,0,1,255,255,192,0,0,31,128,3,248,0,0,124,0,0,62,0,0,224,0,0,7,128,3,128,0,0,1,192,14,0,63,252,0,112,28,1,255,255,128,56,56,15,128,3,240,28,96,60,0,0,60,6,224,112,0,0,14,7,113,192,7,240,3,142,59,128,127,255,1,220,31,3,224,15,192,248,12,7,0,0,240,48,0,28,0,0,56,0,0,56,0,0,12,0,0,224,7,240,6,0,0,224,63,254,7,0,0,112,240,15,14,0,0,59,128,1,220,0,0,31,0,0,248,0,0,14,0,0,48,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,31,248,0,0,0,0,62,124,0,0,0,0,240,15,0,0,0,0,96,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,254,0,0,0,1,255,255,192,0,0,31,128,1,248,0,0,120,0,0,62,0,1,224,0,0,7,128,3,128,0,0,1,192,14,0,63,254,0,112,28,3,255,255,192,56,56,15,128,1,240,12,96,60,0,0,60,6,96,240,15,240,14,6,49,192,127,255,3,140,27,131,224,7,193,216,15,15,0,0,240,112,4,28,0,0,56,48,0,56,0,0,12,0,0,224,15,240,6,0,0,96,127,254,7,0,0,49,224,15,142,0,0,27,128,1,220,0,0,31,0,0,120,0,0,12,0,0,48,0,0,0,7,224,0,0,0,0,31,248,0,0,0,0,120,30,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,3,255,255,224,0,0,31,0,1,248,0,0,120,0,0,30,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,127,254,0,112,28,3,252,63,192,56,48,15,0,1,240,12,224,56,0,0,28,7,96,240,0,0,15,6,49,192,63,252,3,140,31,129,254,127,128,248,14,7,128,3,224,112,4,14,0,0,112,32,0,56,0,0,28,0,0,112,1,192,14,0,0,224,63,252,7,0,0,112,248,31,14,0,0,57,192,3,156,0,0,31,0,0,248,0,0,14,0,0,112,0,0,4,15,240,32,0,0,0,31,248,0,0,0,0,120,30,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,3,255,255,224,0,0,31,0,1,248,0,0,120,0,0,30,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,127,254,0,112,28,3,252,63,192,56,48,15,0,1,240,12,224,56,0,0,28,7,96,240,0,0,15,6,49,192,3,224,3,140,31,128,127,254,0,248,14,1,240,15,128,112,4,7,0,0,224,32,0,28,0,0,56,0,0,56,0,0,28,0,0,112,7,240,6,0,0,96,63,254,7,0,0,48,240,15,14,0,0,27,128,1,220,0,0,15,0,0,248,0,0,6,0,0,48,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,3,255,255,224,0,0,31,0,1,248,0,0,120,0,0,30,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,127,254,0,112,28,3,252,63,192,56,48,15,0,1,240,12,224,56,0,0,28,7,96,240,0,0,15,6,49,192,3,224,3,140,31,128,127,254,0,248,14,1,240,15,128,112,4,7,0,0,224,32,0,28,0,0,56,0,0,56,0,0,28,0,0,112,7,240,6,0,0,96,63,254,7,0,0,48,240,15,14,0,0,27,128,1,220,0,0,15,0,0,248,0,0,6,0,0,48,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,3,255,255,224,0,0,31,0,1,248,0,0,120,0,0,30,0,1,224,0,0,7,128,7,128,0,0,1,224,14,0,127,254,0,112,28,3,252,63,192,56,48,15,0,1,240,12,224,56,0,0,28,7,96,240,0,0,15,6,49,192,3,224,3,140,31,128,127,254,0,248,14,1,240,15,128,112,4,7,0,0,224,32,0,28,0,0,56,0,0,56,0,0,28,0,0,112,7,240,6,0,0,96,63,254,7,0,0,48,240,15,14,0,0,27,128,1,220,0,0,15,0,0,248,0,0,6,0,0,48,0,0,0,15,240,0,0,0,0,31,248,0,0,0,0,112,14,0,0,0,0,224,7,0,0,0,0,112,14,0,0,0,0,56,28,0,0,0,0,28,56,0,0,0,0,14,112,0,0,0,0,7,224,0,0,0,0,3,192,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

#endif