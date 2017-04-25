//https://www.hackerrank.com/challenges/hackerrank-in-a-string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int q;
    string hack="hackerrank",s;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>s;
        int count(0);
        for(int i=0,j=0;i<s.length();i++)
        {
            if(s.at(i)==hack.at(j))
            {
                j++;
                count++;
                if(j==10)
                    break;
            }    
        }
        if(count==10)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
