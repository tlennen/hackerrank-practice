if __name__ == '__main__':
    my_list = [];
    #https://www.hackerrank.com/challenges/python-lists/problem
    N = int(input())
    for x in range(0,N):
        values = input().split()
        if values[0]=="print":
            print(my_list)
        elif values[0]=="insert":
            my_list.insert(int(values[1]),int(values[2]))
        elif values[0]=="remove":
            my_list.remove(int(values[1]))
        elif values[0]=="append":
            my_list.append(int(values[1]))
        elif values[0]=="sort":
            my_list.sort()
        elif values[0]=="pop":
            my_list.pop();
        elif values[0]=="reverse":
            my_list.reverse()

