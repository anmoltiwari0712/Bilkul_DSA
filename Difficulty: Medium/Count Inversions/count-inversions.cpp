class Solution {
  public:
    long long merge(vector<int> &arr,int low,int mid,int high){
        vector<int> temp;
        int left=low;
        int right=mid+1;
        
        long long count=0;
        
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);   // ✅ take from right
                right++;
                count += (mid - left + 1);    // ✅ count inversions
            }
        }
        
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        
        return count;   // ✅ return count
    }
    
    long long mergeSort(vector<int> &arr, int low, int high) {
        long long cnt = 0;
        if (low >= high) return cnt;
        int mid = (low + high) / 2;

        cnt += mergeSort(arr, low, mid);     // left half
        cnt += mergeSort(arr, mid + 1, high); // right half
        cnt += merge(arr, low, mid, high);   // merging sorted halves

        return cnt;
    }
    
    long long inversionCount(vector<int> &arr) {
        int n=arr.size();
        return mergeSort(arr, 0, n - 1);
    }
};
