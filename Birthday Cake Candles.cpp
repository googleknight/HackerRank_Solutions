//https://www.hackerrank.com/challenges/birthday-cake-candles
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    double temp;
    scanf("%d",&n);
    int big=0,count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&temp);
        if(temp>=big)
        {
            if(temp==big)
                count++;
            else
             {
                big=temp;
                count=1;                
            }
        }
    }
    cout<<count;
    return 0;
}
