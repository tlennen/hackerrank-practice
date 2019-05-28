# Enter your code here. Read input from STDIN. Print output to STDOUT
#https://www.hackerrank.com/challenges/exceptions/problem
n = int(input())
for x in range(0,n):
    x=input().split()
    try:
        x[0] = int(x[0])
        x[1] = int(x[1])
        print(int(x[0]/x[1]))
    except ZeroDivisionError as e:
        print("Error Code: integer division or modulo by zero")
		# different due to program checker on hackerrank, should be like ValueError
    except ValueError as e:
        print("Error Code:",e)