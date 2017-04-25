//https://www.hackerrank.com/challenges/variable-sized-arrays
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,q;
    scanf("%d%d",&n,&q);
    vector<vector<int>> vararray;
    for(int i=0;i<n;i++)
    {
        int n1=0;
        vector<int> row;
        scanf("%d",&n1);
        for(int j=0;j<n1;j++)
        {
            int temp;
            scanf("%d",&temp);
            row.push_back(temp);
        }   
        vararray.push_back(row);
    }
    for(int i=0;i<q;i++)
    {
        int tempi,tempj;
        scanf("%d%d",&tempi,&tempj);
        printf("%d\n",vararray[tempi][tempj]);
    }    
    return 0;
}
