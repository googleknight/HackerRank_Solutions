//https://www.hackerrank.com/challenges/the-hurdle-race
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k,temp(0),ans(0),max(0);
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(temp>max)
            max=temp;
    }
    ans=max-k>0?max-k:0;
    cout<<ans;
    return 0;
}
