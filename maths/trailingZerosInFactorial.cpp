https://www.interviewbit.com/problems/trailing-zeros-in-factorial/

int trailingZeroes(int n)
{
    int i , sum = 0;
    for(i=5;n/i>=1;i*=5)
    {
        sum += n/i;
    }
    return sum;
}
