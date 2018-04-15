baseConverter: baseConverter.c
	gcc -o $@ $^ -g -Wall

clean:
	rm -f baseConverter