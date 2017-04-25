//https://www.hackerrank.com/challenges/plus-minus
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
    float plus=0.0,minus=0.0,zeros=0.0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]>0)
            plus++;
        if(arr[arr_i]<0)
            minus++;
        if(arr[arr_i]==0)
            zeros++;
    }
    cout<<(float)plus/n;
    cout<<endl<<(float)minus/n;
    cout<<endl<<(float)zeros/n;
    return 0;
}
