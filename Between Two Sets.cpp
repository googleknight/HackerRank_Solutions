//https://www.hackerrank.com/challenges/between-two-sets
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int getgcd(int arr[],int n);
vector<int> getfactors (int n);
int main() {
    int n,m,a[11],b[11],count(0),ans(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    vector<int> facts=getfactors(getgcd(b,m));
    for(int i=0;i<facts.size();i++)
    {
        count=0;
        for(int j=0;j<n;j++)
            if(facts[i]%a[j]==0)
                count++;                
        if(count==n)
            ans++;
    }
    cout<<ans;
    return 0;
}
int getgcd(int arr[],int n)
{
    sort(arr,arr+n);  
    int div(arr[0]),did(arr[1]),rem(-1);
    while((did%div)!=0)
    {
        rem=did%div;
        did=div;
        div=rem;            
    }
    int gcd=div;
    for(int i=2;i<n;i++)
    {
        div=gcd,did=arr[i],rem=-1;
        while((did%div)!=0)
        {
            rem=did%div;
            did=div;
            div=rem;            
        }
        gcd=div;
    }
    return gcd;
    return 0;
}
vector<int> getfactors (int n)
{
    vector<int> factors;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            factors.push_back(i);
            if(i!=(n/i))
                factors.push_back(n/i);
        }    
    }
    return factors;
}
