OBJ =test
HEADERS =
CC = gcc
CXX = g++
CFLAGS = -g
LDFLAGS = -lpthread
all: ${OBJ}
${OBJ}: %.o: %.c

clean:
	rm -f *.o 
	rm -f ${OBJ}

%.o:    %.cpp ${HEADERS}
	${CXX} ${CFLAGS} ${LDFLAGS} -c $< -o $@

%.o:    %.c ${HEADERS}
	${CC} ${CFLAGS} ${LDFLAGS} -c $< -o $@
