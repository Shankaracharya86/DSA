#include<iostream>
using namespace std;
int main()
{    
    int *p;
    p=new int[5];
    p[0]=1; p[1]=3;p[2]=5;p[3]=7;p[4]=9;
    
    int *q=new int[10];
    q[5]=11;q[6]=13;q[7]=15;q[8]=17;q[9]=19;
    for(int i=0;i<5;i++)
    { 
        q[i]=p[i];
    }
    delete []p;
    p=q;
    q=nullptr;
    for(int i=0;i<10;i++)
    { 
        cout<<p[i]<<" ";
    }
return 0;
}