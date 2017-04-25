//https://www.hackerrank.com/challenges/the-love-letter-mystery
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
        int count=0;
        char s[10001];
        cin>>s;
        int last_index=strlen(s)-1;
        for(int j=0;j<strlen(s)/2;j++,last_index--)
                count+=abs(s[j]-s[last_index]);
        cout<<count<<endl;   
    }
    return 0;
}
