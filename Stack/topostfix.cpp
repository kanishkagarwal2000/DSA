#include<bits/stdc++.h>

using namespace std;

class stackll
{
    public:
        char data;
        stackll *next;
        stackll()
        {
            next=NULL;
        }
};
stackll *top=NULL;
int pre(char x)
{
    //cout<<" reached pre ";
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    return 0;
}

int isOperand(char x)
{
   //cout<<x<<"  $operanzd ";
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;//cout<<x<<"  $operanzd ";
    else
        return 1;
}

void push(char);
char pop();
void display();
string inToPost(string);

int main()
{
    string infixx="a+b*c-d/e";
    push('#');//if stack will be empty there will be an issue while comparing for first time;
    string postfix=inToPost(infixx);
    cout<<"Postfix Expression: "<<postfix;
    
}

void push(char v)
{
    stackll *p;
    //cout<<" reached push ";
    p=new stackll();
    
    p->data=v;
    p->next=top;
    top=p;
    
}

char pop()
{
    char c=top->data;
    top=top->next;
    return c;
}

void display()
{
    while(top!=NULL)
    {
        cout<<top->data;
        top=top->next;
    }
}

string inToPost(string infixx)
{
    //cout<<" reached itp ";
    int i=0;
    string post="";
    int len=infixx.length();
    while(i<len)
    {
        if(isOperand(infixx[i]))
            post+=infixx[i++];
        else
        {
            if(pre(infixx[i])>pre(top->data))
                push(infixx[i++]);
            else
            {
                post+=pop();
            }
        }   
        //debugging cout<<i<<"."<<post;
    }
    while(top)
    {
        post+=pop();
    }
    return post;
}