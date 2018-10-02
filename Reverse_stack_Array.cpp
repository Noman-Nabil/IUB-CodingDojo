#include<iostream>
using namespace std;
#define size 5

int N[size];
int top=0;

bool emptyornot()
{
    if(top==0)
        return true;
    else
        return false;
}
bool fullornot()
{
    if(top>=size-1)
        return true;
    else
        return false;
}
void push(int n)
{
    if(fullornot())
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {
            top++;
            N[top]=n;
    }
}
void pop()
{
    if(emptyornot())
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        top--;
    }
}
int topvalue()
{
    if(emptyornot())
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<N[top]<<endl;
        //return N[top];
    }
}
int display()
{
    for(int i=top;i>0;i--)
    {
        cout<<N[i]<<" ";
    }
}
int reverse()
{
    if(emptyornot())
    {
        cout<<"Sorry the stack is Empty"<<endl;
    }
    else
    {
        for(int i=1;i<=top;i++)
        {
            cout<<N[i]<<" ";
        }
    }
}
int main()
{
    int Tr=1,n;
    while(Tr!=0)
    {
        cout<<"1.Push 2.Pop 3.Top 4.EmptyOrnot 5.FullOrnot 6.Disply 7.Reverse"<<endl;cin>>Tr;
        if(Tr==1)
        {
                cout<<"Enter value: ";cin>>n;
                push(n);
        }
        else if(Tr==2)
        {
                pop();
        }
        else if(Tr==3)
        {
                topvalue();
        }
        else if(Tr==4)
        {
                cout<<emptyornot()<<endl;
        }
        else if(Tr==5)
        {
                cout<<fullornot()<<endl;
        }
        else if(Tr==6)
        {
                cout<<"Display: "<<" ";
                display();
                cout<<endl;
        }
        else if(Tr==7)
        {
            cout<<"display: "<<" ";
           reverse();
            cout<<endl;
        }
    }

    return 0;
}
