//https://www.hackerrank.com/challenges/pangrams
#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    char str[1002];
    int count=0;
    fgets(str,sizeof(str),stdin);
    bool alpha[28];
    for(int i=0;i<strlen(str);i++)
        if(isalpha(str[i]))
        {    
            str[i]=tolower(str[i]);
            alpha[str[i]-'a']=true;
        }
    for(int i=0;i<26;i++)
    {
        if(alpha[i])
            count++;
    }
    if(count==26)
        cout<<"pangram";
    else
        cout<<"not pangram";
    return 0;
}
