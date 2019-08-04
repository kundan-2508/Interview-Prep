https://leetcode.com/problems/range-sum-query-immutable/

class NumArray {
    private:
        int blk_size;
        vector<int>temp;
        int blk[10000] = {0};
    public:
        void preProcess(vector<int>& temp);
        NumArray(vector<int>& nums) 
        {
            
            blk_size = sqrt(nums.size());
            
            for(int i=0;i<nums.size();i++)
            {
                temp.push_back(nums[i]);
            }
            preProcess(temp);
        }

        int sumRange(int left, int right) 
        {
            int sum = 0;
            while(left < right && left%blk_size != 0 && left != 0)
            {
                sum += temp[left];
                left++;
            }
            while(left + blk_size < right)
            {
                sum += blk[left/blk_size];
                left += blk_size;
            }
            while(left <= right)
            {
                sum += temp[left];
                left++;
            }
            return sum;
        }
};

void NumArray::preProcess(vector<int>& temp)
{
    for(int i=0;i<temp.size();i++)
    {
        blk[i/blk_size] += temp[i];
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
