com:
	gcc -c ./src/*.c
	mv *.o ./bin
	gcc ./bin/*.o -o main

run:
	make com
	clear
	./main