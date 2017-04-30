//https://www.hackerrank.com/challenges/jumping-on-the-clouds
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, arr[101],count(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;)
    {
        if(i<(n-2))
            if(arr[i+2]==0)
                i+=2;
            else
                i++;
        else
            i++;
        count++;            
    }
    cout<<--count;
    return 0;
}
