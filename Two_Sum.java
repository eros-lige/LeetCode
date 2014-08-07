public class Solution {
    public int[] twoSum(int[] numbers, int target) {
		int [] temp=new int [numbers.length];
		System.arraycopy(numbers, 0, temp, 0, numbers.length);
		
		int [] result=new int[2];
        Arrays.sort(numbers);
        int i=0,j=numbers.length-1;
        while(numbers[i]+numbers[j]!=target){
        	if(numbers[i]+numbers[j]target){
        		j--;
        		continue;
        	}
        	if(numbers[i]+numbers[j]target){
        		i++;
        		continue;
        	}
        	
        }
        System.out.println(numbers[i]+ +numbers[j]);
        System.out.println(temp[0]);
        int flag1=1,flag2=1;
        for(int k=0;ktemp.length;k++){
        	if(temp[k]==numbers[i]&&(flag1==1)){
        		result[0]=k+1;
        		flag1=0;
        		continue;
        	}
        	if(temp[k]==numbers[j]&&(flag2==1)){
        		result[1]=k+1;
        		flag2=0;
        		continue;
        	}
        }
        Arrays.sort(result);
        
        
        return result;
    }
}