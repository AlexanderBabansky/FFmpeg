#ifndef FFTOOLS_H
#define FFTOOLS_H

int ffmpeg_main(int argc, char **argv, int* interruptFlag, int* processingFrameNumberOut, float* processingSecondOut);
int ffprobe_main(int argc, char **argv);

#endif // FFTOOLS_H
