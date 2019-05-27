def is_leap(year):
    leap = False
    
    if year%400==0:
        leap=True;
    elif year%100==0:
        leap=False;
    elif year%4==0:
        leap=True;
    
    return leap
# https://www.hackerrank.com/challenges/write-a-function/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
year = int(input())