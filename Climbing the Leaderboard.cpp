//https://www.hackerrank.com/challenges/climbing-the-leaderboard
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n,j,m,score,rank(0),prev(0);
    cin>>n;
    long long ldr[n][2],oldj(n-1);
    for(long long i=0;i<n;i++)
    {
        cin>>ldr[i][0];
        if(prev!=ldr[i][0])
            rank++;
        ldr[i][1]=rank; 
        prev=ldr[i][0];
    }    
    cin>>m;
    for(long long i=0;i<m;i++)
    {
        cin>>score;
        for(j=oldj;j>=0 && (score>=ldr[j][0]);j--);
        if(j<0)
            cout<<1<<endl;
        else
            cout<<ldr[j][1]+1<<endl;
        oldj=j;
    }
    return 0;
}
