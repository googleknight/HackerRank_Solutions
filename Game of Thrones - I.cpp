//https://www.hackerrank.com/challenges/game-of-thrones
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char *s=new char;
    cin>>s;
    int flag = 0;
    int n=strlen(s);
    int hash_map[27]={0},odd_count=0;
    for(int i=0;i<n;i++)
        hash_map[s[i]-97]++;
    for(int i=0;i<27;i++)
        if (hash_map[i]%2==1)
            odd_count++;
    if (n%2==0)
        flag=odd_count==0?1:0;
    else
        flag=odd_count==1?1:0;
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    delete s;
    return 0;
}
