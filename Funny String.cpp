//https://www.hackerrank.com/challenges/funny-string
#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int a0=0;a0<t;a0++)
    {
        char str[10000];
        cin>>str;
        int count=0;
        for(int i=1,j=strlen(str)-1;i<strlen(str) && j>0;i++,j--)
           if(abs((str[i]-str[i-1]))==abs((str[j-1]-str[j])))
                count++;
        if(count==strlen(str)-1)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
    }
    return 0;
}
