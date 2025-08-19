class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxe=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>maxe){
                maxe=max(maxe,arr[i]);
            }
        }
        return maxe;
    }
};
