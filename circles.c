#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float radius = 0;
	float pi = 3.14159;

	if((argc != 2) || (atof(argv[1]) <= 0)) {
		errno = 1;
		perror("Use EXACTLY one non-zero positive number");
	}
	else {
		radius = atof(argv[1]);
		printf("The circumference is %.5lf units long\n", (2*pi*radius));
		printf("The area is %.5lf square units\n", (pi * (radius * radius)));
		printf("The surface area of a sphere is %.5lf square units\n", (4 * pi * (radius * radius)));
		printf("The volume of a sphere is %.5lf cubic units\n", ((4 / 3) * pi * (radius * radius * radius)));
	}

	return 0;
}
