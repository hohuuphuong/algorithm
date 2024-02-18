#include <string>
#include <iostream>

using namespace std;


int countVietnameseLetter(string s) {
    int ans = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'a' || s[i] == 'd' || s[i] == 'e' || s[i] == 'o') {
            if (s[i] == s[i + 1]) {
                ans++;
                i += 2;
            }
            else if ((s[i] == 'a' || s[i] == 'o') && s[i + 1] == 'w') {
                ans++;
                i += 2;
            }
            else {
                i++;
            }
        }
        else if (s[i] == 'w') {
            ans++;
            i++;
        }
        else {
            i++;
        }
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << countVietnameseLetter(s);
    return 0;
}