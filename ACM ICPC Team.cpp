//https://www.hackerrank.com/challenges/acm-icpc-team
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n >> m;
    int checkbits[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            checkbits[i][j]=0;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
           for(int k=0;k<m;k++)
                {
                    if((topic[i][k]|topic[j][k])=='1')
                       checkbits[i][j]++;
            }
    int max=-1;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if(checkbits[i][j]>max)
                max=checkbits[i][j];
     cout<<max;
     int count=0;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if(checkbits[i][j]==max)
                 count++;
     cout<<endl<<count;  
    return 0;
}
