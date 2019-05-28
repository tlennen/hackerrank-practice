# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

# https://www.hackerrank.com/challenges/incorrect-regex/problem?h_r=next-challenge&h_v=zen

n = int(input())
for x in range(0,n):
    s = input()
    try:
        re.compile(s)
        print(True)
    except re.error:
        print(False)