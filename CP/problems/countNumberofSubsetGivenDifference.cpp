//Count the number of subset with given subset

#include<bits/stdc++.h>
using namespace std;
int countSubset(int [],int);
int main()
{
    int a[]={1,1,2,3};
    int diff=1;
    int i,j,sum=0,n=sizeof(a)/sizeof(a[0]);
    for ( i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    cout<<"sum="<<sum;
    int subsetsum=(sum+diff)/2;
    int dp[n+1][subsetsum+1];
    for(i=0;i<n+1;i++)
        dp[i][0]=1;
    for(j=1;j<subsetsum+1;j++)
        dp[0][j]=0;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<subsetsum+1;j++)
        {
            if(a[i-1]<=j)
                dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i-1]];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<"\ndp matrix:\n";
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<subsetsum+1;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    //return ;
    cout<<"COUNT="<<dp[n][subsetsum];
    return 0;
}
int countSubset(int a[],int diff)
{
   
}