#include<iostream>
using namespace std;
// int main()
// {
//     int x = 11;
//     int *p; // DECLARATION
//     p = &x; // INITIALIZATION
//     cout<< "Value x" << x << endl;  // x 
//     cout<< "&x" << &x << endl;     // &x 
//     cout << "p" << p <<endl;      // &x
//     cout << "*p" << *p <<endl;   // DEREFERENCING value of x
//     return 0;
// }

/* Heap: Size decided at runtime
- Heap memory needs to be allocated with help of pointers only. Cannot be accessed directly from code.
- Must be de-allocated manually , or it will run as long as the program is running. Causes MEMORY LEAK if *p = NULL; is used before program is exited.
- Dynamic allocation. RE-sizable.

Initialization : 
int *p = new int [5];

Deletion:
delete []p;
p = nullptr


Access:
p[1] = 2;
*/

// int main ()
// {
//     int *p = new int[5];
//     p[0] = 12;
//     p[1] = 13;
//     cout << p[1];
//     delete []p;
//     p = nullptr;
//     return 0;
// }

// int main ()
// {
//     int size;
//     cout<<"Enter the size of elements";
//     cin>> size;
//     int *p = new int[size];  // Declate and initialize pointer
//     p[0] = 100;
//     p[1] = -992;

//     // New code requires another bigger sized memory
//     cout<<"Enter the new size of elements";
//     cin>> size;

//     // Delete old memory in heap
//     delete []p;

//     // Create new one of required size, Use same pointer
//     p = new int[size];
//     cin>> p[30];
//     p[3] = 90;
//     cout << p[3]<<endl;

//     // Delete the memory in heap
//     delete []p;

//     // Delee the pointer
//     p = nullptr;    
//     return 0;
// }

/*Pointer arithmetic*/ 
// int main()
// {
//     int A[] = {2,3,4,5,21};
//     int *p = A, *q = &A[3];

//     // Moving pointer to next location
//     cout << *p << " at" << p << endl;

//     // Difference between 2 pointers: gives distance between them ( address q - address p / datatype-size)
//     cout<< "q - p "<< q - p <<endl;
//      // move to location (5) to right . if - move left.
//      p=p+5;  
//     cout << *p << " at" << p <<endl;

//     cout<<"Accessing elements using various methods"<<endl;

//     // cout<<"Using i[A]"<<endl;
//     // for(int i=0;i<5;i++)
//     //     cout<<i[A]<<endl;

//     // cout<<"Using *(A+i)"<<endl; 
//     // for(int i=0;i<5;i++)
//     //     cout<<*(A+i)<<endl;

//     // Accessing adddress:
//     cout<<"Using *(A+i)"<<endl; 
//     for(int i=0;i<5;i++)
//         cout<<(A+i)<<endl;   
//     return 0;
// }

// REFERANCES
int main()
{
    int A[] = {1,6}, l=23;
    // Reference
    int &y = A[0];
    // int &y = l;   // ERROR : redeclaration of 'int& y' NOT ALLOWED.
    cout << A[0]<<endl;  // 1
    cout << ++y<<endl;  // y = A[0] = 1+1 = 2 
    cout<< A[0]<<endl;  // 2 since ++y changed the value.
    return 0;
}