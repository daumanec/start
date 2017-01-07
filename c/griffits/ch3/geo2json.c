#include <stdio.h>

int main()
{
	float latitude;
	float longitude;
	char info[80];
	int started = 0;

	puts("data=[");
	while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
//	while (scanf("%f,%f,%c", latitude, longitude, info) == 3) {

		if (started) {
			printf(",\n");
		}
		else {
			started = 1;
		}

		if (latitude <= -180 || latitude > 180) {
			fprintf(stderr, "Wrong latitude: %f\n", latitude);
			return 2;
		}
		if (longitude < -90 || longitude > 90 ) {
			fprintf(stderr, "Wrong longitude: %f\n", longitude);
			return 2;
		}

		printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
	}

	puts("\n]");
	return 0;
	
}
