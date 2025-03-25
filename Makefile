all:
	gcc -o ./build/Brushback ./src/main.c -L./src -lraylib -lm
debug:
	gcc -g -o ./build/Brushback ./src/main.c -L./src -lraylib -lm
run:
	./build/Brushback
