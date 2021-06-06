SRC: linked_list.c main.c Unity/unity.c

a.out: $(SRC)
	gcc $^ -o $@

run: a.out
	./a.out

cppcheck : $(SRC)
	cppcheck --enable=all Linked_List -iLinked_List/Unity