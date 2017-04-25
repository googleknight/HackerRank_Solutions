//https://www.hackerrank.com/challenges/utopian-tree
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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n,h=1;
        cin >> n;
        for(int i=0;i<n;i++)
            if(i%2==0)
                h*=2;
            else
                h++;
        cout<<h<<endl;
    }
    return 0;
}
