# Enter your code here. Read input from STDIN. Print output to STDOUT
# https://www.hackerrank.com/challenges/symmetric-difference/problem?h_r=next-challenge&h_v=zen
n = int(input())
a = set(map(int,input().split()))
n = int(input())
b = set(map(int,input().split()))
c = a.difference(b)
for x in b.difference(a):
    c.add(x)
c = list(c)
c.sort()
for x in c:
    print(x)