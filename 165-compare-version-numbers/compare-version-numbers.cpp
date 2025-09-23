class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1, v2;
        istringstream iss1(version1), iss2(version2);
        string token;

        while (getline(iss1, token, '.')) {
            v1.push_back(stoi(token));
        }

        while (getline(iss2, token, '.')) {
            v2.push_back(stoi(token));
        }

        int val1, val2;
        for (int i = 0; i < max(v1.size(), v2.size()); i++) {
            if (i < v1.size()) {
                val1 = v1[i];
            } else {
                val1 = 0;
            }

            if (i < v2.size()) {
                val2 = v2[i];
            } else {
                val2 = 0;
            }

            if (val1 < val2) {
                return -1;
            } else if (val1 > val2) {
                return 1;
            }
        }
        return 0;
    }
};
