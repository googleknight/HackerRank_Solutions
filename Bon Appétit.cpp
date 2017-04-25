//https://www.hackerrank.com/challenges/bon-appetit
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    double n,k,amount,sum(0),temp,skip(0);
    scanf("%lf%lf",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&temp);
        if(i==k)
            skip=temp;
        else
            sum+=temp;
    }
    scanf("%lf",&amount);
    if(amount==(sum/2))
        cout<<"Bon Appetit";
    else
        cout<<amount-(sum/2);
    return 0;
}
