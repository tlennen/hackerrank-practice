#!/bin/python3

import math
import os
import random
import re
import sys

#https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

# Complete the minimumBribes function below.
def minimumBribes(q):
    count = 0
    temp = 0
    check = 0
    for x in range(len(q)-1,1,-1):
        if(q[x-1]>q[x]):
            for y in range(x-1,len(q)-1):
                if(q[y]>q[y+1]):
                    print(q)
                    if check==2:
                        print("Too chaotic")
                        return
                    temp = q[y]
                    q[y]=q[y+1]
                    q[y+1] = temp
                    count=count+1;
                    check =check+1;
                else:
                    check = 0
                    break;
    print(count)


if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        n = int(input())

        q = list(map(int, input().rstrip().split()))

        minimumBribes(q)
