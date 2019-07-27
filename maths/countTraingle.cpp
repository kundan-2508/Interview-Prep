https://leetcode.com/problems/valid-triangle-number/

class Solution {
public:
    int triangleNumber(vector<int>& arr) {
        int len = arr.size();
        sort(arr.begin(),arr.end());
		int cnt = 0;
		for(int i=0;i<len-2;i++)
		{
			int k = i + 2;
			for(int j=i+1;j<len-1;j++)
			{
				while(k < len && arr[i] + arr[j] > arr[k])
				{
					k++;
				}
				if(k>j)
				{
					cnt += k-j-1;
				}
			}
		}
		return cnt;
    }
};
