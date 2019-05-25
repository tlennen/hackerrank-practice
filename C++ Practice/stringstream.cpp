#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?h_r=next-challenge&h_v=zen

vector<int> parseInts(string str) {
	vector<int>values;
    stringstream ss(str);
    string token;
    int num;
    while (getline(ss, token, ',')) {
        stringstream hold(token);
        hold >> num;
        values.push_back(num);
    }
    return values;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

