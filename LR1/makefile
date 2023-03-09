CFLAGS = -Wall

ALL: MAIN TEST CHECK
	cat ./check_result

DEBUG: CFLAGS+= -g
DEBUG: MAIN TEST CHECK
	cat ./check_result

MAIN: main.c
	$(CC) $(CFLAGS) -o main.o main.c

TEST: test.c
	$(CC) $(CFLAGS) -o test.o test.c

CHECK: OUT test.o
	./test.o < ./main_out > ./check_result

OUT: main.o
	./main.o > ./main_out

CLEAN:
	rm -f -v main_out check_result test.o main.o

$(V).SILENT:
