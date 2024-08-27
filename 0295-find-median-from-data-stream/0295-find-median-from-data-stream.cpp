class MedianFinder {
public:
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int size1 = maxHeap.size();
        int size2 = minHeap.size();
        
        if(size1<=size2){
            minHeap.push(num);
            int ele = minHeap.top();
            minHeap.pop();
            maxHeap.push(ele);
        }else{
            maxHeap.push(num);
            int ele = maxHeap.top();
            maxHeap.pop();
            minHeap.push(ele);
        }
    }
    
    double findMedian() {
       int size1 = maxHeap.size();
        int size2 = minHeap.size();
        if(size1>size2){
            return 1.0*maxHeap.top();
        }else{
            int ele1 = maxHeap.top();
            int ele2 = minHeap.top();
            
            
            return (1.0*ele1+1.0*ele2)/2.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */