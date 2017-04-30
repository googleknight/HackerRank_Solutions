//https://www.hackerrank.com/challenges/bigger-is-greater
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t(0);
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        vector<string> arr;
        int n=next_permutation(s.begin(),s.end());
        if(n==0)
            cout<<"no answer\n";
        else
            cout<<s<<endl;            
    }
    return 0;
}
