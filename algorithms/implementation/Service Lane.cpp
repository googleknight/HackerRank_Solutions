//https://www.hackerrank.com/challenges/service-lane
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,t,temp2,temp;
    vector<int> arr;
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        arr.push_back(temp);
    }
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&temp,&temp2);
        int small=arr[temp];
        for(int i=temp+1;i<=temp2;i++)
            if(arr[i]<small)
                small=arr[i];
        cout<<small<<endl;
    }
    return 0;
}
