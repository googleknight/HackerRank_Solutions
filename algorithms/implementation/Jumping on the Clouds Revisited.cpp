//https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k,arr[26],ans=100;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i=0;
    do{
        if(arr[i]==1)
            ans-=2;
        i=(i+k)%n;
        ans--;        
    }while(i!=0);
    cout<<ans;
    return 0;
}
