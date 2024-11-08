class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            size_t index=haystack.find(needle);
            //bool a=haystack.find(needle);
            if(index!=string::npos){
                return index;
            }
        }
         return -1;
    }
};