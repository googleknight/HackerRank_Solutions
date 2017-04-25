//https://www.hackerrank.com/challenges/fair-rations
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,arr[1002],one(-1),count(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0)
        {
            if(one>=0)
            {
                count+=(i-one);
                one=-1;
            }
            else
                one=i;
        }    
    }
    if(one==-1)
        cout<<count*2;
    else
        cout<<"NO";
        return 0;
}
