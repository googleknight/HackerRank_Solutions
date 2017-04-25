//https://www.hackerrank.com/challenges/kaprekar-numbers
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   long long int low,high,flag=0;
    cin>>low>>high;
    for(long long int i=low;i<=high;i++)
    {
        long long int ans=i*i,temp;
        temp=ans;
       long len=0;
        while(temp>0)
         {
            temp/=10;
            len++;  
         }
        long long int big1=(pow(10,(len/2)));;
        if(len%2==1)
          big1*=10;
         long long int a=ans/big1;
         long long int big2=(pow(10,(len-(len/2))));
         long long int b=(ans)%(big2);
        if(i==a+b )
        {
           flag=1;   cout<<i<<" ";
        }
    }
    if(flag==0)
        cout<<"INVALID RANGE";
    return 0;
}
