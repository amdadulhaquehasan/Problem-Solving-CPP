#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+7;
char s[N];

int main() {
    cin >> s;
    int len = strlen(s);

    int frequency[26] = {0}; 

    for (int i = 0; i < len; i++) {
        int current_number = s[i] - 'a';
        if (current_number >= 0 && current_number < 26) {
            frequency[current_number]++;
        }
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        int current_number = ch - 'a';
        if (frequency[current_number] > 0) {
            cout << ch << " : " << frequency[current_number] << '\n';
        }
    }

    return 0;
}
