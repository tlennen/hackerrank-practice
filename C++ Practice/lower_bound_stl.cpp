#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/cpp-lower-bound/problem

int main() {
    int n = 0;
    vector<int>vec;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp = 0;
        cin>>temp;
        vec.push_back(temp);
    }
    int queries = 0;
    cin >> queries;
    for(int i=0;i<queries;i++){
        int num = 0;
        cin >> num;
        vector<int>::iterator position =
            lower_bound(vec.begin(), vec.end(), num);
        if(vec[position-vec.begin()]==num){
          cout << "Yes " << position - vec.begin()+1<<endl;
        }
        else{
          cout << "No " << position - vec.begin()+1 << endl;
        }
    }
    return 0;
}
