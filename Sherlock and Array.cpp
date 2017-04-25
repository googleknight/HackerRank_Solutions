//https://www.hackerrank.com/challenges/sherlock-and-array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long n;
        cin>>n;
        long long int a[n],lsum=0,rsum=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(j!=0) rsum+=a[j];
        }
        int flag=0;
        for(int j=1;j<n;j++)
        {
            lsum+=a[j-1];
            rsum-=a[j];
            if (lsum==rsum)
            {
                flag=1;
                break;
            }
        }
        if( flag==1 || n==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
