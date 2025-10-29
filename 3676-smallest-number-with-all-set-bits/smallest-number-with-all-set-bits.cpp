class Solution {
public:
    bool isSet(int n){
        while(n>0){
            if(n%2==0){
                return false;
            }
            n=n/2;
        }
        return true;
    }
    int smallestNumber(int n) {
        for(int i=n;i<=2*n;i++){
            if(isSet(i)){
                return i;
            }
        }
        return 0;
    }
};