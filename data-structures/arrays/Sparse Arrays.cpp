//https://www.hackerrank.com/challenges/sparse-arrays
#include <cmath>
#include <cstdio>
#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main() {
    int n,q;
    cin>>n;
    string str,query;
    unordered_map<string, int> hash;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        hash[str]++;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>query;
        cout<<hash[query]<<endl;
    }
    return 0;
}
