# Enter your code here. Read input from STDIN. Print output to STDOUT

# https://www.hackerrank.com/challenges/designer-door-mat/problem

n = list(map(int,input().split()))
temp = ""
for i in range(0,n[0]):
    if i==int(n[0]/2):
        temp = "WELCOME"
        temp = "-"*(int(n[1]/2)-3)+temp+"-"*(int(n[1]/2)-3)
        print(temp)
    else:
        b = i
        if i>int(n[0]/2):
            b = n[0]-1-i;
        j = n[1]
        temp = ".|."
        temp = (int(j/2)-3*b-1)*"-"+b*2*temp+temp+(int(j/2)-3*b-1)*"-"
        print(temp);
