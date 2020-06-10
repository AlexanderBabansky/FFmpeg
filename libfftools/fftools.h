#ifndef FFTOOLS_H
#define FFTOOLS_H

#include "stdarg.h"

int ffmpeg_main(int argc, char **argv, int* interruptFlag, int* processingFrameNumberOut, float* processingSecondOut);
int ffprobe_main(int argc, char **argv, void (*printCallback)(const char*, va_list));

#endif // FFTOOLS_H
