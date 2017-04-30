//https://www.hackerrank.com/challenges/flipping-bits
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    unsigned int a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        cout<<~a<<endl;
    }
    return 0;
}
