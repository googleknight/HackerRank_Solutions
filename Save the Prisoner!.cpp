//https://www.hackerrank.com/challenges/save-the-prisoner
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n,m,s;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m>>s;
        if((s+m-1)%n==0)
            cout<<n<<endl;
        else
            cout<<(s+m-1)%n<<endl;
    }
    return 0;
}
