class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        vector<string> result;
        if(strs.size()<=0) return result;
        map<string, int> _map;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            if(_map.find(temp)==_map.end()){
                _map.insert(pair<string,int>(temp,i));
            }
            else{
                int index=_map[temp];
                if(index>=0){
                    result.push_back(strs[index]);
                    _map[temp]=-1;
                }
                result.push_back(strs[i]);
            }
            
        }
        return result;
    }
};