.PHONY: clean all

FLAGS= -Wall -g

all: tt1_fixed tt1_incorrect

tt1_fixed: tt1_fixed.c
	gcc ${FLAGS} -o $@ $<

tt1_incorrect: tt1_incorrect.c
	gcc ${FLAGS} -o $@ $<

clean:
	rm tt1_fixed tt1_incorrect
