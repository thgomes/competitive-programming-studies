#include <iostream>

using namespace std;

void printReversed(string str) {
    int i = str.size();
    while (i--) {
        cout << str[i];
    }
}

void solve () {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int i = s.size(), j = 0;
    bool lexOk = true;
    while (i--) {
        if (s[j] < s[i]) {
            lexOk = true;
            break;
        }
        if (s[j] > s[i]) {
            lexOk = false;
            break;
        }
        j++;
    }
    if (lexOk && n % 2 == 0) {
        cout << s << endl;
    }
    else if (lexOk && n % 2 != 0) {
        cout << s;
        printReversed(s);
    }
    else if (!lexOk && n % 2 == 0) {
        printReversed(s);
        cout << s << endl;
    }
    else if (!lexOk && n % 2 != 0) {
        printReversed(s);
        cout << endl;
    }
    return;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}