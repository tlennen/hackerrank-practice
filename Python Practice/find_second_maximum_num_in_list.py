if __name__ == '__main__':
    # https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem?h_r=next-challenge&h_v=zen
    n = int(input())
    arr = input().split()
    arr = list(map(int, arr))
    arr.sort()
    if len(arr)!=0:    
        max_v = arr[len(arr)-1]
        score = len(arr)-1
        while(arr[score] ==max_v):
            if(score==0):
                break;
            score = score-1;
        print(arr[score])


