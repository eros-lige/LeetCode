class Solution {
public:
    bool ip(int x,int count){
	if(count<=0) return true;
       int z=pow(10,count);
       int y=x % z;
       int z1=x/z;
       int z2=x % 10;
	   //cout<<"z1:"<<z1<<"z2:"<<z2<<endl;
	   //cout<<"y/10:"<<y/10<<endl;
       if(z1!=z2) return false;
       return ip(y/10,count-2);
    }

    bool isPalindrome(int x) {
        if(x<0) return false;
       int count=-1;
       int tx=x;
       while(tx){
           tx=tx/10;
           count++;
       }
	   //cout<<count<<endl;
	   return ip(x,count);
       
    }

};