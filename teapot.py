import numpy as np
from random import randint
a=np.zeros(150)

for i in range(len(a)):
    a[i]=randint(1,6)

for i, x in enumerate(a):
    print(str(i)+": "+str(x))
