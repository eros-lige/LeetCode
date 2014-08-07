public class Solution {
   public int evalRPN(String[] tokens) {
		Stack<String> stack=new Stack<String>();
        int value=0;
        for(int i=0;i<tokens.length;i++){
        	String temp=tokens[i];
        	if(temp.equals("+")){
        		String temp1=stack.pop();
        		String temp2=stack.pop();
        		value=Integer.valueOf(temp1)+Integer.valueOf(temp2);
        		stack.push(String.valueOf(value));
        	}
        	
        	else if(temp.equals("-")){
        		String temp1=stack.pop();
        		String temp2=stack.pop();
        		value=Integer.valueOf(temp2)-Integer.valueOf(temp1);
        		stack.push(String.valueOf(value));
        	}
        	
        	else if(temp.equals("*")){
        		String temp1=stack.pop();
        		String temp2=stack.pop();
        		value=Integer.valueOf(temp1)*Integer.valueOf(temp2);
        		stack.push(String.valueOf(value));
        	}
        	
        	else if(temp.equals("/")){
        		String temp1=stack.pop();
        		String temp2=stack.pop();
        		value=Integer.valueOf(temp2)/Integer.valueOf(temp1);
        		stack.push(String.valueOf(value));
        	}
        	
        	else{
        		stack.push(temp);
        	}
        }
        value=Integer.valueOf(stack.pop());
        return value;
        
    }
}