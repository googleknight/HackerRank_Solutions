//https://www.hackerrank.com/challenges/string-construction
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        map<char,int> mymap;
        cin>>str;
        int count(0);
        for(int j=0;j<str.length();j++)
            if(mymap[str.at(j)]==0)
            {
                count++;mymap[str.at(j)]++;
            }
        cout<<count<<endl;
    }
    return 0;
}
