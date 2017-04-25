//https://www.hackerrank.com/challenges/sock-merchant
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,c[n+2]={},temp(0),count(0);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        c[temp]++;
    }
    for(int i=1;i<=100;i++)
        count+=c[i]/2;
    cout<<count;
    return 0;
}
