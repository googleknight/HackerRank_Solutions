//https://www.hackerrank.com/challenges/mark-and-toys
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,k,sum(0),count(0),temp;
    cin>>n>>k;
    vector<long long> price;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        price.push_back(temp);
    }
    sort(price.begin(),price.end());
    for(auto x:price)
    {
        if(sum+x<=k)
        {
            sum+=x;
            count++;
        }
    }    
    cout<<count;
    return 0;
}
