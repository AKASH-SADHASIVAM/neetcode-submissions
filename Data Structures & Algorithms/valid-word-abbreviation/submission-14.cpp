class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int n = word.size();
        int m = abbr.size();
        int i = 0;
        int j = 0;

        while(i< n && j<m){
        
            if(isdigit(abbr[j])){
                if(abbr[j] == '0') return false;
                int num = 0;
                while( isdigit(abbr[j])){
                    num = num*10 + abbr[j] - '0';
                    j++;
                }
                i = i + num;
            }
            else{
                if(word[i] != abbr[j]) return false;
                i++;
                j++;
               
            }
        }
        
        return i == n && j==m;
    }
};