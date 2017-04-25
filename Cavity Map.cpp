//https://www.hackerrank.com/challenges/cavity-map
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
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }
    if(n>2)
    {
        for(int i=1;i<n-1;i++)
            for(int j=1;j<n-1;j++)
                if(grid[i][j]>grid[i-1][j] && grid[i][j]>grid[i+1][j] && grid[i][j]>grid[i][j-1] && grid[i][j]>grid[i][j+1])
                       grid[i][j]='X';
    }
    for(int grid_i = 0;grid_i < n;grid_i++){
       cout<< grid[grid_i]<<endl;
    }
    return 0;
}
