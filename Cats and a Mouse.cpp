//https://www.hackerrank.com/challenges/cats-and-a-mouse
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,x,y,z;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        if(abs(x-z)<abs(y-z))
            cout<<"Cat A\n";
        else if(abs(x-z)>abs(y-z))
            cout<<"Cat B\n";
        else
            cout<<"Mouse C\n";
    }
    return 0;
}
