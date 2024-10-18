// class Solution {
// public:
//     string reverseVowels(string s) {
//         vector<char> str;
//             for (char i : s) {
//                 if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
//                     i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') {
//                     str.push_back(i);
//                 }
//             }
//             int n = str.size();
//             char reverse_str[n];
//             for (int i = 0; i < n; i++) {
//                 reverse_str[i] = str[n - i - 1];
//             }
//             int index = 0;
//             for (char& c : s) {
//                 if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
//                     c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
//                     c = reverse_str[index++];
//                 }
//             }

//         return s;
//     }
// };


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string reverseVowels(std::string s) {
        std::vector<char> vowels;

        // Collect all vowels in the string
        for (char c : s) {
            if (isVowel(c)) {
                vowels.push_back(c);
            }
        }

        // Reverse the collected vowels
        std::reverse(vowels.begin(), vowels.end());

        // Replace vowels in the original string with reversed vowels
        int index = 0;
        for (char &c : s) {
            if (isVowel(c)) {
                c = vowels[index++];
            }
        }

        return s;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};

