class MovingAverage {
public:
    queue<int> q;
    int s;
    int sum = 0;
    MovingAverage(int size) {
        s = size;
    }
    
    double next(int val) {
        sum+=val;
        q.push(val);
        
        int windowSize = q.size();
        while(windowSize>s){
            sum-=q.front();
            q.pop();
            windowSize--;
        }
        
        return (double)sum/windowSize;
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */