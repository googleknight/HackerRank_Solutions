//https://www.hackerrank.com/challenges/arrays-introduction
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n],i=0;
    for(;i<n;i++)
        cin>>a[i];
    for(i--;i>=0;i--)
        cout<<a[i]<<" ";
    return 0;
}
