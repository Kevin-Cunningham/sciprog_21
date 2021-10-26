CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: mmc

mmc: main.o matmult.o
	$(CC) -o $@ $^ $(LDFLAGS)
## $@ refers to name of this action: mmc
## $^ refers to ALL OF THE ARGUMENTS

matmult.o: matmult.c
	$(CC) -c $(CCFLAGS) $<
##$< refers to the first argument

main.o: main.c
	$(CC) -c $(CCFLAGS) $<
clean:
	rm *.o
