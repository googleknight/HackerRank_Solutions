//https://www.hackerrank.com/challenges/library-fine
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
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    long long days1= (y1*365)+(m1*31)+d1;
    long long days2= (y2*365)+(m2*31)+d2;
    if(days1<=days2 && y1<=y2)
        cout<<0;
    else if(y1!=y2)
        cout<<10000;
    else if(m1!=m2)
        cout<<(m1-m2)*500;
    else if(d1!=d2)
        cout<<(d1-d2)*15;
    return 0;
}
