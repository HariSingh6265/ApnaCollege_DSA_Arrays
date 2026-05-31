class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0;
        int rp = height.size()-1;
               
        
        while (lp < rp){
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWater = w*ht;

            maxWater = max(currWater, maxWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }

            return maxWater;   
    }
};