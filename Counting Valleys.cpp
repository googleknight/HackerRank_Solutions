//https://www.hackerrank.com/challenges/counting-valleys
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,temp(0),count(0);
    string str;
    scanf("%d",&n);
    cin>>str;
    for(int i=0;i<str.length();i++)
    {        
        if(str.at(i)=='U')
            temp++;
        else
            temp--;
        if(str.at(i)=='U' && i>0 && temp==0)
            count++;
    }
    cout<<count;
    return 0;
}
