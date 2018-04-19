# Andy Sayler
# CI Practice
# Summer 2014

CC = gcc
CFLAGS = -c -g -Wall -Wextra
LFLAGS = -g -Wall -Wextra

PKG_MATH_LIBS = -lm
PKG_CHECK_LIBS = `pkg-config --libs check`

<<<<<<< HEAD
.PHONY: all dep clean test

all: geometry_test



=======
.PHONY: all dep clean

all: geometry_test

>>>>>>> d0e52472264e53d3511596128322fba7a12a03b4
geometry_test: geometry_test.o geometry.o
	$(CC) $(LFLAGS) $^ $(PKG_CHECK_LIBS) $(PKG_MATH_LIBS) -o $@

geometry_test.o: geometry_test.c geometry.h
	$(CC) $(CFLAGS) $< -o $@

geometry.o: geometry.c geometry.h
	$(CC) $(CFLAGS) $< -o $@

<<<<<<< HEAD



=======
>>>>>>> d0e52472264e53d3511596128322fba7a12a03b4
dep:
	sudo apt-get install check

clean:
	$(RM) *.o
	$(RM) geometry_test
	$(RM) *~
<<<<<<< HEAD

test: geometry_test
	./geometry_test
=======
>>>>>>> d0e52472264e53d3511596128322fba7a12a03b4
