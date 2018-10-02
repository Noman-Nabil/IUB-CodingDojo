#include<iostream>
using namespace std;
#define size 5

int A[size];
int st=0;
int end=0;

bool emptyornot()
{
    if(st==end)
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
    if(end>=size-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void queue(int val)
{
    if(fullornot())
    {
        cout<<"Sorry..FULL..."<<endl;
    }
    else
    {
        end++;
        A[end]=val;
    }
}
void dequeue()
{
    if(emptyornot())
    {
        cout<<"Sorry..EMPTY..."<<endl;
    }
    else
    {
        st++;
        A[st];
    }
}
int display()
{
    if(emptyornot())
    {
        cout<<"Sorry..EMPTY..."<<endl;
    }
    else
    {
        for(int i=st+1;i<=end;i++)
            cout<<A[i]<<" ";
    }
}
int reverse()
{
    if(emptyornot())
    {
        cout<<"Sorry..EMPTY..."<<endl;
    }
    else
    {
        for(int i=end;i>=st+1;i--)
            cout<<A[i]<<" ";
    }
}
int sum()
{
    if(emptyornot())
    {
        cout<<"Sorry..EMPTY..."<<endl;
    }
    else
    {
        int sum=0;
        for(int i=st+1;i<=end;i++)
        sum=sum+A[i];
        cout<<sum;
    }
}
int main()
{
    int Trig=1,val;
    while(Trig!=0)
    {
        cout<<"1.Queue 2.Dequeue 3.EmptyOrnot 4.FullOrnot 5.Disply 6.Reverse 7.Sum"<<endl;cin>>Trig;
        if(Trig==1)
        {
            cout<<"Enter Value: ";cin>>val;
            queue(val);
        }
        else if(Trig==2)
        {
            dequeue();
        }
        else if(Trig==3)
        {
            emptyornot();
        }
        else if(Trig==4)
        {
            fullornot();
        }
        else if(Trig==5)
        {
            cout<<"Display: ";
            display();
            cout<<endl;
        }
        else if(Trig==6)
        {
            reverse();
            cout<<endl;
        }
        else if(Trig==7)
        {
            cout<<"Sum: ";
            sum();
            cout<<endl;
        }
    }
    return 0;
}
