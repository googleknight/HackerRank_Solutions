//https://www.hackerrank.com/challenges/c-tutorial-strings
#include <iostream>
#include <string>
using namespace std;
int main() {
   // Complete the program
  string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size();
    cout<<endl<<a+b<<endl;
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b;
    return 0;
}
