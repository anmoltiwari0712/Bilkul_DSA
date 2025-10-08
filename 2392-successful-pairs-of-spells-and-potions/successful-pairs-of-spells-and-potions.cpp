class Solution {
public:
    int binarysearch(vector<int> &arr,long long success){
        int low=0;
        int n=arr.size();
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=success){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
            // else{
            //     high=mid-1;
            // }
        }
        return low;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        sort(potions.begin(),potions.end());
        int n=spells.size();
        int m=potions.size();
        int count=0;
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            // long long minreq=success/spell   vut success+spell[i]-1/spells[i]
            long long minreq=(success + spells[i]-1)/spells[i];
            int index=binarysearch(potions,minreq);
            ans.push_back(m-index);
        }
        return ans;
    }
};