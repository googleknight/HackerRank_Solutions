//https://www.hackerrank.com/challenges/migratory-birds
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    double n;
    scanf("%lf",&n);
    int a[5]={},temp,index(0);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        a[temp-1]++;
    }
    for(int big=0,i=0;i<5;i++)
        if(a[i]>big)
        {
        big=a[i];
        index=i+1;
    }
    cout<<index;
    return 0;
}
