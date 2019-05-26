#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/vector-erase/problem

int main() {
    int n =0;
    cin >> n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int temp =0;
        cin >> temp;
        vec.push_back(temp);
    } 
    int erase = 0;
    cin >> erase;
    vec.erase(vec.begin()+erase-1);
    int first, last;
    cin >> first >> last;
    vec.erase(vec.begin()+first-1,vec.begin()+last-1);
    cout << vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}
