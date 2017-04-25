//https://www.hackerrank.com/challenges/s10-standard-deviation
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    vector<double> arry;
    double sum(0),variance(0);;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        double temp;
        scanf("%lf",&temp);
        arry.push_back(temp);
        sum+=temp;
    }
    sum/=n;
    for(int i=0;i<n;i++)
        variance+=pow(arry[i]-sum,2);
    variance/=n;
    printf("%.1lf",sqrt(variance));
    return 0;
}
