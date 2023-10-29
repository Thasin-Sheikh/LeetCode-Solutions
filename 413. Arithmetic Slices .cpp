class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int i,j,d=0;
        if(nums.size()<3)
        {
            return 0;
        }
        d=nums[1]-nums[0];
        int cur=2;
        int ans=0;
        for(i=2;i<nums.size();i++)
        {
            int cud=nums[i]-nums[i-1];
            if(cud==d)
            {
                cur++;
            }
            else
            {

                    int a=cur-2;
                    ans+=(a*(a+1))/2;
                    cur=2;
                    d=cud;

            }
        }
        if(cur>2)
        {
            int a=cur-2;
            ans+=(a*(a+1))/2;

        }
           return ans;
    }
};
