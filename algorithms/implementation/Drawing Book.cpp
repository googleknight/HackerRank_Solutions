//https://www.hackerrank.com/challenges/drawing-book
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,p,ans(0);
    scanf("%d%d",&n,&p);
    if(p%2==0)
        ans=p/2;
    else 
        ans=(p-1)/2;
    if((n-p)<=(p-1))
        ans=(n-p)/2;
    cout<<ans;
    return 0;
}
