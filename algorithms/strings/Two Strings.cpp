//https://www.hackerrank.com/challenges/two-strings
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main() 
{
    int n,j;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int hash_map[26]={0},flag=0;
        char s1[1000000],s2[1000000];
        scanf("%s%s",&s1,&s2);
        int len1=strlen(s1);
        int len2=strlen(s2);
        for(j=0;j<len1;j++)
            hash_map[s1[j]-97]++;
        for(j=0;j<len2;j++)
            if(hash_map[s2[j]-97]!=0)
            {    
                cout<<"YES"<<endl;
                flag=1;
                break;
            }     
        if (flag==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
