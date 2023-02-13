//methods of decalring an array
//int A[5];           int A[5]={1,2,3,4,5};     int A[5]={2,4};       int A[5]={0};         int A[]={1,2,3,4,5,6,7,8,9};
//methods of accessing the elements of an array
//cout<<A[2];          It gives the result 1 because at counter i=2 the element is 2
//cout<<2[A];          It gives the same result we can acccess element by this method also
//cout<<*(A+2);        It is used in pointer

//Program given below are on the basis of above methods.

#include<iostream>
using namespace std;
int main()
{
    int A[8]={2,4,6,8,10,12,23,67};
    for(int i=0;i<8;i++)
    cout<<i[A]<<endl;
    return 0;
}