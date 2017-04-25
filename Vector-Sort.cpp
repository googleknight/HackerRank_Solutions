//https://www.hackerrank.com/challenges/vector-sort
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    vector <long> arry;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        long temp;
        scanf("%ld",&temp);
        arry.push_back(temp);        
    }
    sort(arry.begin(),arry.end());
    for(auto x: arry)
        printf("%ld ",x);
    return 0;
}
