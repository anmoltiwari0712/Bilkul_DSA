class Solution {
public:
    void dfs(int startnode,vector<int> graph[],vector<int>& visited){
        visited[startnode]=1;

        for(auto& it:graph[startnode]){
            if(!visited[it]){    //it is the neighbour nodes
                dfs(it,graph,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();

        vector<int> graph[n];   //converting matrix to adjacency list
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isConnected[i][j]==1){
                    graph[i].push_back(j);
                }
            }
        }

        vector<int> visited(n,0);
        int count=0;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(i,graph,visited);
            }
        }
        return count;


    }
};