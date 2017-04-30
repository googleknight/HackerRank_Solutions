//https://www.hackerrank.com/challenges/compare-the-triplets
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
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int counta=0,countb=0;
    if(a0>b0)counta++;
    else if(a0<b0) countb++;
    if(a1>b1)counta++;
    else if(a1<b1) countb++;
    if(a2>b2)counta++;
    else if(a2<b2) countb++;
    cout<<counta<<" "<<countb<<endl;
    return 0;
}
