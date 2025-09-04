class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            int len=words[0].length();
            if(isVowel(words[i][0]) && isVowel(words[i][words[i].length() - 1])){
                count++;
            }
        }
        return count;
    }
};