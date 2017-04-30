//https://www.hackerrank.com/challenges/s10-basic-statistics
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    int n;
    vector<float> arry;
    map<float,int> modes;
    scanf("%d",&n);
    float sum=0.0;
    for(int i=0;i<n;i++)
    {
        float temp;
        scanf("%f",&temp);
        modes[temp]++;
        sum+=temp;
        arry.push_back(temp);
    }
    printf("%.1f\n",(sum/n));
    sort(arry.begin(),arry.end());
    if(n%2==1)
        printf("%.1f\n",arry[(int)(n/2)]);
    else
        printf("%.1f\n",((arry[(int)(n/2)]+arry[(int)(n/2)-1])/2));
    int maxfreq=0;
    float element=0.0;
    for(auto x:modes )
    {
        if(x.second>maxfreq)
        {
            maxfreq=x.second;
            element=x.first;
        }
    }
    cout<<element;
    return 0;
}
