import timeit
import time


def functionA():
 # print hello world 100 times
    for i in range(100):
        print("Hello World")




start_time = timeit.default_timer()
functionA()
print(timeit.default_timer() - start_time)

