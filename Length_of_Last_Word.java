public class Solution {
    public int lengthOfLastWord(String s) {
        s=s.trim();
        String [] temp=s.split(" ");
        if(temp.length<=0) return 0;
        return temp[temp.length-1].length();
    }
}