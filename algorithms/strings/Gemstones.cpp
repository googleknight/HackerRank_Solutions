//https://www.hackerrank.com/challenges/gem-stones
#include<iostream>
#include<string.h>
using namespace std;
int main() 
{
    int n,count=0;
    cin>>n;
    char s[n][100];
    int hash_map[n][26]={0};
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        int flag = 0;
        for(int j=0;j<strlen(s[i]);j++)
            hash_map[i][s[i][j]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
            if(hash_map[j][i]==0)
            {    
                flag=1;
                break;
            }
        if(flag==0)
            count++;
    }
    cout<<count;
    return 0;
}
