//https://www.hackerrank.com/challenges/diagonal-difference
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
    int n,sump=0,sums=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {    if(i==j)        
                sump+=a[j][j];
            if(i+j==n-1)
                sums+=a[i][j];
        }
       int sum=sump-sums;
        if(sum<0)
            sum*=(-1);
        cout<<sum;
    return 0;
}
