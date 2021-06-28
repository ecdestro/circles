import sys
from math import pi

rad = float(sys.argv[1])
print("Circumference: ", '%.5f'%(2 * pi * rad))
print("Area: ", '%.5f'%(pi * (rad * rad)))
print("Sphere surface area: ", '%.5f'%(4 * pi * (rad ** 2)))
print("Sphere volume: ", '%.5f'%((4 / 3) * pi * (rad ** 3)))
