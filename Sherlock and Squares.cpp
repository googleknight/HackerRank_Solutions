//https://www.hackerrank.com/challenges/sherlock-and-squares
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int a=0;a<t;a++)
    {
        unsigned int m,n;
        cin>>m>>n;
        n=floor(sqrt(n)+1);
        m=ceil(sqrt(m));
        cout<<n-m<<endl;
    }
    return 0;
}
