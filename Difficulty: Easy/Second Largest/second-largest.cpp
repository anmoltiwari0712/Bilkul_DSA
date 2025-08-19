class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int fle=INT_MIN;
        int sle=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>fle){
                sle=fle;
                fle=arr[i];
            }
            else if(arr[i]>sle && arr[i]!=fle){
                sle=arr[i];
            }
        }
        if(sle==INT_MIN){
            return -1;
        }
        else{
            return sle;
        }
    }
};