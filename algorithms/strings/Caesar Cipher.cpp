//https://www.hackerrank.com/challenges/caesar-cipher-1
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
    char s[101];
    cin >> s;
    int k;
    cin >> k;
    for(int i=0;i<n;i++)
    {
        if(isalpha(s[i]))
        {
            if(isupper(s[i]))
               for(int j=k;j>0;j--)
               {
                    if(s[i]<'Z')
                        s[i]++;
                    else
                        s[i]='A';
               }
            if(islower(s[i]))
               for(int j=k;j>0;j--)
               {
                    if(s[i]<'z')
                        s[i]++;
                    else
                        s[i]='a';
               }
        }
    }
    cout<<s;
    return 0;
}
