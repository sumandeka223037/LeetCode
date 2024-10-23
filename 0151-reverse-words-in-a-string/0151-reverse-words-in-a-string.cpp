class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> ans;
        while(ss>>word){
            ans.push_back(word);
        }
        string reverse_Str;
        int n=ans.size();
        for(int i=n-1;i>=0;i--){
            reverse_Str.append(ans[i]);
            if(i!=0){
                reverse_Str+=" ";
            }
        }
        return reverse_Str;
    }
};