//https://www.hackerrank.com/challenges/reduced-string
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int check(vector<char> vec);
int main()
{
    string n;
    getline(cin,n);
    vector <char> data(n.begin(),n.end());
    while(check(data)==0)
    {
        for(int i=1;i<data.size();i++)
        {
            if(((int)(data[i-1]^data[i]))==0)
            {
                data.erase(data.begin()+i);
                data.erase(data.begin()+(i-1));
                i-=1;           
            }
        }   
    }
    if(data.empty())
        cout<<"Empty String";
    else
    {
        string ans(data.begin(),data.end());
        cout<<ans;
    }
    return 0;
}
int check(vector<char> vec)
{
    int size=vec.size();
    for(int i=1;i<size;i++)
    {
        if(((int)(vec[i]^vec[i-1]))==0)
            return 0;
    }
    return 1;
}
