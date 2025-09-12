class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum=0;
        int rightsum=0;
        int maxsum=0;
        int n=cardPoints.size();
        int rightindex=n-1;

        for(int i=0;i<k;i++){
            leftsum+=cardPoints[i];
        }
        maxsum=leftsum;
        for(int i=k-1;i>=0;i--){
            leftsum=leftsum-cardPoints[i];
            rightsum=rightsum+cardPoints[rightindex];
            rightindex--;

            maxsum=max(maxsum,rightsum+leftsum);
        }
        return maxsum;
    }
};