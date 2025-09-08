class Solution {
public:
    bool isNoZero(int num){
        while(num>0){
            if(num%10==0){
                return false;
            }
            num=num/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int a=i;
            int b=n-i;
            if(isNoZero(a) && isNoZero(b)){
                return {a,b};
            }
        }
        return {};
    }
};