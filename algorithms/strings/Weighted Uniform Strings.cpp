//https://www.hackerrank.com/challenges/weighted-uniform-string
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int n,x;
    cin>>str>>n;
    set<int> weight;
    for(int i=0,j;i<str.length();i++)
    {
        weight.insert(str.at(i)-96);
        for(j=i+1;j<str.length();j++)
        {
            if(str.at(j)==str.at(i))
                weight.insert((str.at(j)-96)*(j-i+1));
            else
                break;
        }
        i=--j;
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(weight.find(x)!=weight.end())
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
