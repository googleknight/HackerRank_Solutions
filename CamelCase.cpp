//https://www.hackerrank.com/challenges/camelcase
#include <string>
#include <iostream>
#include <regex>
#include<iterator>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(!s.empty())
        cout<<(1)+distance(sregex_iterator(s.begin(),s.end(),regex("[A-Z]")),sregex_iterator());
    else
        cout<<0;
    return 0;
}
