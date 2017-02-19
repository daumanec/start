
#include <stdio.h>

int main()
{
	float latitude;
	float longitude;
	char info[80];

	while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {

		if ((latitude < 50) && (latitude > 45)) {
			if ((longitude < 50) && (longitude > 45)) {
				printf("%f,%f,%s\n", latitude, longitude, info);
			}
		}
	}

	return 0;
	
}
