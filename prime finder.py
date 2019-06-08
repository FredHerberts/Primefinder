import math
import time

primelist2 = [3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101]


number = int(input("enter the number"))

start = time.time()

def primefinder(number):
    for y in range(103, number + 1,2):
        prime = True
        for x in primelist2:
            if y % x == 0:
                prime = False
                break
            if x > math.sqrt(y):
                break
        if prime == True:
            primelist2.append(y)


primefinder(int(number))

end = time.time()
primelist2.insert(0,2)
print(primelist2)
print(end - start)