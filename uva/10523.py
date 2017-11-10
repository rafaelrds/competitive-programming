import sys
import math
for line in sys.stdin:
    N, A = map(int, line.split())

    total = 0
    currA = A
    for i in range(1, N + 1):
        total += i * currA
        currA *= A
    print (total)
