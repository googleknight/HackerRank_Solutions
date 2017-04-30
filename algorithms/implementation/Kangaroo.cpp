//https://www.hackerrank.com/challenges/kangaroo
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x1,v1,x2,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    if(x1>x2 && v1>v2 ||(x1<x2 && v1<=v2))
        cout<<"NO";
    else
    {
        if(((x2-x1)%(v1-v2))==0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}
