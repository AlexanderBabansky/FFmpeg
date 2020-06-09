NAME = fftools
DESC = ffmpeg and ffprobe in a shared library

HEADERS = fftools.h                                                     \
          version.h                                                     \

OBJS = ffmpeg.o                                                         \
       ffmpeg_opt.o                                                     \
       ffmpeg_filter.o                                                  \
       ffmpeg_hw.o                                                      \
       ffprobe.o                                                        \
       cmdutils.o                                                       \

SLIBOBJS-$(CONFIG_LIBMFX) += ffmpeg_qsv.o
ifndef CONFIG_VIDEOTOOLBOX
SLIBOBJS-$(CONFIG_VDA) += ffmpeg_videotoolbox.o
endif
SLIBOBJS-$(CONFIG_VIDEOTOOLBOX) += ffmpeg_videotoolbox.o