if __name__ == '__main__':
    # https://www.hackerrank.com/challenges/python-tuples/problem?h_r=next-challenge&h_v=zen
    n = int(input())
    integer_list = map(int, input().split())
    t = tuple(integer_list)
    print(hash(t))
