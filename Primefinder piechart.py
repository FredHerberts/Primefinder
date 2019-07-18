import time
import math
import matplotlib.pyplot as plt
categories = ["Primes", "Composites"]
number = int(input("enter the number"))
primelist= [2]
start = time.time()

def primefinder(number):
    prime = [True for x in range(number + 1)]
    for y in range(3,int(math.sqrt(number+1)),2):
        if prime[y] == True:
            primelist.append(y)
            for x in range(y+y, number + 1,y):
                prime[x] = False
    for x in range(y+2,number+1,2):
        if prime[x] == True:
            primelist.append(x)

primefinder(number)

end = time.time()
print(end - start)

a = len(primelist)+1
b = number - a
sizes =[a,b]

fig1, ax1 = plt.subplots()
ax1.pie(sizes, labels=categories, autopct='%1.1f%%', shadow=True, startangle=90)
ax1.axis("equal")
plt.show()

