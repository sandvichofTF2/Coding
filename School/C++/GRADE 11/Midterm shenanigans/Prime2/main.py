import math
from math import sqrt
def checkprime(n):
    if (n<= 1): return False
    if (n == 2 or n == 3): return True
    if (n %2 == 0 or n %3 == 0): return False
    else:
        for j in range(5,int(sqrt(n)) + 1,6):
            if (n% j ==0 or n%(j+2) == 0):
                return False
    return True

while True:
    try:
        n = int(input())
    except:
        break
    if checkprime(n) == True: print("YES")
    else: print("NO")

