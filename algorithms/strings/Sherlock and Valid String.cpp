//https://www.hackerrank.com/challenges/sherlock-and-valid-string
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int count(0),flag(0);
    cin>>str;
    int myhash[27]={0};
    for(int i=0;i<str.length();i++)
        myhash[str.at(i)-'a']++;
    for(int i=0;i<26;i++)
    {
        count=0;
        for(int j=0;j<26;j++)
            if(myhash[i]!=myhash[j] && myhash[i]>0 && myhash[j]>0)
                count++;
        if(count<2 && myhash[i]!=0)
        {
            cout<<"YES";
            flag=1;
            break;
        }
    }
    if(flag!=1)
        cout<<"NO";
    return 0;
}
