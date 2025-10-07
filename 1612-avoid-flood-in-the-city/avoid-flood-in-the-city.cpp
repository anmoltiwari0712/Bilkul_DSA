class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n=rains.size();
        set<int> st;
        unordered_map<int,int> mpp;
        vector<int> ans(n,1);
        for(int i=0;i<n;i++){
            if(rains[i]==0){
                st.insert(i);
                continue;
            }
            if(mpp.find(rains[i])!=mpp.end()){
                if(st.size()==0){
                    return {};
                }
                else{
                    auto it = st.lower_bound(mpp[rains[i]]);
                    if(it==st.end()){
                        return {};
                    }
                    ans[*it]=rains[i];
                    st.erase(it);
                }
            }
            ans[i]=-1;
            mpp[rains[i]]=i;
        }
        return ans;
    }
};