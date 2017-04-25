//https://www.hackerrank.com/challenges/beautiful-binary-string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,count(0);
    string s;
    cin>>n>>s;
    for(size_t index=0;(index=s.find("010",index))!=-1;count++,index+=3);
    cout<<count;
    return 0;
}
