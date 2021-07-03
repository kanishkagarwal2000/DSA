#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    int info;
    struct node *next;
}nodetype;

void enqueue(nodetype**,nodetype**);
int dequeue(nodetype**,nodetype**);
void display(nodetype*,nodetype*);

int main()
{
    nodetype *front=NULL,*rear=NULL;
    int o;
    do
    {
        int ch;
        cout<<"enter choice\n1.enqueue\n2.dequeue\n3.display\n\nchoice:";
        cin>>ch;
        switch(ch)
        {
            case 1:enqueue(&front,&rear);
                   break;
            case 2:if(front==NULL&&rear==NULL)
                   {
                        cout<<"\nqueue empty";
                   }
                   else
                   {
                        int c=dequeue(&front,&rear);
                        cout<<"\nPopped Item:"<<c;
                   }
                   break;
            case 3:if(front==NULL&&rear==NULL)
                   {
                        cout<<"\nqueue empty";
                   }
                   else
                   {
                        display(front,rear);
                   }
                   break;
            default:cout<<"\nwrong choice";
        }
        cout<<"\nif you want to continue press 1:";
        cin>>o;
    }while(o==1);
}

void enqueue(nodetype** f,nodetype** r)
{
    nodetype* p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL)
    {
        int v;
        cout<<"Enter value:";
        cin>>v;
        if(*f==NULL)
        {
            *f=p;
        }
        if(*r!=NULL)
        {
            (*r)->next=p;
        }
        p->info=v;
        p->next=0;//null and 0 are same
        *r=p;

    }
    else
        cout<<"\nNot enough memory";
}

int dequeue(nodetype** f,nodetype** r)
{
    int p=(*f)->info;
    nodetype* temp=*f;
    if(*f==*r)
    {
        *f=*r=NULL;
    }
    else
        *f=(*f)->next;
    free(temp);
    return p;
}
void display(nodetype* f,nodetype* r)
{
    while(f!=NULL)
    {
        cout<<f->info<<" ";
        f=f->next;
    }

}
