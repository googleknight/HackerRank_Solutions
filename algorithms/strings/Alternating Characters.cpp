//https://www.hackerrank.com/challenges/alternating-characters
#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char *str=new char;
        cin>>str;
        int count =0;
        for(int j=0,k;j<strlen(str)-1;j=k)
        {
            for(k=j+1;k<strlen(str);k++)
                if (str[j]==str[k])
                    count++;
                else
                    break;                
        }
        cout<<count<<endl;
    }
    return 0;
}
