//https://www.hackerrank.com/challenges/flatland-space-stations
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long n,m,maxv(0),j;
    cin>>n>>m;
    long arr[m];
    for(long i=0;i<m;i++)
    {
        cin>>j;
        arr[i]=j;
    }
    sort(arr,arr+m);
    for(long i=0;i<n;i++)
    {
        long count(abs(i-arr[0]));
        for(long j=0;j<m;j++)
            count=min(count,abs(i-arr[j]));
        maxv=max(count,maxv);
    }
    cout<<maxv;
    return 0;
}
