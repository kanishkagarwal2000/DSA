
#include <bits/stdc++.h>
using namespace std;
static bool compare(pair<int,int> &p1,pair<int,int> &p2)
{
	return p1.second>p2.second;
}
int main()
{
	int i,n,k,t;
	vector<int> a;
	unordered_map<int,int> um;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>t;
		a.push_back(t);
	}
    cout<<"enter k";
	cin>>k;
        vector<int> ans;
        for(i=0;i<n;i++)
        {
            um[a[i]]++;
        }
        vector<pair<int,int>> v(um.begin(),um.end());
        sort(v.begin(),v.end(),compare);
        for(i=0;i<k;i++)
        {

            cout<<v[i].first;
        }
}