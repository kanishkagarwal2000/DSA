#include<bits/stdc++.h>

using namespace std;

class stackll
{
    public:
        int data;
        stackll *next;
        stackll()
        {
            next=NULL;
        }
};

stackll* push(stackll*);
stackll* pop(stackll*);
void display(stackll*);

int main()
{
    stackll *top=NULL;
    int o;
    do
    {
        int ch;
        cout<<"enter choice\n1.push\n2.pop\n3.display\nChoice:";
        cin>>ch;
        switch(ch)
        {
            case 1:top=push(top);
                   break;
            case 2:if(top==NULL)
                   {
                        cout<<"\nstack empty";
                   }
                   else
                   {
                        top=pop(top);
                   }
                   break;
            case 3:if(top==NULL)
                   {
                        cout<<"\nstack empty";
                   }
                   else
                   {
                        display(top);
                   }
                   break;
            default:cout<<"\nwrong choice";
        }
        cout<<"\nif you want to continue press 1:";
        cin>>o;
    }while(o==1);
}

stackll* push(stackll* top)
{
    stackll *p;

    p=new stackll();
    if(p==NULL)
    {
        cout<<"not enough memory";
    }
    else
    {
        int v;
        cout<<"\nenter value to be pushed:";
        cin>>v;
        p->data=v;
        p->next=top;
        top=p;
        return top;
    }
}

stackll* pop(stackll *top)
{
    cout<<"\nvalue popped:"<<top->data;
    top=top->next;
    return top;
}

void display(stackll *top)
{
    while(top!=NULL)
    {
        cout<<top->data;
        top=top->next;
    }
}
