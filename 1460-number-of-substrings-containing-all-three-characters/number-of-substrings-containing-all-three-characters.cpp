class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int left=0;
        int right=0;
        // set<char> st;
        int count=0;
        vector<int> freqarr(3,0);
        while(right<n){
            freqarr[s[right] - 'a']++;
            
            while(freqarr[0] && freqarr[1] && freqarr[2]){
                count+=(n-right);
                freqarr[s[left++] - 'a']--;
            }
            right++;
        }
        return count;
    }
};