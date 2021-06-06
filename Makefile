SRC: linked_list.c main.c Unity/unity.c

a.out: $(SRC)
	gcc $^ -o $@

run: a.out
	./a.out

cppcheck :
	cppcheck --enable=all *.c

valgrind:
	valgrind ./a.out

clear:
	clear