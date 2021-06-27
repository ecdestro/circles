# circles
Given a radius, calculate a variety of values of circles and spheres with that radius

Link with libm even though we included math.h
```
gcc -o circles circles.c -lm
```
Takes a non-zero positive number for an argument. Calculates to five decimal places.
```
./circles 8
The circumference is 50.26544 units long
The area is 201.06177 square units
The surface area of a sphere is 804.24707 square units
The volume of a sphere is 2144.65885 cubic units
```
