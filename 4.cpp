#include<bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for(ll i = 0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    // vector<int> point_num(n);

    int input;
    int min_point = 50000, max_point = -1;
    REP(i, n) {
        cin >> input;

        min_point = min({min_point, input});
        max_point = max({max_point, input});
    }

    int ans = (max_point - min_point + 1) / 2;

    cout << ans << endl;
}