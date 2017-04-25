//https://www.hackerrank.com/challenges/mars-exploration
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int count(0);
    string sos="SOS";
    string s;
    cin>>s;
    for(int i=0,j=0;i<s.length();i++,j=(j+1)%3)
        if(s.at(i)!=sos.at(j))
            count++;
    cout<<count;
    return 0;
}
