//https://www.hackerrank.com/challenges/strange-code
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long i(1),j,t,counter(3),old(3);
    cin>> t;
    for( j=0;t>((3*pow(2,j))-2);j++);
    if(j>0)
    {
        counter=3*pow(2,--j);
        i=counter-2;
        old=counter;
    }
    counter-=(t-i);
    if(counter==0)
        counter=old*2;
    cout<<counter;
    return 0;
}
