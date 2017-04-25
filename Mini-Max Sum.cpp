//https://www.hackerrank.com/challenges/mini-max-sum
#include <cmath>
#include <climits>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long num;
    long min=LONG_MAX,max=LONG_MIN;
    long sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>num;
        sum+=num;
        if(num<min)
            min=num;
        if(num>max)
            max=num;
    }
    cout<<sum-max<<" "<<sum-min;
    return 0;
}
