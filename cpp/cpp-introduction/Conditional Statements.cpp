//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    string a[]={"one","two","three","four","five","six","seven","eight","nine"};
    if(n<10 && n>0)
        cout<<a[n-1];
    else
        cout<<"Greater than 9";
   return 0;
}
