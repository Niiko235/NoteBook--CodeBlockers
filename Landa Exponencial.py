import random
from math import log

landa = int(input("Digite landa: "))



for i in range (0,10):
    print(-(1/landa)*log(1-random.uniform(0.999, 1)))
