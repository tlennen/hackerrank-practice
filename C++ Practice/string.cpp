#include <iostream>
#include <string>
using namespace std;

// https://www.hackerrank.com/challenges/c-tutorial-strings/problem

int main() {
    string a ="";
    cin>>a;
    string b = "";
    cin>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    char temp = ' ';
    temp = a[0];
    a[0] = b[0];
    b[0] =temp;
    cout<<a<<" "<<b<<endl;
    return 0;
}

