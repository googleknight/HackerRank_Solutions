//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<sstream>
using namespace std;
long rev(long x);
int main() {
    unsigned long i,j,k;
    scanf("%lu%lu%lu",&i,&j,&k);
    long count=0;
    for(long a=i;a<=j;a++)
    {
        if(abs(a-rev(a))%k==0)
            count++;
    }
    cout<<count;
    return 0;
}
long rev(long x)
{
    stringstream ss;
    ss<<x;
    string num=ss.str();
    reverse(num.begin(),num.end());
    return atol(num.c_str());
}
