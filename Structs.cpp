//https://www.hackerrank.com/challenges/c-tutorial-struct
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Student {
    string first_name,last_name;
    int age,standard;
};
int main() {
    Student st;
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    return 0;
}
