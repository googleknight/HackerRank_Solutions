//https://www.hackerrank.com/challenges/beautiful-triplets
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,count(0);
    int d;
    unordered_map<int,int> hash;
    cin>>n>>d;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        hash[arr[i]]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[arr[i]+d]==1 && hash[arr[i]+2*d]==1 )
            count++;
    }
    cout<<count;
    return 0;
}
