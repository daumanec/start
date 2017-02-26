fish_action.o: fish_action.c fish_action.h fish_charact.h
	gcc -c fish_action.c

fish_disp.o: fish_disp.c fish_action.h fish_charact.h
	gcc -c fish_disp.c

fish_disp: fish_disp.o fish_action.o
	gcc fish_disp.o fish_action.o -o fish_disp
