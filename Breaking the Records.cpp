//https://www.hackerrank.com/challenges/breaking-best-and-worst-records
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int best(0),worst(0),n(0);
    double high(0),low(0),temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&temp);
        if(i==0)
        {
            high=temp;
            low=temp;
        }   
        else if(temp>high)
        {
            high=temp;
            best++;
        }
        else if(temp<low)
        {
            low=temp;
            worst++;
        }    
    }
    cout<<best<<" "<<worst;
    return 0;
}
