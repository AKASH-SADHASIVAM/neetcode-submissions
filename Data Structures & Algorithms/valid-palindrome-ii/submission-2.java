class Solution {
    public boolean isValidPalindrome(String s, int left , int right){
        while(left<=right){
            if(s.charAt(left) != s.charAt(right)) return false;
            left++;
            right--;
        }
        return true;
    }
    public boolean validPalindrome(String s) {
        int n = s.length();
        int left = 0;
        int right = n-1;
        while(left <= right){
            if(s.charAt(left) != s.charAt(right)){
                return isValidPalindrome(s, left+1, right) || isValidPalindrome(s, left, right-1);
            }
            left ++;
            right--;
        }

        return true;
    }
}