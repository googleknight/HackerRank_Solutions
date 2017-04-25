//https://www.hackerrank.com/challenges/manasa-and-stones
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,a,b;
        cin>>n>>a>>b;
        map <int,int> hash;
        for(int j=0;j<n;j++)
        {
            hash[(n-1-j)*a+(j*b)]=1;
            hash[(n-1-j)*b+(j*a)]=1;
        }
        for(auto x:hash)
            cout<<x.first<<" ";
        cout<<endl;
    }
    return 0;
}
