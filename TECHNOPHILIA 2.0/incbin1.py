import sys
import os
if not os.environ.get("ONLINE_JUDGE"):
    sys.stdin = open('./in.txt', 'r')
    sys.stdout = open('./out.txt', 'w')

for i in range(int(input())):
    n=list(input())
    sn=n.count("0")
    mn=n.count("1")
    for i in range(len(n)-1):
        if ((n[i]=="0") and n[i+1]=="1") or (n[i]== "1" and n[i+1]== "0"):
            sn-=1
            n[i]='3'
            n[i+1]='3'
            
    if sn>mn:
        print("0")
    elif sn<mn :
        print("1")
    else :
        print("-1")