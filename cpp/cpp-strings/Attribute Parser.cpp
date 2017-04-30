//https://www.hackerrank.com/challenges/attribute-parser
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <map>
using namespace std;
int main() {
    int n, q;
    string line,temp;
    map<string,string> mymap;
    vector<string> vec;
    cin>>n>>q;
    for(int i=0;i<=n;i++)
    {
        getline(cin,line);
        smatch m_res;
        if(regex_search(line,m_res,regex("^</")))
            vec.pop_back();
        else if(regex_search(line,m_res,regex("^<\\w*")))
        {
            temp="";  
            temp=m_res.str(0);
            vec.push_back(temp.substr(1));
            while(regex_search(line,m_res,regex("\\S*\\s?=\\s?\"\\S*\"")))
            {
              temp="";  
              temp=m_res.str(0);
              line=m_res.suffix().str();
              string sattrib(temp.substr(0,temp.find("=")-1));
              string sval(temp.substr(temp.find("=")+3));
              sval=sval.substr(0,sval.size()-1);
              string data("");
              int sz=vec.size();
              for(int j=0;j<sz;j++)
                data+=vec[j]+".";
              data=data.substr(0,data.length()-1);
              mymap.insert(make_pair(data+"~"+sattrib,sval));
            }            
        } 
    }  
    for(int i=0;i<q;i++)
    {
        string x;
        cin>>x;
        if(mymap.count(x)>0)
            cout<<mymap[x]<<endl;
        else
            cout<<"Not Found!\n";
    }
    return 0;
}
