public class Solution {
    public String reverseWords(String s) {
        String result="";
        String [] temp=s.split(" ");
        if(temp.length<=0) return "";
        if(temp.length<=1) return temp[0];
        for(int i=temp.length-1;i>=0;i--){
            temp[i]=temp[i].trim();
            if(temp[i].length()<1)continue;
        	result+=temp[i]+" ";
        }
        result=result.trim();
        return result;
    }
}