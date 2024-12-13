class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0;
        vector<int> result;

        while (i < a.size() && j < b.size()) {
            if (!result.empty() && a[i] == result.back()) {
                i++;
                continue;
            }
            if (!result.empty() && b[j] == result.back()) {
                j++;
                continue;
            }

            if (a[i] < b[j]) {
                result.push_back(a[i]);
                i++;
            } else if (a[i] > b[j]) {
                result.push_back(b[j]);
                j++;
            } else { 
                result.push_back(a[i]);
                i++;
                j++;
            }
        }

        while (i < a.size()) {
            if (result.empty() || a[i] != result.back()) {
                result.push_back(a[i]);
            }
            i++;
        }

        while (j < b.size()) {
            if (result.empty() || b[j] != result.back()) {
                result.push_back(b[j]);
            }
            j++;
        }

        return result;
    }
};

