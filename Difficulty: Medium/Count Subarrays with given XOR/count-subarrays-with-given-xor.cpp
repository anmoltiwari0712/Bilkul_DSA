class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int count=0;
        map<int,int> mpp;
        int prefixor=0;
        for(int i=0;i<n;i++){
            prefixor=prefixor ^ arr[i];
            
            if(prefixor==k){
                count++;
            }
            
            int target = prefixor ^ k;
            
            if(mpp.find(target)!=mpp.end()){
                count= count + mpp[target];
            }
            mpp[prefixor]++;
        }
        return count;
    }
};