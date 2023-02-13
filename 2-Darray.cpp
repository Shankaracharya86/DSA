#include<iostream>
using namespace std;
int main()
{   cout<<"****************************************First type of 2-D array..how to access from the stack"<<endl;  
    int A[3][4]={{1,2,3,5},{2,4,6,8},{11,13,15,17}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j]<<" ";
        }cout<<endl;
    }
     
    cout<<"****************************************second type of 2-D array..how to access from stack and heap both"<<endl;  

    int *B[3];
    B[0]=new int[4];
    
    B[1]=new int[4];

    B[2]=new int[4];
  

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<B[i][j]<<" ";
        }cout<<endl;
    }

    cout<<"****************************************third type of 2-D array..how to access from the heap only...i.e.double pointer"<<endl;  
    int **C;
    C=new int*[3];
    C[0]=new int[4];
    
    C[1]=new int[4];

    C[2]=new int[4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<C[i][j]<<" ";
        }cout<<endl;
    }
return 0;

}