import sys
import os
import math
if not os.environ.get("ONLINE_JUDGE"):
    sys.stdin = open('./in.txt', 'r')
    sys.stdout = open('./out.txt', 'w')

for _ in range(int(input())):

    n,k = map(int,input().split())

    arr = list(map(int,input().split()))

    L,R = -sys.maxsize,sys.maxsize

    for i in range(n):
        l = math.ceil(arr[i]*k/(i+1))
        r = math.ceil((1.0+arr[i])*k/(i+1)) - 1

        L,R = max(L,l),min(R,r)

    print(L,R)

