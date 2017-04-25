//https://www.hackerrank.com/challenges/missing-numbers
#include <bits/stdc++.h>
using namespace std;
int main() {
    long n,m;
    map<int,long> a,b;
    cin>>n;
    for(long i=0,temp;i<n;i++)
    {
        cin>>temp;
        a[temp]++;
    }
    cin>>m;
    for(long i=0,temp;i<m;i++)
    {
        cin>>temp;
        b[temp]++;
    }
    for(auto x:a)
        if(b[x.first]!=x.second)
            cout<<x.first<<" ";
    return 0;
}
