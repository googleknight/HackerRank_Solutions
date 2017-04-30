//https://www.hackerrank.com/challenges/repeated-string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    long long n,a(0);
    cin>>s>>n;
    for(int i=0;i<s.length();i++)
        if(s.at(i)=='a')
            a++;
    long long count=(n/s.length())*a;
    if(n%s.length()==0)
        cout<<count;
    else
    {
        n= n-(n/s.length())*s.length();
        for(int i=0,j=0;i<n;i++,j++)
        {
            if(j==s.length())
                j=0;
            if(s.at(j)=='a')
                count++;
        }
        cout<<count;
    }
    return 0;
}
