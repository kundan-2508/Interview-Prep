
https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/
https://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/

#include<bits/stdc++.h>
using namespace std;

int lis(vector<int> v)
{
	vector<int> lis(v.size());
	lis[0] = 1;
	for(int i=1;i<v.size();i++)
	{
		lis[i] = 1;
		for(int j=0;j<i;j++)
		{
			if(v[i]>v[j] && lis[i] < lis[j] + 1)
			{
				lis[i] = lis[j]+1;
			}
		}
	}
	sort(lis.begin(),lis.end());
	return lis[v.size()-1];
}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    int n,k;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>k;
	        v.push_back(k);
	    }
	    cout<<lis(v)<<endl;
	}
	return 0;
}
