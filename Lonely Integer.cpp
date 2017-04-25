//https://www.hackerrank.com/challenges/lonely-integer
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {    cin>>a;
     x^=a;
    }
    cout<<x;
    return 0;
}
