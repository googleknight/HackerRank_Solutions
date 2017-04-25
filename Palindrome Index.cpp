//https://www.hackerrank.com/challenges/palindrome-index
#include <cmath>
#include <cstdio>
#include<string.h>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char str[100005];
        int flag=0,left,right;
        cin>>str;
        int len=strlen(str);
        for(int l=0,r=len-1;l<len/2 && r>=len/2;l++,r--)
        {
            if(str[l]!=str[r])
            {
                if(flag==0)
                {                    
                    right=r;
                    left=l;
                    l--;
                    flag++;
                }
                else
                {
                    flag++;
                    break;
                }
            }
        }
        if (flag==0)
            cout<<-1<<endl;
        else if(flag==1)
            cout<<right<<endl;
        else
            cout<<left<<endl;
    }
    return 0;
}
