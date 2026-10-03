class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        for(int low=0;low<n-2;low++){
            //skip duplicates at low
            if(low>0 && nums[low]==nums[low-1]){
                continue;
            }
            int mid=low+1;
            int high=n-1;

            while(mid<high){
                int sum=nums[low]+nums[mid]+nums[high];

                if(sum<0){
                    mid++;
                }
                else if(sum>0){
                    high--;
                }
                else{
                    answer.push_back({nums[low],nums[mid],nums[high]});
                    mid++;
                    high--;

                    //skip duplicates at mid
                    while(mid<high && nums[mid]==nums[mid-1]){
                        mid++;
                    }

                    //skip duplicates at high
                    while(mid<high && nums[high]==nums[high+1]){
                        high--;
                    }
                }
            }
        }
        return answer;
    }
};