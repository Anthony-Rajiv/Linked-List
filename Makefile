SRC: linked_list.c main.c Unity/unity.c
INC: Unity

target: 
	gcc linked_list.c main.c Unity/unity.c -IUnity -o a.out

test: target
	./a.out

analyze: test
	cppcheck --enable=all *.c

memory_leak: test
	valgrind ./a.out

coverage: 
	gcc -fprofile-arcs -ftest-coverage linked_list.c main.c Unity/unity.c -IUnity -o a.out
	./a.out
	gcov -a *.c

clean:
	rm -rf *.out *.gcov *.gcda *.gcno *.o 