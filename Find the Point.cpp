//https://www.hackerrank.com/challenges/find-point
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,px,py,qx,qy;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>px>>py>>qx>>qy;
        cout<<(qx-px)+qx<<" "<<(qy-py)+qy<<endl;
    }
    return 0;
}
