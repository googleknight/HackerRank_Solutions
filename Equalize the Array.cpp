//https://www.hackerrank.com/challenges/equality-in-a-array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,arr[101],freq[101]={0},max(-1);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        if(freq[arr[i]]>max)
            max=freq[arr[i]];
    }
    cout<<n-max;
    return 0;
}
