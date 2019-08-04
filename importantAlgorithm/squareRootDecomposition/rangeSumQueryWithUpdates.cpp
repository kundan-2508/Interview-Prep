https://leetcode.com/problems/range-sum-query-mutable/
https://www.geeksforgeeks.org/sqrt-square-root-decomposition-technique-set-1-introduction/
https://cp-algorithms.com/data_structures/sqrt_decomposition.html


class NumArray 
{
    private:
        int blk_size;
        vector<int> temp; // making a temp array(globally) to store nums which is local
        int blk[10000]={0};
    public:
        void preProcess(vector<int>& nums); // block computation
        NumArray(vector<int>& nums) 
        {
            for(int i=0;i<nums.size();i++) // copying nums array into temp array
            {
                temp.push_back(nums[i]);
            }
            blk_size = sqrt(nums.size()); 
            preProcess(temp); // making blocks
        }

        void update(int i, int val) 
        {
            int k = i/blk_size;
            blk[k] += (val - temp[i]);
            temp[i] = val;
        }
    
        int sumRange(int left, int right) 
        {

            int sum = 0;
            while(left < right && left%blk_size !=0 && left != 0)
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

void NumArray::preProcess(vector<int>& nums)
{
    int blk_ind = -1;
    
    for(int i=0;i<temp.size();i++)
    {
        if(i%blk_size == 0)
        {
            blk_ind++;
        }
        blk[blk_ind] += temp[i];
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
