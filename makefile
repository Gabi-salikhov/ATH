CC = gcc
f = main.c

start:
	@${CC} ${f} -o main
	@./main
rm:
	@rm -rf main
