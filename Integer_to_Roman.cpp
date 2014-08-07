class Solution {
public:
    string intToRoman(int num) {
        char a[4][3]={"IV","XL","CD","M."};
        int depth=0;
        vector<string> vec;
        string s;
        while(num){
            s="";
            int temp=num%10;
            switch(temp){
                case 1:s=s+a[depth][0];break;
                case 2:s=s+a[depth][0]+a[depth][0];break;
                case 3:s=s+a[depth][0]+a[depth][0]+a[depth][0];break;
                case 4:s=s+a[depth][0]+a[depth][1];break;
                case 5:s=s+a[depth][1];break;
                case 6:s=s+a[depth][1]+a[depth][0];break;
                case 7:s=s+a[depth][1]+a[depth][0]+a[depth][0];break;
                case 8:s=s+a[depth][1]+a[depth][0]+a[depth][0]+a[depth][0];break;
                case 9:s=s+a[depth][0]+a[depth+1][0];break;
            }
            vec.push_back(s);
            num=num/10;
            depth++;
        }
        s="";
        for(int i=vec.size()-1;i>=0;i--){
            s+=vec[i];
        }
        return s;
        
    }
};