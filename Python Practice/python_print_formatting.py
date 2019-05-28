def print_full_name(a, b):
    # https://www.hackerrank.com/challenges/whats-your-name/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
    print("Hello {} {}! You just delved into python.".format(a,b))

if __name__ == '__main__':
    first_name = input()
    last_name = input()
    print_full_name(first_name, last_name)