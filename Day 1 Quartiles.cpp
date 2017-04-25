//https://www.hackerrank.com/challenges/s10-quartiles
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,temp,q1,median,q3;
    vector<int> arr;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    median=(n%2==0)?((arr[(n/2)]+arr[(n/2)-1])/2):arr[n/2];
    temp=n/2;
    q1=(temp%2==0)?(arr[(temp/2)]+arr[(temp/2)-1])/2:arr[temp/2];
    if(n%2==0)
        q3=(temp%2==0)?(arr[temp+(temp/2)]+arr[temp+(temp/2)-1])/2:arr[temp+(temp/2)];
    else
        q3=(temp%2==0)?(arr[temp+1+(temp/2)]+arr[temp+1+(temp/2)-1])/2:arr[temp+1+(temp/2)];
    cout<<q1<<endl<<median<<endl<<q3;
    return 0;
}
