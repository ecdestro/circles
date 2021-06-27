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
		printf("Circumference: %.5lf\n", (2*pi*radius));
		printf("Area: %.5lf\n", (pi * (radius * radius)));
		printf("Sphere surface area: %.5lf\n", (4.00000 * pi * (radius * radius)));
		printf("Sphere volume: %.5lf\n", ((4.00000 / 3.00000) * pi * (radius * radius * radius)));
	}

	return 0;
}
, ((4 / 3) * pi * (radius * radius * radius)));
	}

	return 0;
}
