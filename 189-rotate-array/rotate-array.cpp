class Solution {
public:
    void reversee(vector<int>& arr,int left,int right){
        while(left<=right){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reversee(nums,0,n-1);
        reversee(nums,0,k-1);
        reversee(nums,k,n-1);

    }
};