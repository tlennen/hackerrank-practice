def swap_case(s):
    # https://www.hackerrank.com/challenges/swap-case/problem
    t = ""
    for x in range(0,len(s)):
        if s[x].islower():
            t = t + s[x].upper()
        elif s[x].isupper():
            t = t+ s[x].lower()
        else:
            t = t+s[x]
    return t

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)