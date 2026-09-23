class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int n = s.size();
        int left = 0;
        int right = 0;
        map<char, int>mp;
        int maxi = 0;
        while(right < n){
            mp[s[right]]++;
            while(mp.size() > 2){
                if(mp[s[left]] == 1){
                    mp.erase(s[left]);
                }
                else{
                    mp[s[left]]--;
                }

                left++;
            }

            maxi = max(maxi, right - left + 1);
            right++;
        }

        return maxi;
    }
};