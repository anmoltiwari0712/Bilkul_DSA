class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int ans=0;
        int n=moves.length();
        int left=0,right=0,count=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                left++;
            }
            else if(moves[i]=='R'){
                right++;
            }
            else{
                count++;
            }
        }
        ans=abs(left-right)+count;
        return ans;
    }
};