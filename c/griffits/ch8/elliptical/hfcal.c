#include "hfcal.h"

void DisplayCalories(float weight, float distance, float coeff)
{
    printf("Weight: %3.2f pounds\n", weight);
    printf("Distance: %3.2f miles\n", distance);
    printf("Calories burned: %4.2f cal\n", coeff * weight * distance);
}
