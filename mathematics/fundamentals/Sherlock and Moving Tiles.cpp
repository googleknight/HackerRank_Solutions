//https://www.hackerrank.com/challenges/sherlock-and-moving-tiles
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdlib.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long double l,s1,s2,Q;
    cin>>l>>s1>>s2;
    cin>>Q;
    for(long double i=0;i<Q;i++)
    {
        long double q;
        cin>>q;
        cout.precision(20);
        cout<<abs(((sqrt(q)-l)*sqrt(2))/(s2-s1))<<endl;
    }
    return 0;
}
