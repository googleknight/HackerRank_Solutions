//https://www.hackerrank.com/challenges/append-and-delete
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s,t;
    int i,k,count(0);
    cin>>s>>t>>k;
    int n=(s.length()>t.length())?t.length():s.length();
    for(i=0;i<n;i++)
        if(s.at(i)!=t.at(i))
            break;
    count=(s.length()-i)+(t.length()-i);
    int kdiff=k-count;
    if(count==k||(kdiff>0 && kdiff%2==0)||(kdiff>=0 && k - s.length() >= t.length()))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
