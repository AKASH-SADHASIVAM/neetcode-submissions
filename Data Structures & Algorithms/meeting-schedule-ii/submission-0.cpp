/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int>start;
        vector<int>end;
        for(auto x: intervals){
            start.push_back(x.start);
            end.push_back(x.end);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int maxRoom = 0;
        int count = 0;
        int startIdx = 0;
        int endIdx = 0;

        int n = intervals.size();

        while(startIdx < n && endIdx < n){
            if(start[startIdx] < end[endIdx]){
                count++;
                startIdx++;
            }
            else{
                count--;
                endIdx++;
            }
            
            maxRoom = max(maxRoom , count);
        }
        return maxRoom;
    }
};
