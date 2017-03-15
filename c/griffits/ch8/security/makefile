encrypt.o: encrypt.c
	gcc -c -I ../inc/ encrypt.c -o ../obj/encrypt.o

checksum.o: checksum.c
	gcc -c -I ../inc/ checksum.c -o ../obj/checksum.o

libhfsecurity.a: encrypt.o checksum.o
	ar -rcs ../mylib/libhfsecurity.a ../obj/encrypt.o ../obj/checksum.o

testCode: testCode.c libhfsecurity.a
	gcc testCode.c -I ../inc/ -L ../mylib/ -lhfsecurity -o testCode
