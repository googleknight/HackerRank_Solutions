//https://www.hackerrank.com/challenges/circular-array-rotation
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k,q,temp;
    cin>>n>>k>>q;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[(i+k)%n];
    for(int i=0;i<q;i++)
    {
        cin>>temp;
        cout<<a[temp]<<endl;
    }   
        return 0;
}
