#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
        int data;
        Node* next;
        Node()
        {
            next=NULL;
        }
};

void insert_at_end(Node**,Node**,int);
void insert_at_front(Node**,Node**,int);
void insert_at_pos(Node**,Node**,int,int);
void reverse_i(Node**,Node**);              //iterative
Node* reverse_r(Node* lt);        //recursive
int maxL(Node*);
int minL(Node*);
void improvedLinearSearch(Node**,int);
void insertInSorted(Node**,Node**,int);
void delete_from_front(Node**,Node**);
void delete_from_end(Node**,Node **);
void delete_at_pos(Node**,Node**,int);
void create(Node**,Node**,int*,int);
void remove_duplicates(Node**,Node**);

void display(Node *lt);

int main()
{
    Node *left=NULL,*right=0;
    int o;
    int A[]={11,22,22,33,44,55,66,77};;
    do
    {
        cout<<"Enter choice:\n1.Insert at end\n2.insert at front\n3.insert at given position \n4.reverse iterative\n5.reverse recursive\n6.Max\n7.Min\n8.Improved Linear Search\n9.Insert in sorted list\n10.Delete from front\n11.Delete from end\n12.Delete at pos\n13.Create Lili with array\n14.Remove duplicates\n15.Display\nChoice:";
        int choice,num;
        cin>>choice;
        switch (choice)
        {
        case 1:
            
            cout<<"enter number:";
            cin>>num;
            insert_at_end(&left,&right,num);
            break;

        case 2:
            
            cout<<"enter number:";
            cin>>num;
            insert_at_front(&left,&right,num);
            break;

        case 3:
            int pos;
            cout<<"enter number:";
            cin>>num;
            cout<<"enter position:";
            cin>>pos;
            insert_at_pos(&left,&right,pos,num);
            break;

        case 4:
            if(left==NULL && right==NULL)
                cout<<"Linklist empty";
            else
                reverse_i(&left,&right);
            break;    
        case 5:
            if(left==NULL && right==NULL)
                cout<<"Linklist empty";
            else
            {

                right=left;
                left=reverse_r(left);
            }
            break;  
        
        case 6:
            if(left==NULL && right==NULL)
                cout<<"Linklist empty";
            else
            {

                int max;
                max=maxL(left);
                cout<<"Max="<<max;
            }
            break;
        case 7:
            if(left==NULL && right==NULL)
                cout<<"Linklist empty";
            else
            {

                int min;
                min=minL(left);
                cout<<"Min="<<min;
            }
            break;
        case 8:
            if(left==NULL && right==NULL)
                cout<<"Linklist empty";
            else
            {
                int val;
                cout<<"Value to be searched:";
                cin>>val;
                improvedLinearSearch(&left,val);
            }
            break;
        
        case 9:
            int val;
            cout<<"Value to be entered:";
            cin>>val;
            insertInSorted(&left,&right,val);
            break;
        
        case 10:
            if(left==NULL && right==NULL)
                cout<<"Linklist empty";
            else
            {
                delete_from_front(&left,&right);
            }
            break;
        case 11:
            if(left==NULL && right==NULL)
                cout<<"Linklist empty";
            else
            {
                delete_from_end(&left,&right);
            }
            break;
        case 12:
            if(left==NULL && right==NULL)
                cout<<"Linklist empty";
            else
            {
                int pos;
                cin>>pos;
                delete_at_pos(&left,&right,pos);
            }
            break;
        
        case 13:
            
            create(&left,&right,A,8);
            break;
        case 14:
            if(left==NULL && right==NULL)
                cout<<"Linklist empty";
            else
            {
                remove_duplicates(&left,&right);
            }
            break;
        case 15:
            if(left==NULL && right==NULL)
            {
                cout<<"Linklist empty";
            }
            else
            {
                display(left);
            }
            break;
        default:
            cout<<"Invalid Choice.";
            break;
        }
    cout<<"\nenter 1 to continue:";
     cin>>o;
    }while(o==1);
   
}
void insert_at_end(Node** lt,Node** rt,int val)
{
    Node *p=new Node();
    p->data=val;
    if(*lt==0)  //Zero(0) and NULL are same in pointers
    {
        *lt=p;
    }
    else
    {
        (*rt)->next=p;
    }
    *rt=p;
}
void insert_at_front(Node** lt,Node** rt,int val)
{
    Node *p=new Node();
    p->data=val;
    if(*rt==NULL)
    {
        *rt=p;
    }
    else
    {
        p->next=*lt;
    }
    *lt=p;
}

void insert_at_pos(Node** lt,Node** rt,int pos,int val)
{
    Node *temp,*p=new Node();
    p->data=val;
    p->next=NULL;
    if(*lt==NULL)
    {
        *lt=*rt=p;
    }
    else
    {
        if(pos==1)
        {
            insert_at_front(lt,rt,val);
        }
        else
        {

            temp=*lt;
            int i=1;
            while(i<pos-1 && temp!=NULL)
            {
                temp=temp->next;            
            }
            p->next=temp->next;
            temp->next=p;
            if(p->next==NULL)
            {
                *rt=p;
            }
        }
    }
}

void reverse_i(Node**lt ,Node** rt)
{
    Node *prev=NULL,*current=*lt,*next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *rt=*lt;
    *lt=prev;
}


Node* reverse_r(Node* lt)
{
    if(lt==NULL || lt->next==NULL)
        return lt;
    Node* temp=reverse_r(lt->next);

    lt->next->next=lt;
    lt->next=NULL;

    return temp;
}

int maxL(Node* p)
{
    int max=INT32_MIN;
    while(p)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}


int minL(Node* p)
{
    int min=INT32_MAX;
    while (p)
    {
        if(p->data<min)
        {
            min=p->data;
        }
        p=p->next;
    }
    return min;
}

void improvedLinearSearch(Node** lt,int val)
{
    Node* temp=*lt,*q=NULL;
    while (temp)
    {
        if(temp->data==val)
        {
            cout<<val<<" Found";
            q->next=temp->next;
            temp->next=*lt;
            *lt=temp;
        }
        q=temp;
        temp=temp->next;
    }
}

void insertInSorted(Node** lt,Node** rt,int val)
{
    Node* p=new Node(),*temp,*q;
    p->data=val;
    temp=*lt;
    q=NULL;
    if(val<temp->data || temp==NULL)
    {
        p->next=temp;
        *lt=p;
    }
    else if(val>(*rt)->data)
    {
        (*rt)->next=p;
        p->next=NULL;
        *rt=p;
    }
    else
    {
        while(val>temp->data && temp)
        {
            q=temp;
            temp=temp->next;
        }
        p->next=q->next;
        q->next=p;
    }

}

void delete_from_front(Node** lt,Node** rt)
{
    Node* t=*lt;
    *lt=(*lt)->next;
    if(*lt==NULL)
        *rt=NULL;
    free(t);
}
void delete_from_end(Node** lt,Node** rt)
{
    Node* q=(*lt);
    if(q->next==NULL)
    {
        *lt=*rt=NULL;
    }
    else{
        while((q->next)->next!=NULL)
        {
            q=q->next;
        }
        *rt=q;
        (*rt)->next=NULL;
        q=q->next;
    }
    free(q);
    
}
void delete_at_pos(Node** lt,Node** rt,int pos)
{
    Node* temp=*lt;
    if(pos==1)
    {
        delete_from_front(lt,rt);
    }
    else
    {
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;

        }
        Node* n=temp->next;
        temp->next=n->next;
        free(n);
    }
}


void remove_duplicates(Node** lt,Node** rt)
{
    Node *q,*t;
    q=*lt;
    t=(*lt)->next;
    while (t!=NULL)
    {
        if(q->data!=t->data)
        {
            q=t;
            t=t->next;
            cout<<"0";
        }

        else
        {
            cout<<"1";
            q->next=t->next;
            free(q);
            t=q->next;
        }
    }
    cout<<"100";
}

void create(Node** lt,Node** rt,int *A,int n)
{
    int i;
    Node *t;
    t=(Node *)malloc(sizeof(Node));
    t->data=A[0];
    t->next=NULL;
    *lt=t;
    *rt=t;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(Node));
        t->data=A[i];
        t->next=NULL;
        (*rt)->next=t;
        *rt=t;
    }
}
void display(Node *lt)
{
    while(lt!=NULL)
    {
        cout<<lt->data<<" ";
        lt=lt->next;
    }
}