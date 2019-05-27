# Enter your code here. Read input from STDIN. Print output to STDOUT
# https://www.hackerrank.com/challenges/py-set-mutations/problem?h_r=next-challenge&h_v=zen
n = int(input());
set_A = set(map(int,input().split()))
queries = int(input())
for x in range(0,queries):
    command = list(input().split())
    if command[0] == "intersection_update":
        set_B = set(map(int,input().split()))
        set_A.intersection_update(set_B)
    elif command[0]=="update":
        set_B = set(map(int,input().split()))
        set_A.update(set_B)
    elif command[0]=="difference_update":
        set_B = set(map(int,input().split()))
        set_A.difference_update(set_B)
    elif command[0]=="symmetric_difference_update":
        set_B = set(map(int,input().split()))
        set_A.symmetric_difference_update(set_B)
print(sum(set_A))
