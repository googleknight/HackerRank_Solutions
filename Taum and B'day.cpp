//https://www.hackerrank.com/challenges/taum-and-bday
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
        unsigned long long int ans=0;
        unsigned long long int b;
        unsigned long long int w;
        cin >> b >> w;
        unsigned long long int x;
        unsigned long long int y;
        unsigned long long int z;
        cin >> x >> y >> z;
        if(x>(y+z))
            ans=b*(y+z)+(w*y);
        else if(y>(x+z))
            ans=w*(x+z)+(b*x);
        else
            ans=b*x+w*y;
        cout<<ans<<endl;
    }
    return 0;
}
