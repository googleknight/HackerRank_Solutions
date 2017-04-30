//https://www.hackerrank.com/challenges/insertionsort1
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  a,int n) {
    for(int i=1;i<n;i++)
        for(int j=i-1;j>=0 && j<n-1;j--)
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                for(int k=0;k<n;k++)
                    cout<<a[k]<<" ";
                cout<<endl;
                a[j]=temp;
            }
    for(int k=0;k<n;k++)
                    cout<<a[k]<<" ";
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}
insertionSort(_ar,_ar_size);
   return 0;
}
