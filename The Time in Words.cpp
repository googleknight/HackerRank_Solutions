//https://www.hackerrank.com/challenges/the-time-in-words
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int h,i;
    cin >> h;
    int m;
    cin >> m;
    char num[][15]={"o' clock","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen"};
    if(m==0)
    {
        cout<<num[h]<<" "<<num[0];
    }
    else 
    {
        int flag=0;
        for(i=1;i<20;i++)
        {       
            if(i==m || i==(60-m))
            {
                 flag=1;
                  break;
            }
        }
        if (flag==1)
        {
            if (i==1)
            {
                if(m==1)
                    cout<<num[i]<<" minute past "<<num[h];
                else if((60-m)==1)
                {
                    if(h!=12)
                        cout<<num[i]<<" minute to "<<num[h+1];
                    else
                        cout<<num[i]<<" minute to "<<num[1];
                }
            }
            else
            {
                if(m<30)
                {
                    if(m==15)
                        cout<<num[i]<<" past "<<num[h]; 
                    else
                        cout<<num[i]<<" minutes past "<<num[h];
                }
                else if((60-m)==i)
                {
                    if(h!=12)
                    {
                       if(i==15)
                           cout<<num[i]<<" to "<<num[h+1];
                       else
                           cout<<num[i]<<" minutes to "<<num[h+1];
                    }
                    else
                    {    
                        if(i==15)
                            cout<<num[i]<<" to "<<num[1];
                        else
                            cout<<num[i]<<" minutes to "<<num[1];
                    }
                }
              }
          }
            else
            {
                int dig2=m%10;
                int dig1=m/10;
                if(dig1==3 && dig2==0)
                    cout<<"half past "<<num[h];
                else
                {
                    if(m<30)
                      cout<<"twenty "<<num[dig2]<<" minutes past "<<num[h];
                    else 
                        if(h!=12)
                           cout<<"twenty "<<num[dig2]<<" minutes to "<<num[h+1];
                        else
                           cout<<"twenty "<<num[dig2]<<" minutes to "<<num[1];
                 }
            }
    }
    return 0;
}
