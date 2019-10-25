#include<bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for(ll i = 0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n >= 65 && n <= 90) {
        cout << "1";
    } else if (n >= 97 && n <= 122) {
        cout << "2";
    } else {
        cout << "0";
    }

    cout << endl;
}