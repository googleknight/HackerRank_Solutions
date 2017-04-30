//https://www.hackerrank.com/challenges/picking-numbers
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,arr[101],count(0),maxcount(0);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++)
            if(abs(arr[j]-arr[i])<=1)
                count++;
        maxcount=max(maxcount,count+1);
    }
    cout<<maxcount;
    return 0;
}
