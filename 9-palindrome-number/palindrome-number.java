class Solution {
    public boolean isPalindrome(int x) {
        int y = 0;
        int z = x;
        while(x > 0){
            int rem = x%10;
            y = (y*10) + rem;
            x /= 10;
        }
       
       return z == y;
    }
}