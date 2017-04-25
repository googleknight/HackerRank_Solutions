//https://www.hackerrank.com/challenges/time-conversion
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
    string time;
    cin >> time;
    char *str=(char*)time.c_str();
    int hr,i;
    hr=atoi(str);
    if(str[8]=='P'||str[8]=='p')
    {
        if(hr!=12)
            hr+=12;
    }
    else if((str[8]=='A'||str[8]=='a' )&& hr==12)
        hr=0;
    if(hr<10)
        cout<<0;
    cout<<hr;
    for( i=2;i<8;i++)
        cout<<str[i];
    return 0;
}
