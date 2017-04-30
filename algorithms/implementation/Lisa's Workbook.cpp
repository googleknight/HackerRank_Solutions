//https://www.hackerrank.com/challenges/lisa-workbook
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k,oldt(0),t(0),q,count(0),page(1);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>q;
        t=0,oldt=0;
        while(q>0)
        {
            if((q-k)>=0)
            {
                oldt=t;
                t+=k;
                q=q-k;
            }
           else
           {
               oldt=t;
                t+=q;
                q=0;
           }    
            if(page>oldt && page<=t)
                count++;                
            page++;
        }
    }
    cout<<count;
    return 0;
}
