CC = gcc
CFLAGS = -g -O2 -Wall -W
LDFLAGS =
LIBS = -lm

all: wmm_file wmm_grid wmm_point

wmm_file: wmm_file.c GeomagnetismLibrary.o
	${CC} ${LDFLAGS} -o wmm_file wmm_file.c GeomagnetismLibrary.o ${LIBS}

wmm_grid: wmm_grid.c GeomagnetismLibrary.o
	${CC} ${LDFLAGS} -o wmm_grid wmm_grid.c GeomagnetismLibrary.o ${LIBS}

wmm_point: wmm_point.c GeomagnetismLibrary.o
	${CC} ${LDFLAGS} -o wmm_point wmm_point.c GeomagnetismLibrary.o ${LIBS}

GeomagnetismLibrary.o:
	${CC} ${CFLAGS} -c GeomagnetismLibrary.c

clean:
	rm -f *.o
	rm -f wmm_file wmm_grid wmm_point
