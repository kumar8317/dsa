class Solution {
public:
    int numSquares(int n) {
        queue<int> q;
        int step = 1;
        q.push(n);
    
        while(!q.empty()){
            
            int size = q.size();
            for(int i = 0; i < size; i++){
                int node = q.front();
                q.pop();
                for(int j = 1; (j*j) <= node; j++){
                    int QueueInsert =  node - j*j;
                    if(QueueInsert == 0){
                        return step;
                    }
                    q.push(QueueInsert);
                }
            }
            step++;
        }

        return step;


        
        

        
    }
};