# Makefile for FitACFBadlagsStereo
# ================================
# by R.J.Barnes
#
#
include $(MAKECFG).$(SYSTEM)

INCLUDE=-I$(IPATH)/base -I$(IPATH)/general -I$(IPATH)/superdarn 
IGNVER=1
OBJS = FitACFBadLagsStereo.o
OUTPUT = FitACFBadLagsStereo
LIBS=-lfit.1 -lraw.1 -lfitacf.1 -lradar.1  -lrtime.1 -ldmap.1 -lrcnv.1 
SLIB=-lm
 
include $(MAKELIB).$(SYSTEM)
