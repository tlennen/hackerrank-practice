def count_substring(string, sub_string):
    # https://www.hackerrank.com/challenges/find-a-string/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
    count = 0;
    for x in range(0,len(string)-len(sub_string)+1):
        if sub_string==string[x:x+len(sub_string)]:
            count = count+1;
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)