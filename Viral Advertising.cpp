//https://www.hackerrank.com/challenges/strange-advertising
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    long ans=0,crowd=5;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ans+=crowd/2;
        crowd=(crowd/2)*3;
    }
    cout<<ans;
    return 0;
}
