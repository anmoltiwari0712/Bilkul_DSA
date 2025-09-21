class Solution {
public:
    int countPartitions(vector<int>& nums) {
        // vector<int> left;
        int leftsum=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int rightsum=0;
            leftsum+=nums[i];
            for(int j=i+1;j<n;j++){
                rightsum+=nums[j];
            }
            if((leftsum-rightsum)%2==0){
                count++;
            }
        }
        
        return count;
    }
};