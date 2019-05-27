if __name__ == '__main__':
    # https://www.hackerrank.com/challenges/nested-list/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
    arr = [];
    for _ in range(int(input())):
        name = input()
        score = float(input())
        arr.append([score,name])
    arr.sort()
    if len(arr)!=0:
        min_s = arr[0][0];
        place = 0;
        while min_s == arr[place][0]:
            if(place==len(arr)):
                break;
            place= place+1;
        for x in arr:
            if x[0]==arr[place][0]:
                print(x[1])
