//https://www.hackerrank.com/challenges/maximizing-xor
#include <bits/stdc++.h>
using namespace std;
int main() {
    int l,r,maxa(0);
    cin>>l>>r;
    for(int i=l;i<=r;i++)
        for(int j=i+1;j<=r;j++)
            maxa=max(maxa,j^i);
    cout<<maxa;
    return 0;
}
