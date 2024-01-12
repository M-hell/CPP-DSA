#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "abc";
    int l = s.size();
    for (int i = 0; i < l; i++) {
        for (int j = i + 1; j <= l; j++) {
            cout << endl << s.substr(i, j - i); //in c++ j-i if another language only j
        }
    }
    return 0;
}