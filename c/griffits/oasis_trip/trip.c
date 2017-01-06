#include "island.h"

int main() {
	island *start = NULL;
	island *i = NULL;
	island *next = NULL;
	char name[80];

	for (; fgets(name,80,stdin) != NULL; i = next) {
//	for (size_t j = 0; j < 3; j++) {
//		fgets(name,80,stdin) != NULL;
		next = create(name);
		if (start = NULL)
			start = next;
		if (i != NULL)
			i->next = next;
//		i = next;
	}
	fprintf(stdout,"ready to display\n");
	display(start);
	release(start);	// clean memory
}

