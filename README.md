# circles
Given a radius, calculate a variety of values of circles and spheres with that radius

Link with libm even though we included math.h
```
gcc -o circles circles.c -lm
```
Takes a non-zero positive number for an argument. Calculates to five decimal places.
```
./circles 8
Circumference: 50.26544
Area: 201.06177
Sphere surface area: 804.24707
Sphere volume: 2144.65885
```
