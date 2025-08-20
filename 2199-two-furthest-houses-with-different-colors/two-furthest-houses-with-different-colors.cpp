class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int maxlen=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(colors[i]!=colors[j]){
                    maxlen=max(maxlen,j-i);
                }
            }
            
        }
        return maxlen;
    }
};