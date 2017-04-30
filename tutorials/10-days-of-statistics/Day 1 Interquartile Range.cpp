//https://www.hackerrank.com/challenges/s10-interquartile-range
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,ntemp;
    vector<float> ele,arr;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        float temp;
        scanf("%f",&temp);
        ele.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        float temp;
        scanf("%f",&temp);
        for(int j=0;j<temp;j++)
            arr.push_back(ele[i]);
    }
    sort(arr.begin(),arr.end());
    n=arr.size();
    float q1,q3;
    int temp=n/2;
    q1=(temp%2==0)?(arr[(temp/2)]+arr[(temp/2)-1])/2:arr[temp/2];
    if(n%2==0)
        q3=(temp%2==0)?(arr[temp+(temp/2)]+arr[temp+(temp/2)-1])/2:arr[temp+(temp/2)];
    else
        q3=(temp%2==0)?(arr[temp+1+(temp/2)]+arr[temp+1+(temp/2)-1])/2:arr[temp+1+(temp/2)];
    printf("%.1f",(q3-q1));
    return 0;
}
