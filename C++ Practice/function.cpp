#include <iostream>
#include <cstdio>
using namespace std;

// https://www.hackerrank.com/challenges/c-tutorial-functions/problem

int max_of_four(int a, int b, int c, int d){
    int x = 0;
    int y = 0;
    if(a>b)
        x=a;
    else
        x=b;
    if (c > d)
      y = c;
    else
      y = d;
    if(x>y)
        return x;
    return y;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

