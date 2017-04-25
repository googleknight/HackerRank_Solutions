//https://www.hackerrank.com/challenges/the-birthday-bar
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,d,m,count(0),sum(0),arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    scanf("%d%d",&d,&m);
    if(n==m)
    {
        for(int i=0;i<n;i++)
            sum+=arr[i];
        if(sum==d)
            count++;
    }
    else
        for(int i=0;i<=(n-m);i++)
        {
            sum=0;
            for(int j=i;j<(i+m);j++)
                sum+=arr[j];
            if(sum==d)
                count++;
        }
    cout<<count;        
    return 0;
}
