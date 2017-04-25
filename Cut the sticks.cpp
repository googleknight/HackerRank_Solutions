//https://www.hackerrank.com/challenges/cut-the-sticks
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
    int n,count=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]!=0)
            count++;
    }
    while(count>1)
    {
        cout<<count<<endl;
        count=0;
        int small=INT_MAX;
        for(int j=0;j<n;j++)
            if(arr[j]<small && arr[j]!=0)
                small=arr[j];
        for(int j=0;j<n;j++)
            if(arr[j]!=0)
            {    
                arr[j]-=small;
                if(arr[j]!=0)
                    count++;      
            }
    }
    if(count!=0)
    cout<<count;    
    return 0;
}
