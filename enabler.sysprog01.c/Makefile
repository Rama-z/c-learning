UNAME_S := $(shell uname -s)

CC=gcc
CFLAGS=-std=c99
# Debugging

ifndef DEBUG
DEBUG=1
endif

ifeq ($(DEBUG), 1)
CFLAGS+=-g -O0
else
CFLAGS+=-O3
endif

# OS specific, add flags for 64-bit architecture
# force x86_64 architecture on Mac OS X
ifeq ($(UNAME_S),Darwin)
CC=clang
CFLAGS+=-arch x86_64
endif

SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)

TARGETS=tipe_data \
				tipe_bool \
				basic_io \
				basic_io_if \
				basic_io_ifelse \
				basic_io_switch \
				basic_math \
				basic_compare \
				basic_compare_bool \
				basic_function \
				basic_function_proto \
				basic_function_noret \
				basic_function_multi \
				basic_ptr \
				basic_ptr_arr \
				basic_ptr_func \
				basic_struct \
				basic_struct_arr \
				basic_union \
				basic_preproc \
				basic_preproc_token_pasting \
				basic_typedef \

all: $(TARGETS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(TARGETS)

tipe_data: tipe_data.o
	$(CC) $(CFLAGS) -o $@ $^

tipe_bool: tipe_bool.o
	$(CC) $(CFLAGS) -o $@ $^

basic_io: basic_io.o
	$(CC) $(CFLAGS) -o $@ $^

basic_io_if: basic_io_if.o
	$(CC) $(CFLAGS) -o $@ $^

basic_io_ifelse: basic_io_ifelse.o
	$(CC) $(CFLAGS) -o $@ $^

basic_io_switch: basic_io_switch.o
	$(CC) $(CFLAGS) -o $@ $^

basic_math: basic_math.o
	$(CC) $(CFLAGS) -o $@ $^

basic_compare: basic_compare.o
	$(CC) $(CFLAGS) -o $@ $^

basic_compare_bool: basic_compare_bool.o
	$(CC) $(CFLAGS) -o $@ $^

basic_function: basic_function.o
	$(CC) $(CFLAGS) -o $@ $^

basic_function_proto: basic_function_proto.o
	$(CC) $(CFLAGS) -o $@ $^

basic_function_noret: basic_function_noret.o
	$(CC) $(CFLAGS) -o $@ $^

# multiple files
basic_function_multi: basic_function_multi.o basic_functions.o
	$(CC) $(CFLAGS) -o $@ $^

basic_ptr: basic_ptr.o
	$(CC) $(CFLAGS) -o $@ $^

basic_ptr_arr: basic_ptr_arr.o
	$(CC) $(CFLAGS) -o $@ $^

basic_ptr_func: basic_ptr_func.o 
	$(CC) $(CFLAGS) -o $@ $^

basic_struct: basic_struct.o
	$(CC) $(CFLAGS) -o $@ $^

basic_struct_arr: basic_struct_arr.o
	$(CC) $(CFLAGS) -o $@ $^

basic_union: basic_union.o
	$(CC) $(CFLAGS) -o $@ $^

basic_preproc: basic_preproc.o
	$(CC) $(CFLAGS) -o $@ $^

basic_preproc_token_pasting: basic_preproc_token_pasting.o
	$(CC) $(CFLAGS) -o $@ $^

basic_typedef: basic_typedef.o
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: all clean
