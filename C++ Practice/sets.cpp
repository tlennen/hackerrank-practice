#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/cpp-sets/problem

int main() {
    int queries = 0;
    int command = 0;
    int element = 0;
    cin >> queries;
    set<int>s;
    for(int i=0;i<queries;i++){
        cin>>command>>element;
        if(command==1){
            s.insert(element);
        }
        else if(command == 2) {
            s.erase(element);
        }
        else if(command == 3){
          set<int>::iterator itr = s.find(element);
          if(itr!=s.end()){
              cout<<"Yes"<<endl;
          }
          else{
              cout<<"No"<<endl;
          }
        }
    }
    return 0;
}



