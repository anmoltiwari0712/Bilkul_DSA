class Solution {
public:
    bool hasAlternatingBits(int n) {
        int num=n;
        vector<int> ansbits;
        while(num>0){
            int rem=num%2;
            ansbits.push_back(rem);
            num=num/2;
        }
        for(int i=0;i<ansbits.size()-1;i++){
            if(ansbits[i]==ansbits[i+1]){
                return false;
            }
        }
        return true;
    }
};