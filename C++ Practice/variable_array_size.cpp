#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/variable-sized-arrays/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

int main() {
    int n = 0;
    int q = 0;
    int i=0;
    int j=0;
    int k=0;
    int temp=0;
    int x =0 ;
    int y = 0;
    cin >> n >> q;
    vector <vector<int>> arr(n);
    for(i = 0;i<n;i++){
        cin>>temp;
        for(j=0;j<temp;j++){
            cin>>k;
            arr[i].push_back(k);
        }
    }
    for(i=0;i<q;i++){
        cin>>x>>y;
        cout<<arr[x][y]<<endl;
    }
}

