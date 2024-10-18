class Solution {
public:
    string reverseVowels(string s) {
        vector<char> str;
            for (char i : s) {
                if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
                    i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') {
                    str.push_back(i);
                }
            }
            reverse(str.begin(),str.end());
            int index = 0;
            for (char& c : s) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    c = str[index++];
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