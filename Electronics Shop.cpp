//https://www.hackerrank.com/challenges/electronics-shop
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int m,s;
    long long n,sum(-1);
    cin>>n>>m>>s;
    long long marr[m];
    long long sarr[s];
    for(int i=0;i<m;i++)
        cin>>marr[i];
    for(int i=0;i<s;i++)
        cin>>sarr[i];
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<m;j++)
            if(sarr[i]+marr[j]>sum && sarr[i]+marr[j]<=n)
            {
                sum=sarr[i]+marr[j];
            }
    }
    cout<<sum;
    return 0;
}
