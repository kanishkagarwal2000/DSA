//Its circular queue
#include<bits/stdc++.h>
using namespace std;
#define max 5

void enqueue(int [],int *,int *);
int dequeue(int [],int *,int *);
void display(int [],int,int);

int main()
{
    int q[max],f=-1,r=-1,o;
    do
    {
        int ch;
        cout<<"*****enter choice*****\n\n1-enqueue\n2-dequeue\n3-display\n\nchoice:";
        cin>>ch;
        switch(ch)
        {
            case 1:if((f==-0&&r==max-1)||f==r+1)
                   printf("queue is full");
                   else
                   {
                        enqueue(q,&f,&r);
                   }
                   break;
            case 2:if(f==-1&&r==-1)
                        printf("\nqueue is empty");
                   else
                   {
                        int pop;
                        pop=dequeue(q,&f,&r);
                        cout<<"\nValue Popped:"<<pop;
                   }
                   break;
            case 3:if(f==-1&&r==-1)
                        printf("queue is empty");
                   else
                        display(q,f,r);
                   break;
            default:cout<<"\nenter valid choice";
        }
        cout<<"\nif you want to continue press 1:";
        cin>>o;
    } while (o==1);
    

    return 0;
}


void enqueue(int a[],int *f,int *r)//circular queue
{
    int v;
    cout<<"Enter value:";
    cin>>v;
    if(*f==-1)
        *f=0;
    if(*r==max-1)
        *r=-1;
    (*r)++;
    a[*r]=v;
}

int dequeue(int a[],int *f,int *r)
{
    int p=a[*f];
    if(*f==*r)
        *f=*r=-1;
    if(*f==max-1)
        *f=0;
    else
        (*f)++;
    return p;
}

void display(int a[],int f,int r)
{
    int i;
    if(r<f)
    {
        for(i=f;i<max;i++)
        {
            cout<<a[i]<<" ";
        }
        for(i=0;i<r;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else
    {
        for (i=f; i <= r; i++)
        {
            cout<<a[i]<<" ";
        }
        
    }
}