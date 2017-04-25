//https://www.hackerrank.com/challenges/icecream-parlor
#include <bits/stdc++.h>
using namespace std;
class IceCream {
    public: 
        int flavor; 
        int index;
        IceCream(int flavor, int index) {
            this->flavor=flavor;
            this->index=index;            
       }
};
int binarySearch(int first, int last, vector<IceCream> arr, int search) {
    int mid;
    while(first<=last)
    {
        mid=first+(last-first)/2;
        if(arr[mid].flavor==search)
            return arr[mid].index;
        if(search>arr[mid].flavor)
            first =mid+1;         
        else
            last =mid-1;
    }  
    return -1;
}
bool compare(IceCream a,IceCream b)
    {
    return a.flavor < b.flavor;
}
int main() {
    int t;
    int n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {       
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve(n); 
        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i + 1));
        }
        sort(arr.begin(), arr.end(), compare);
        for(int i = 0; i < n - 1 ; i++) {
           int search = m - arr[i].flavor;
            if(search >= arr[i].flavor) {
                int index = binarySearch( i + 1, n - 1, arr, search);
                if( index != -1 ) {
                    cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
                    break;
                }
            }
        }
    }
}
