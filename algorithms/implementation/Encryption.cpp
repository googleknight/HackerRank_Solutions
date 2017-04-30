//https://www.hackerrank.com/challenges/encryption
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
    char str[85];
    fgets(str,sizeof(str),stdin);
    int r=floor(sqrt(strlen(str)));
    int c=ceil(sqrt(strlen(str)));
    if((r*c)<strlen(str))
        r++;
    char matrix[r][c];
    for(int i=0,j,k=0;i<r;i++)
    {   
        for( j=0;j<c && k<strlen(str);j++)
            if(str[k]!=' ')
                matrix[i][j]=str[k++];
        for(;j<c;j++)
            matrix[i][j]='#';
    }
    for(int i=0;i<c;i++)
    {
            for(int j=0;j<r ;j++)
                if(matrix[j][i]!='#')
                    cout<<matrix[j][i];
        cout<<" ";
    }
    return 0;
}
