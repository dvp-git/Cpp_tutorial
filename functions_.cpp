/*
FUNCTIONS

Syntax: return-type function-name(parameter list);


Library  : Collection of functions */
#include<iostream>
using namespace std;


// void display();
// void display()
// {
//     cout <<"Hello"<<endl;
// }

// int add(int,int);   // Declaration 
// int add(int x,int y)  // Definition 
// {
//     return x + y;
// }

// int main()
// {
//     display();
//     int L = add(4,5);
//     cout << L << endl;
//     return 0;
// }

/*OVERLOADING */
// //1 write a Min() function here to Min of 2 integers
// int Min(int a,int b)
// {
//     if (a < b)
//         return a;
//     else
//         return b;
// }

// //2 write a Min() function here to Min of 3 integers
// int Min(int a,int b,int c)
// {
//     if (a < b)
//         if (a  < c)
//             return a;
//         else
//             return c;
//     else
//         if (b < c)
//             return b;
//         else 
//             return c;
// }

// //3 write a Min() function here to Min of 2 floats
// float Min(float a, float b)
// {
//     if (a < b)
//             return a;
//         else
//             return b;
// }
// int Main()
// {
//     cout<<Min(10,5);
//     cout<<Min(12,7,9);
//     cout<<Min(18.0f,9.0f);
//     return 0;
// }

/*TEMPLATES : Used when you have functions with same logic but different datatypes*/
// template<class T>
// T Max(T x, T y)
// {
//     if (x > y)
//         return x;
//     else 
//         return y;
// }   
// int main()
// {
//     cout<<Max(10,5)<<endl;
//     cout<<Max(12.5f,17.3f);
//     return 0;
// } 

/*
Methods of parameter passing :
1. Pass by Value
2. Pass by Reference
3. Pass by Address
*/

/* PASS BY VALUE */
// void swap(int a , int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = a;
// }
// int main()
// {
//     int x = 20, y = 10;
//     swap(x,y);
//     cout << "X: " << x <<" " << "Y: " << y << endl;  // No swapping occurs;
//     return 0;
// }

/* PASS BY ADDRESS */
// void swap(int *a , int *b)  // // Changing values at the addresses of x and y
// {
//     int temp;
//     temp = *a;      
//     *a = *b;       
//     *b = temp;
// }
// int main()
// {
//     int x = 20, y = 10;
//     swap(&x,&y);
//     cout << "X: " << x <<" " << "Y: " << y << endl;  // Swapping occurs;
//     return 0;
// }

/* PASS BY REFERENCE */
// void swap(int &a , int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = a;
// }
// int main()
// {
//     int x = 20, y = 10;
//     swap(x,y);
//     cout << "X: " << x <<" " << "Y: " << y << endl;  ;
//     return 0;
// }

// Return by address
// int * func()
// {
//     // int x = 10;
//     // return &x; // Cannot return local address 

//     int *p = new int[6];   // Heap memory
//     for(int i=0;i < 6; i++)
//     {
//         p[i] = 6 *i;     
//     }
//     cout <<"Address of p: "<<p<< endl;
//     return p;  // return the pointer
// }
// int main()
// {
//     int *ptr = func();   
//     for(int i=0;i<6;i++)
//     {
//         cout<<ptr[i]<<endl;
//     }
//     cout <<"Address of ptr: "<<ptr<< endl;  // Same address
//     return 0;
// }



// Return by Reference -  functions as lvalue
// int & func(int &x)
// {
//     return x; 
// }
// int main()
// {
//     int a = 10;
//     func(a)=25;    // functions as lvalue

//     cout <<"Value of a: "<<a<< endl;  // Same address
//     return 0;
// }

// STATIC VARIABLES - accessible only by the function, but they do not die once the function ends.
// void func()
// {
//     static int s = 10; // initialized only once
//     s++;
//     cout << s << endl;
// }
// int main()
// {
//     func();
//     func();
// }

// Pointer to functions : Same name , different methods called.
int Max(int x, int y)
{
    return (x>y?x:y);
}
int Min(int x, int y)
{
    return (x<y?x:y);
}
int main()
{
    int (*fp)(int , int);  // Declaration
    fp = Max;
    cout << (*fp)(32,41) << endl; // Returns Max
    fp = Min; 
    cout << (*fp)(32,41) << endl; // Returns Min
    return 0;
}
