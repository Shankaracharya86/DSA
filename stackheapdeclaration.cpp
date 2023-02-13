#include<iostream>
#include<string>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int* p;
    int i;

    p=new int[5];
    p[0]=5;
    p[1]=7;
    p[2]=9;
    p[3]=11;
    p[4]=13;
               for(i=0;i<5;i++)
                {
                    cout<<A[i]<<" ";
                
                }cout<<endl;
                for(i=0;i<5;i++)
                {
                    cout<<p[i]<<" ";
                
                }
return 0;
}