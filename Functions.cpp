//https://www.hackerrank.com/challenges/c-tutorial-functions
#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;
int max_of_four(int a, int b, int c, int d)
{
    int x[]={a,b,c,d};
    int big=INT_MIN;
    for(int i=0;i<4;i++)
        if(x[i]>big)
            big=x[i];
    return big;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
