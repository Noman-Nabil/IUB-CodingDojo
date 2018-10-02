#include<iostream>
using namespace std;

#define size 5
int A[size];
int top=0;
//int top=-1;

bool emptyornot()
{
    if(top==0)return true;
    //if(top==-1)return true;
        else return false;

}
bool fullornot()
     {
         if(top>=size-1)return true;
         //if(top==size-1)return true;
            else return false;

     }
void push(int value)
{
    if(fullornot())
    {
        cout<<"Sorry the stack is Full"<<endl;
    }
    else
    {
       ++top;
        A[top]=value;
    }
}
void pop()
{
    if(emptyornot())
    {
        cout<<"Sorry the stack is Empty"<<endl;
    }
    else
    {

        top--;
    }
}
int show_top()
{
    if(emptyornot())
    {
        cout<<"Sorry the stack is Empty"<<endl;
        //return -1;
    }
    else
        {
            cout<<A[top]<<endl;
            //return A[top];
        }
}
int display()
{
    if(emptyornot())
    {
        cout<<"Sorry the stack is Empty"<<endl;
    }
    else
    {
        for(int i=top;i>0;--i)
        {
            cout<<A[i]<<" ";
        }
    }
}

int main()
{
    int Trig=1,value;
    while(Trig!=0)
    {
        cout<<"1.Push 2.Pop 3.Top 4.EmptyOrnot 5.FullOrnot 6.Disply"<<endl;cin>>Trig;

        if(Trig==1)
        {
            cout<<"Enter value: ";cin>>value;
            push(value);
        }
        else if(Trig==2)
        {
            pop();
        }
        else if(Trig==3)
        {
            //cout<<show_top()<<endl;
            show_top();
        }
        else if(Trig==4)
        {
            cout<<emptyornot()<<endl;
        }
        else if(Trig==5)
        {
            cout<<fullornot()<<endl;
        }
        else if(Trig==6)
        {
            cout<<"display: "<<" ";
            display();
            cout<<endl;
        }
    }

    return 0;

}
