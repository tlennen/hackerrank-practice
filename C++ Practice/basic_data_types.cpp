#include <iostream>
#include <cstdio>
using namespace std;

//https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?h_r=next-challenge&h_v=zen

int main() {
    int i = 0;
    long l = 0;
    char a = 's';
    float f = 0;
    double d = 0;
    cin >> i >> l >> a >> f >> d;
    printf("%d\n%ld\n%c\n%f\n%lf",i,l,a,f,d);
    return 0;
}

