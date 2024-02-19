#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<string> a;
void countVietnameseLetter(string s) {
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'a' || s[i] == 'd' || s[i] == 'e' || s[i] == 'o') {
            if (s[i] == s[i + 1]) {
                a.push_back(string(1,s[i]) + s[i+1]);
                i += 2;
            }
            else if ((s[i] == 'a' || s[i] == 'o') && s[i + 1] == 'w') {
                a.push_back(string(1, s[i]) + s[i + 1]);
                i += 2;
            }
            else {
                i++;
            }
        }
        else if (s[i] == 'w') {
            a.push_back(string(1, s[i]));
            i++;
        }
        else {
            i++;
        }
    }
}

int main() {
    string s;
    cin >> s;

    countVietnameseLetter(s);

    cout << a.size() << " (";
    for (int i = 0; i < a.size(); i++) {
        if (i == a.size()-1) {
            cout << a[i] << ")";
        }
        else {
            cout << a[i] << ",";
        }
    }

    return 0;
}