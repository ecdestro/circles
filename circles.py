import sys
from math import pi

rad = float(sys.argv[1])
print("Circumference: ", (2 * pi * rad))
print("Area: ", (pi * (rad * rad)))
print("Sphere surface area: ", (4 * pi * (rad * rad)))
print("Sphere volume: ", ((4 / 3) * pi * (rad * rad * rad)))
