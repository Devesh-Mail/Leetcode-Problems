class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        long long first=0;
        first+=((startTime[0]-'0')*10+(startTime[1]-'0'));
        first*=3600;
        first+=((startTime[3]-'0')*10 + (startTime[4]-'0'))*60;
        first+=((startTime[6]-'0')*10 + ( startTime[7]-'0'));

        long long last=0;
        last+=((endTime[0]-'0')*10+ (endTime[1]-'0'))*3600;
        last+=((endTime[3]-'0')*10+(endTime[4]-'0'))*60;
        last+=((endTime[6]-'0')*10+(endTime[7]-'0'));
        return last-first;
    }
};