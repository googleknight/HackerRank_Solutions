//https://www.hackerrank.com/challenges/minimum-distances
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,count(LONG_MAX),temp;
    cin>>n;
    unordered_map <int,int> hash;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(hash[temp]!=0)
        {
            count=min((long long)count,(long long)(i+1-hash[temp]));
            hash[temp]=0;
        }
        else
            hash[temp]=i+1;
    }
    if(count==LONG_MAX)
        cout<<-1;
    else
        cout<<count;
    return 0;
}
