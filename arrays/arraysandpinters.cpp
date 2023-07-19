#include<iostream>
using namespace std;
int main ()
{
    int arr[]={ 4,3,4,4,3};
    int* ptr = arr;// giving address // ptr is pinting to 1st element 
    //cout << ptr <<endl 
    for (int i=0;i<=4;i++)
    {
        cout << ptr[i]<<" ";
    }
    cout << endl;
    *ptr = 8;//ptr[0]=8 
    ptr++;// ptr is ppinting to 2nd element 
    *ptr = 9;
    ptr--;// ptr is pointing to 1st element
    for( int i=0; i<=4;i++){
        cout <<ptr[i]<<" ";
    }
}
//

   