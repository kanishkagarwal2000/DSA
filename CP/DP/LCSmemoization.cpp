#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp(1001,vector<int>(1001,-1));
int lcsMemoize(string x, string y, int xl,int yl)
{
    if(xl==0 || yl==0)
    {
        return dp[xl][yl]=0;
    }
    else if(dp[xl][yl]!=-1)
    {
        return dp[xl][yl];
    }
    else if(x[xl-1]==y[yl-1])
    {
        return dp[xl][yl]=1+lcsMemoize(x,y,xl-1,yl-1);
    }
    else
    {
        return dp[xl][yl]=max(lcsMemoize(x,y,xl-1,yl),lcsMemoize(x,y,xl,yl-1));
    }
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
    cout<<lcsMemoize(x,y,xlen,ylen);
    return 0;
}