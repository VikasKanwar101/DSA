class Solution {
public:
    int minimumDeletions(string w, int k) {
        vector<int> f(26, 0);
        for (int i = 0; i < w.size(); i++) {
            f[w[i] - 'a']++;
        }
        vector<int> v;
        for (int i = 0; i < 26; i++) {
            if (f[i] > 0) v.push_back(f[i]);
        }
        sort(v.begin(), v.end());
        int a = INT_MAX;
        for (int t = 0; t <= v.back(); t++) {
            int d = 0;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] < t) d += v[i];
                else if (v[i] > t + k) d += v[i] - (t + k);
            }
            a = min(a, d);
        }
        return a;
    }
};
