//https://www.hackerrank.com/challenges/sherlock-and-the-beast
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
        int n,count5=0,count3=0;
        cin >> n;
        if(n<3)
            cout<<-1<<endl;
        else{
            count5=n;
            while((count5%3!=0 || (n-count5)%5!=0)&& count5>0)
                count5--;
            count3=n-count5;
            for(int i=0;i<count5;i++)
                cout<<5;
            if(count3%5==0)
            for(int i=0;i<count3;i++)
                cout<<3;
            if((count5%3==0 && count3%5==0)&&((count5+count3)==n))
                cout<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}
