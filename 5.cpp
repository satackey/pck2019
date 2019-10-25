#include<bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for(ll i = 0; i<(n); i++)
using namespace std;

int main(){
    int l;
    cin >> l;
    
    vector<int> c_l(l);
    vector<int> cat_pipe(l);

    REP(i, l) {
        cin >> c_l[i];
    }

    int cat_num = 0;
    int ans = 0;
    int current_cat_id;
    REP(i_l, l) {
        current_cat_id = c_l[i_l];
        if (current_cat_id > 0) {
            // 入る

            // いままでにその番号のねこがはいっていないか？
            REP(i_check_prev, cat_num) {
                if (cat_pipe[i_check_prev] == current_cat_id) {
                    ans = i_l + 1;
                    // exit loop
                    i_l = l;
                    break;
                }
            }

            // ねこをいれる
            cat_pipe[cat_num] = current_cat_id;
            ++cat_num;
        } else {
            // 出る

            // 最後に入った猫ではなかったらだめ！！
            if (cat_pipe[cat_num-1] != current_cat_id*-1) {
                ans = i_l + 1;
                break;
            }

            // ねこを出す
            --cat_num;
        }
    }
    if (ans == 0) {
        cout << "OK";
    } else {
        cout << ans;
    }
    cout << endl;
}