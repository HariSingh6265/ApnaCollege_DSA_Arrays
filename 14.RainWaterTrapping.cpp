class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;
        int currWater = 0;       
        
            for(int i = 0; i < n; i++){
                for (int j = 0; j < n; j++) {
                    if(height[j] < height[i]){
                        currWater = height[j]*(j-i);
                    }

                    else if (height[j] > height[i]){
                        currWater = height[i]*(j-i); 
                    }

                    else {
                        currWater = height[i]*(j-i);
                    }

                    maxWater = max(currWater , maxWater);
                }            
            } 

            return maxWater;   
    }
};