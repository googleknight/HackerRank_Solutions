//https://www.hackerrank.com/challenges/s10-weighted-mean
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    float sum=0.0,wsum=0.0;
    vector<float> xarry,warry;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        float temp;
        scanf("%f",&temp);
        xarry.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        float temp;
        scanf("%f",&temp);
        warry.push_back(temp);
        sum+=warry[i]*xarry[i];
        wsum+=warry[i];
    }
    printf("%.1f",(sum/wsum));
    return 0;
}
