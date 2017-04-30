//https://www.hackerrank.com/challenges/designer-pdf-viewer
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int h[27];
    string ans;
    for(int i=0;i<26;i++)
        cin>>h[i];
    cin>>ans;
    int w=ans.size();
    int hi(0);
    for(int i=0;i<w;i++)
        if(h[ans.at(i)-'a']>hi)
            hi=h[ans.at(i)-'a'];
    cout<<hi*w;
    return 0;
}
