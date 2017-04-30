//https://www.hackerrank.com/challenges/making-anagrams
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main() 
{
    int n,count=0;
    char s[2][10000];
    int hash_map[2][26]={0};
    cin>>s[0]>>s[1];
    for(int i=0;i<2;i++)
        for(int j=0;j<strlen(s[i]);j++)
            hash_map[i][s[i][j]-97]++;
    for(int i=0;i<26;i++)
        count+=abs(hash_map[0][i]-hash_map[1][i]);
    cout<<count;
    return 0;
}
