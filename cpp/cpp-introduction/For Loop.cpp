//https://www.hackerrank.com/challenges/c-tutorial-for-loop
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int first,last;
    string name[]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>first>>last;
    for(int i=first;i<=last;i++)
        if(i<10)
            cout<<name[i-1]<<endl;
        else if(i%2)
            cout<<"odd\n";
        else 
            cout<<"even\n";
    return 0;
}
