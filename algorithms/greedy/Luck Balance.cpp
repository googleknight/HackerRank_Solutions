//https://www.hackerrank.com/challenges/luck-balance
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    long long mini(LLONG_MAX),l,t,sum(0);
    cin>>n>>k;
    vector<long long> arr;
    for(int i=0;i<n;i++)
    {
        cin>>l>>t;
        if(t==1)
            arr.push_back(l);
        else
            sum+=l;            
    }
    sort(arr.begin(),arr.end());
    int diff=arr.size()-k;
    for(int i=0;i<arr.size();i++)
    {
       if(i<diff)
           sum-=arr[i];
       else
           sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
