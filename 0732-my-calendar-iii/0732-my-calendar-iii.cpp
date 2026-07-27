class MyCalendarThree {
public:
    MyCalendarThree() {}
        map<int,int>timeline;
    
    int book(int startTime, int endTime) {
        // map<int,int>timeline;
        timeline[startTime]++;
        timeline[endTime]--;
        int max_k=0;
        int active_eve=0;
        for(const auto &[time,count]:timeline){
            active_eve+=count;
            max_k=max(max_k,active_eve);
        }
        return max_k;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */