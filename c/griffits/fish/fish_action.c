#include "fish_action.h"

void label (struct fish fish) {
	printf("Name: %s\nSpecies: %s\n%i years, %i teeth\n", fish.name, fish.species, fish.age, fish.teeth);
	printf("Give %.2f kg %s and allow %s during %.1f hours\n", fish.care.food.weight, fish.care.food.ingredients, fish.care.exersize.description, fish.care.exersize.duration);
}
