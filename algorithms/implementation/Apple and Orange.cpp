//https://www.hackerrank.com/challenges/apple-and-orange
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    double s,t,n,a,b,m;
    double d;
    int count=0;        
    scanf("%lf%lf%lf%lf%lf%lf",&s,&t,&a,&b,&m,&n);
    for(int i=0;i<m;i++)
    {
        scanf("%lf",&d);
        if(d+a>=s && d+a<=t)
            count++;            
    }
    cout<<count;
    count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&d);
        if(d+b>=s && d+b<=t)
            count++;            
    }
    cout<<endl<<count;
    return 0;
}
