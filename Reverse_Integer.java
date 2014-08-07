public class Solution {
    public int reverse(int x) {
        if(x>=0){
            return Integer.valueOf(new StringBuffer(String.valueOf(x)).reverse().toString());
        }
        else{
            return Integer.valueOf("-"+new StringBuffer(String.valueOf(x).substring(1)).reverse().toString());
        }
    }
}