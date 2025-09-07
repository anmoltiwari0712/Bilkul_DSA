class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int> ans;
        int n=arr.size();
        int hasharray[n+1]={0};
        for(int i=0;i<n;i++){
            hasharray[arr[i]]++;
        }
        int missing=-1;
        int repeating=-1;
        for(int i=1;i<=n;i++){
            if(hasharray[i]==2){
                repeating=i;
            }
            if(hasharray[i]==0){
                missing=i;
            }
            if(missing!=-1 && repeating!=-1){
                break;
            }
        }
        ans.push_back(repeating);
        ans.push_back(missing);
        return ans;
        
    }
};