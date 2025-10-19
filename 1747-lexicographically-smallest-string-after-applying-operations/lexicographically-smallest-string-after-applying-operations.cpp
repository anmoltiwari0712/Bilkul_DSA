class Solution {
public:
    string rotatestring(string s,int places){
        string res="";
        int n=s.length();
        res=res+s.substr(n-places,places);
        res=res+s.substr(0,n-places);
        return res;
    }
    string addstring(string s,int k){
        int n=s.length();
        for(int i=0;i<n;i++){
            if(i%2!=0){
                int val=s[i]-'0';
                val=val+k;
                // int ld=val%10;
                s[i] = (val % 10) + '0'; 
            }
        }
        return s;
    }
    string findLexSmallestString(string s, int a, int b) {
        string smallest = s;
        set<string> visited;   // to avoid repeating states
        queue<string> q;
        q.push(s);
        visited.insert(s);

        while (!q.empty()) {
            string cur = q.front();
            q.pop();

        // Apply add operation
            string next1 = addstring(cur, a);
            if (!visited.count(next1)) {
                visited.insert(next1);
                q.push(next1);
                if (next1 < smallest) smallest = next1;
            }

        // Apply rotate operation
            string next2 = rotatestring(cur, b);
            if (!visited.count(next2)) {
                visited.insert(next2);
                q.push(next2);
                if (next2 < smallest) smallest = next2;
            }
        }

        return smallest;
    }
};