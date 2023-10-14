#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x ; cin >> x;
    int l = 0, r = x - 1, m ;
    while (l <= r) {
        m = (r + l) / 2;
        if (m * m == x) {
            cout << m;
            return 0;
        }
        if (m * m < x) l = m + 1;
        else r = m - 1;
    }
    cout << l - 1 << '\n';
    return 0;
}