#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/vector-sort/problem

int main() {
    int n = 0;
    cin >>n;
    vector <int> vec;
    for(int i=0;i<n;i++){
        int temp = 0;
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < n; i++) {
        cout<<vec[i]<<" ";
    }
    return 0;
}
