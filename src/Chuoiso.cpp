#include "bits/stdc++.h"
using namespace std;

int shortestSubstringWithAllCharacters(const string& s) {
    unordered_map<int, int> charCounts;
    unordered_map<int, int> requiredChars = {{1, 0}, {2, 0}, {3, 0}};
    int minLength = INT_MAX;
    int left = 0;

    for (int right = 0; right < s.length(); right++) {
        charCounts[s[right] - '0']++;

        while (charCounts[1] > 0 && charCounts[2] > 0 && charCounts[3] > 0) {
            minLength = min(minLength, right - left + 1);
            charCounts[s[left] - '0']--;
            left++;
        }
    }

    return (minLength != INT_MAX) ? minLength : 0;
}

int main() {
    string s;
    cin >> s;

    int result = shortestSubstringWithAllCharacters(s);
    cout << result << endl;

    return 0;
}