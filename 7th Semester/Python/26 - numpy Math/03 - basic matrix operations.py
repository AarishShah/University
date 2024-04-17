import numpy as np

p = np.array([4, 5, 6, 7])
q = np.array([7, 8, 9, 5])

sage = p + q
neon = p - q
omen = p * q
sova = p / q

print(sage)  # [11 13 15 12]
print(neon)  # [-3 -3 -3  2]
print(omen)  # [28 40 54 35]
print(sova)  # [0.57142857 0.625      0.66666667 1.4       ]

# same as above
khush = np.add(p, q)
humma = np.subtract(p, q)
clyde = np.multiply(p, q)
faraz = np.divide(p, q)

print(sage == khush)  # [ True  True  True  True]
print(neon == humma)  # [ True  True  True  True]
print(omen == clyde)  # [ True  True  True  True]
print(sova == faraz)  # [ True  True  True  True]