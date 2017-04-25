//https://www.hackerrank.com/challenges/permutation-equation
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,arr[52],out[52];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        cin>>arr[i+1];
    for(int i=1;i<=n;i++)
        out[arr[arr[i]]]=i;
    for(int i=1;i<=n;i++)
        cout<<out[i]<<endl;
    return 0;
}
