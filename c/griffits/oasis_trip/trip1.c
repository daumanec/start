#include "island.h"

void main() {
/*	island amity = {"Friendship", "09:00", "17:00", NULL};
	island craggy = {"Mounains", "09:00", "17:00", NULL};
	island isla_nublar = {"Rainings", "09:00", "17:00", NULL};
	island shutter = {"Evil", "09:00", "17:00", NULL};

	amity.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &shutter;
	island skull = {"Turtle", "09:00", "17:00", NULL};
	isla_nublar.next = &skull;
	skull.next = &shutter;

	display(&amity);
*/

	char name[80];
//	fgets(name, 80, stdin);
	fscanf(stdin, "%s" , name);
	island *p_island = create(name);
	fscanf(stdin, "%s" , name);
	island *p_island2 = create(name);
	p_island->next = p_island2;


	display(p_island);
}
