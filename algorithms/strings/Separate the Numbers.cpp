//https://www.hackerrank.com/challenges/separate-the-numbers
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int l(1),flag2(0);
        if(s.at(0)==0)
        {   cout<<"NO"<<endl;
            break;
        }
        while(l<=s.length()/2)
        {
            long long old(-2),cur(0),first(-1);
            int flag(0);
            int oldl=l;
            for(int j=0;j<s.length();)
            {
                stringstream ss(s.substr(j,l));
                ss>>cur;
                if(first==-1 )
                {    
                    first=cur;
                    old=cur;
                }
                else if(cur-old==1)
                    old=cur;
                else
                {
                    flag=1;
                    break;
                }
                l=to_string(cur+1).length();
                j+=to_string(cur).length();
            }
            if(flag!=1)
            {
                cout<<"YES "<<first<<endl;
                flag2=1;
                break;
            }
            l=oldl+1;
        }
        if(flag2==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
