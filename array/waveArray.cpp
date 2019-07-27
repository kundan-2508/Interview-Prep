https://www.interviewbit.com/problems/wave-array/

vector<int> Solution::wave(vector<int> &A) 
{
    sort(A.begin(),A.end());
    int i;
    for(i=1;i<A.size();i+=2)
    {
        swap(A[i],A[i-1]);
    }
    return A;
}
