#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void solve () {
    int n, num, i;
    unordered_set<int> nums, numsA, numsB;
    vector<int> a;
    cin >> n;
    i = n;
    while (i--) {
        cin >> num;
        a.push_back(num);
        nums.insert(num);
    }
    int x = 0;
    while (nums.find(x) != nums.end()) {
        x++;
    }
    bool ok = false;
    int al = 1, ar = 1, bl, br = n;
    for (int i = 0; i < n; i++) {
        if (numsA.size() < x) {
            ar = i + 1;
            if (a[i] < x) {
                numsA.insert(a[i]);
            }
        } else {
            if (a[i] < x) {
                numsB.insert(a[i]);
            }
            if (numsB.size() >= x) {
                ok = true;
            }
        }
    }
    bl = ar + 1;
    if (!ok) {
        cout << -1 << endl;
        return;
    }
    cout << 2 << endl;
    cout << al << " " << ar << endl;
    cout << bl << " " << br << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}