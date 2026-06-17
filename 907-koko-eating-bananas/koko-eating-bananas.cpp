class Solution {
public:

    long long totalhours(vector<int>& piles, int speed){
        long long hours=0;

        for(int i=0;i<piles.size();i++){
            hours += ceil((double)piles[i] / speed);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(), piles.end());; //max element in the array
        
        while(low<=high){
            int mid = low + (high-low)/2;

            long long hours = totalhours(piles,mid);

            if(hours<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};