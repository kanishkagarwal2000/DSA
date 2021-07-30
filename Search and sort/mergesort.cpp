#include<bits/stdc++.h>
using namespace std;

void msort(int [],int,int);
void merge(int [],int,int,int);

int main()
{
    int a[]={-1011,8,100,98,4,6,21,-4,5,6};
    
    msort(a,0,9);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    return 0;
}

void msort(int a[],int sta,int end)
{
    if(sta<end)
    {
        int mid=sta+((end-sta)/2);
        msort(a,sta,mid);
        msort(a,mid+1,end);
        merge(a,sta,mid,end);
    }
}
void merge(int a[],int st,int mid,int en)
{
    int i=st,j=mid+1,t=0;
    int temp[en-st+1];
    while(i<=mid && j<=en)
    {
        if(a[i]<=a[j])
            temp[t++]=a[i++];
        else
            temp[t++]=a[j++];
    }
    while(i<=mid)
        temp[t++]=a[i++];
    while(j<=en)
        temp[t++]=a[j++];

    for(i=st;i<=en;i++)
    {
        a[i]=temp[i-st];
    }
}