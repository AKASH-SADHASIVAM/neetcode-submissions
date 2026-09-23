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
#include<bits/stdc++.h>

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const Interval& a, const Interval& b) {
                 return a.start < b.start;
             });
        int n = intervals.size();
        if(n== 0) return true;

        int start = intervals[0].start;
        int end = intervals[0].end;

        for(int i = 1;i<n;i++){
            if(intervals[i].start < end) return false;
            else{
                start = intervals[i].start;
                end = intervals[i].end;
            }
        }

        return true;
    }
};
