#include <iostream>
using namespace std;
#define size 5
int A[size];
int head=0;
int tail=0;

bool emptyornot()
{
    if(head==tail)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool fullornot()
{
    if(tail>=size-1)
        {
            return true;
        }
        else
        {
            return false;
        }
}
void enqueue(int value)
{
    if(fullornot())
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
            tail++;
            A[tail]=value;
    }
}
void dequeue()
{
    if(emptyornot())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        A[head];
        head++;
    }
}
/*void show_head()
{
    if(emptyornot())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<A[head]<<endl;
    }
}*/
void display()
{
    if(emptyornot())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
        {
            for(int i=head+1; i<=tail;i++)
            cout<<A[i]<<" ";
        }
        cout<<endl;
}

int main()
{
    int Tr=1,value;

    while(Tr!=0)
    {
        cout<<"1.Queue 2.Dequeue 3.EmptyOrnot 4.FullOrnot 5.Disply"<<endl;cin>>Tr;
        if(Tr==1)
        {
            cout<<"Enter the value: ";cin>>value;
            enqueue(value);
        }
        else if(Tr==2)
        {
           dequeue();
        }
//        else if(Tr==3)
//        {
//            show_head();
//        }
        if(Tr==3)
        {
            cout<<emptyornot()<<endl;
        }
        if(Tr==4)
        {
            cout<<fullornot()<<endl;
        }
        if(Tr==5)
        {
            display();
        }
    }
    return 0;
}
