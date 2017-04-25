//https://www.hackerrank.com/challenges/c-tutorial-basic-data-types
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int a; long b; long long c; char ch;float d;double e;
    scanf("%d %lld %lld %c %f %lf",&a,&b,&c,&ch,&d,&e);
    printf("%d\n%lld\n%lld\n%c\n%f\n%lf",a,b,c,ch,d,e);
    return 0;
}
