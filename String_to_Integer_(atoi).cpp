class Solution {
public:


    int len(int n){
        int count=0;
        while(n!=0){
            n/=10;
            count++;
        }
        return count;
    }
    int atoi(const char *str) {
        if(str==NULL) return 0;
       	int result=0;
    	int flag=1;
    	int start=0;
    	int pre=0;
    	for(int i=0;i<strlen(str);i++){
    		if(str[i]==' '&&start==0) continue;
    		if(str[i]==' '&&start==1) break;
    		if(str[i]>='0'&&str[i]<='9'){
    			result*=10;
    			result+=str[i]-'0';
    			if(len(result)==len(pre)&&pre>1000000000)
    			    if(flag==1)return 2147483647;
    			    else return-2147483648;
    			if(result<0&&pre>0)
    			    if(flag==1)return 2147483647;
    			    else return-2147483648;
                start=1;
                pre=result;
                continue;
    		}
    		else{
    			if(start==1){
    				break;
    			}
    			else{
    				if(str[i]=='-') {
                    	flag=-1;
                    	start=1;
                    	continue;
                	}
                	if(str[i]=='+') {
                    	flag=1;
                    	start=1;
                    	continue;
                	}
                	else{
                	    break;
                	}
    			
    			}
    	    }
    	    
        }
        return flag*result;
        
    }
};

