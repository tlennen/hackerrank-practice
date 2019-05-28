if __name__ == '__main__':
    # https://www.hackerrank.com/challenges/string-validators/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
    y = input()
    x = [False]*5
    for s in y:
        if(s.isalnum()):
            x[0]=True;
        if s.isalpha():
            x[1]= True;
        if s.isdigit():
            x[2] = True;
        if s.islower():
            x[3]=True;
        if s.isupper():
            x[4]= True;
    for s in x:
        print(s)

