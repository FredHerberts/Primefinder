import time
import math
start = time.time()
primelist= [2]

def primefinder(number):
    prime = [True for x in range(number + 1)]
    y = 3
    while y < math.sqrt(number+1):
        if prime[y] == True:
            for x in range(y+y, number + 1,y):
                prime[x] = False
            y +=2
        else:
            y +=2
    for x in range(3,number+1,2):
        if prime[x] == True:
            primelist.append(x)

primefinder(1000000)
print(primelist)

end = time.time()
print(end - start)
