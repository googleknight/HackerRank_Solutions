//https://www.hackerrank.com/challenges/find-digits
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
        int n,div=10,temp,count=0;
        cin >> n;
        temp=n;
        while(temp>0)
            {
                if(temp%10!=0)
                    if(n%(temp%10)==0)
                        count++;
                temp/=10;
        }
        cout<<count<<endl;
    }
    return 0;
}
