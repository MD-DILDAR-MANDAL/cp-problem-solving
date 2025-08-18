class Solution
{
public:
    int trap(vector<int> &height)
    {
        int len = height.size();
        int sum = 0;
        int l = 0;
        int r = len - 1;
        int leftMax = 0;
        int rightMax = 0;

        while (l < r)
        {
            if (height[l] <= height[r])
            {
                if (leftMax < height[l])
                {
                    leftMax = height[l];
                }
                else
                {
                    sum += leftMax - height[l];
                }
                l++;
            }
            else
            {
                if (rightMax < height[r])
                {
                    rightMax = height[r];
                }
                else
                {
                    sum += rightMax - height[r];
                }
                r--;
            }
        }
        return sum;
    }
};