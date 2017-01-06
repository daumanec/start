#include "island.h"

void main() {
	char name[80];
	fgets(name, 80, stdin);
	island *p_island = create(name);

	display(p_island);
}
