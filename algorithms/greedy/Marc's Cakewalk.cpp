//https://www.hackerrank.com/challenges/marcs-cakewalk
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,cal[41];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>cal[i];
    sort(cal,cal+n);
    long long miles(0);
    for(int i=n-1,j=0;i>=0;i--)
        miles+=cal[i]*pow(2,j++);        
    cout<<miles;
    return 0;
}
