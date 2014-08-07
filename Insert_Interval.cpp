/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:

    bool merge(Interval & a,Interval & b){
        if(a.end>=b.start){
            a.end=a.end<b.end?b.end:a.end;
            return true;
        }
        return false;
    }
    static bool compare(const Interval & a,const Interval & b){
            return a.start<b.start;
    }
    
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        intervals.push_back(newInterval);
        if(intervals.size()<=0){
            return intervals;
        }
        vector<Interval> result;
        sort(intervals.begin(),intervals.end(),compare);
        Interval pre=intervals[0];
        for(int i=1;i<intervals.size();i++){
            if(!merge(pre,intervals[i])){
                result.push_back(pre);
                pre=intervals[i];
            }
            
        }
        result.push_back(pre);
        return result;
        
    }
};