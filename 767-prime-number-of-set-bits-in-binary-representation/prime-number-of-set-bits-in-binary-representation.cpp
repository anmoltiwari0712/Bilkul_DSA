class Solution {
public:
    int binaryconv(int num){
        int val=num;
        int count=0;
        while(val>0){
            int rem=val%2;
            if(rem==1){
                count++;
            }
            val=val/2;
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
        unordered_set<int> primeSet = {2,3,5,7,11,13,17,19,23,29,31};

        int ans=0;
        for(int i=left;i<=right;i++){
            int val=binaryconv(i);
            if(primeSet.count(val)){
                ans++;
            }
        }
        return ans;
    }
};