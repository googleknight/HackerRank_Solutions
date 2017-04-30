//https://www.hackerrank.com/challenges/anagram
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main() 
{
    int n,j;
    char *s=new char;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int hash_map[2][26]={0},count=0;
        cin>>s;
        int len=strlen(s);
        if(len%2==1)
        {
            cout<<-1<<endl;
            continue;
        }
        for(j=0;j<len/2;j++)
            hash_map[0][s[j]-97]++;
        for(;j<len;j++)
            hash_map[1][s[j]-97]++;
        for(int i=0;i<26 && count<=len/2;i++)
            if(hash_map[0][i]-hash_map[1][i]>0)
                count+=hash_map[0][i]-hash_map[1][i];
        cout<<count<<endl;    
    }
    return 0;
}
