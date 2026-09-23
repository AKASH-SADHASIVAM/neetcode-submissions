class Solution {
public:
    string mergeAlternately(string s, string t) {
        int m = s.size();
        int n = t.size();

        int i = 0;
        int j = 0;
        string res = "";

        while(i < m && j < n){
            res += s[i];
            res += t[j];
            i++;
            j++;
        }


        while(i< m) res+=s[i++];
        while(j<n) res+=t[j++];

        return res;
    }
};