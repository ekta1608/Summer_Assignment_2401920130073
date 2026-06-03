class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        long long capacity=0;
        while(i<j){
            long long h=min(height[i],height[j]);
            long long width=j-i;
            long long area= h*width;
            capacity=max(capacity,area);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
          
        }
        return capacity;
    }
};