class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        int count=0;
        for(int i=0;i<n;i++){
            int prev=colors[(i-1+n)%n];
            // int curr=i;
            int next=colors[(i+1)%n];
            if((colors[i]!=prev) && (colors[i]!=next)){
                count++;
            }
        }
        return count;
    }
};