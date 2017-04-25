//https://www.hackerrank.com/challenges/grading
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int num;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);        
        if(((((num/5)+1)*5)-num)<3 && num>=38)
            cout<<((num/5)+1)*5<<endl;
        else
            cout<<num<<endl;
    }
    return 0;
}
