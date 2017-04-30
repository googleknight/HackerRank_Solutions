//https://www.hackerrank.com/challenges/divisible-sum-pairs
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k,count(0);
    int a[101];
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if((a[i]+a[j])%k==0)
                count++;
    cout<<count;
    return 0;
}
