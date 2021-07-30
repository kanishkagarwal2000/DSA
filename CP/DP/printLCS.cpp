#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp(1001,vector<int>(1001,-1));
int lcsBest(string x, string y, int xl,int yl)
{
    int i,j,dp[xl+1][yl+1];
    string ans="";
    for(i=0;i<xl+1;i++)
    {
        for(j=0;j<yl+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(x[i-1]==y[j-1]){
                dp[i][j]=1+dp[i-1][j-1];c
            }
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    
    return dp[xl][yl];
}
int main()
{
    string x,y;
    int xlen,ylen;
    cout<<"enter 1st String:";
    cin>>x;
    cout<<"enter 2nd String:";
    cin>>y;
    xlen=x.length();
    ylen=y.length();
    
    return 0;
}