//https://www.hackerrank.com/challenges/tutorial-intro
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int v,n,x;
    vector<int> arr;
    cin>>v>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    cout<<find(arr.begin(),arr.end(),v)-arr.begin();
    return 0;
}
