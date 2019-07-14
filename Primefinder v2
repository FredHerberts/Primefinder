import time
start = time.time()
def primefinder(n):
    prime = [True for x in range(n + 1)]
    y = 2
    while (y * y <= n):
        if (prime[y] == True):
            for x in range(y * y, n + 1, y):
                prime[x] = False
        y += 1
    for y in range(2, n):
        if prime[y]:
            print(y)


primefinder(1000000)

end = time.time()
print(end - start)
