class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int i = 0;
        int a = height.size() - 1;
        while (i <= a) {
            if ((a-i) * (min(height[i], height[a]))> max) {
                max =(a-i) * (min(height[a], height[i]));
            }
            if(height[i] < height[a]) {
                i++;
            } 
            else {
                a--;
            } 
        }

        return max;
    }
};
