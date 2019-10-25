#include<bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for(ll i = 0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;

    int last2 = 2;
    int checking;
    while(1) {
        checking = last2 * 2;
        if (checking > n) break;
        last2 = checking;
    }

    cout << last2 << endl;
}