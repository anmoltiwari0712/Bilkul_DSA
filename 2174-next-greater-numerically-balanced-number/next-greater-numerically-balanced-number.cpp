class Solution {
public:
    bool isbalanced(int num){
        // unordered_map<int,int> mpp1;
        // unordered_map<int,int> mpp2;
        // for(int i=0;i<)
        int temp=num;
        vector<int> freq(10, 0);
        while(num>0){
            int ld=num%10;
            freq[ld]++;
            num=num/10;
        } 
        if (freq[0] > 0) return false;

        for (int d = 1; d <= 9; ++d) {
            if (freq[d] > 0 && freq[d] != d) return false;
        }
        return true;
    }
    int nextBeautifulNumber(int n) {
        for(int i=n+1;;i++){
            if(isbalanced(i)){
                return i;
            }
        }
        return -1;
    }
};