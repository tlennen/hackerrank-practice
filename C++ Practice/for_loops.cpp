#include <iostream>
#include <cstdio>
using namespace std;

// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

int main() {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    for(int n=a;n<=b;n++){
        if(n>9 && n%2==0){
            cout << "even\n";
        }
        if(n>9 && n%2==1){
            cout << "odd\n";
        }
        else if(n==1)
            cout << "one\n";
        else if (n == 2)
            cout << "two\n";
        else if (n == 3)
            cout << "three\n";
        else if (n == 4)
            cout << "four\n";
        else if (n == 5)
            cout << "five\n";
        else if(n==6)
            cout << "six\n";
        else if (n == 7)
            cout << "seven\n";
        else if (n == 8)
            cout << "eight\n";
        else if (n == 9)
            cout << "nine\n";
    }
    return 0;
}

