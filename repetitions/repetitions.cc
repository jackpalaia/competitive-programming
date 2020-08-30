#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll ans = 1, count = 0;
    string s;
    cin >> s;
    char c = 'A';
    for (char t : s) {
        if (t == c) {
            count++;
            ans = max(ans, count);
        } else {
            c = t;
            count = 1;
        }
    }
    cout << ans << endl;
}