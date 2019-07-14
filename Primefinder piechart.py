import math
import time
import matplotlib.pyplot as plt

categories = ["Primes", "Composites"]
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
a = len(primelist2)+1
b = number - a
categories = ["Primes", "Composites"]
sizes =[a,b]

fig1, ax1 = plt.subplots()
ax1.pie(sizes, labels=categories, autopct='%1.1f%%', shadow=True, startangle=90)
ax1.axis("equal")
plt.show()

