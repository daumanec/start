hfcal.o: hfcal.c
	gcc -I ../inc/ -c hfcal.c -o ../obj/hfcal.o

elliptical.o: elliptical.c
	gcc -I ../inc/ -c elliptical.c -o ../obj/elliptical.o

libhfcal.a: hfcal.o
	ar -rcs ../mylib/libhfcal.a ../obj/hfcal.o

elliptical: elliptical.o libhfcal.a
	gcc ../obj/elliptical.o -L ../mylib/ -lhfcal -o elliptical
