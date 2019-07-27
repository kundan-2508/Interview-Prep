https://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/
https://www.hackerrank.com/challenges/longest-increasing-subsequent/problem

int bSearch(vector<int> &lis, int low, int high, int key)
{
    while(high-low>1)
    {
        int mid = low + (high-low)/2;
        if(lis[mid]>=key)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    return high;
}
int longestIncreasingSubsequence(vector<int> arr) {
    if(arr.size() == 0)
        return 0;
    vector<int> lis(arr.size(),0);
    lis[0] = arr[0];
    int cnt = 0;
    for(int i=1;i<arr.size();i++)
    {
        // if upcomming element is less the lis[0]
        // then replace it with lis[0]
        if(arr[i]<lis[0])
        {
            lis[0] = arr[i];
        }
        // if upcomming element is greater the lis[cnt]
        // then append it in old list
        else if(arr[i]>=lis[cnt])
        {
            lis[++cnt] = arr[i];
        }
        // find an index j such that lis[j] is just
        // greater than arr[i] and replace lis[j] it with arr[i]
        else
        {
            int index = bSearch(lis,-1,cnt,arr[i]);
            lis[index] = arr[i];
        }
    }
    return cnt+1;
}

