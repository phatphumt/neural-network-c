com:
	gcc -c ./src/*.c
	# gcc ./bin/linked_list.o ./bin/read_csv.o -o main

run:
	make com
	clear
	./main