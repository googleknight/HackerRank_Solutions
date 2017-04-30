//https://www.hackerrank.com/challenges/c-tutorial-stringstream
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
vector<int> parseInts(string str) {
    stringstream ss(str);
    char ch;int x;
    vector <int> vec;
    while(ss)
    {
        ss>> x>>ch;
        vec.push_back(x);
    }    
   return vec;
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
