/*Constants ,Preprocessor & Directives Namespaces*/
#include<iostream>
using namespace std;

/*const keyword usage*/
// int main()
// {
//     const int x=10; // or int const x=10;  // READ-ONLY
//     const int z=11;
//     // x++;   // expression must be a modifiable lvalue
//     const int *ptr = &x;
    
//     // ++*ptr;  // Cannot modify
//     cout << *ptr << endl;

//     int y=20;

//     int * const ptr2=&y;
//     ptr2 = &x;  // expression must be a modifiable lvalue
//     ++*ptr2; // 
    
//     const int * const ptr3=&z;   // data is locked, and pointer is also locked ( read only)
//     return 0;
// }


/*Constant functions*/
// class Demo
// {
//     public:
//         int x=10;
//         int y=30;

//     void Display() const  
//     {
//        // x++;  // increment of member 'Demo::x' in read-only object
//         cout<< x<< " " << y << endl;
//     }
// };

// int main ()
// {
//     Demo d;
//     d.Display();
//     return 0;
// }

/*Pass by reference without changing value. Inline functions, i.e. executed as part of  main()*/
// void func(const int &a, int &b)
// {
//     cout << a << "  " << b << endl;
//     a++ ;
//     return ;

// }
// int main()
// {
//     int x = 12, y =23;
//     func(x, y);
//     cout << "Modified x=" << x << endl;
//     return 0;
// }

/*PREPROCESSORS or MACROS*/
// #define PI 3.1425

// #ifndef PI     // if not defined, then define it
//     #define PI 3.1
// #endif


    
// int main()
// {
//     cout<< PI;
//     return 0;
// }


/*NAMESPACES*/
namespace first
{
void fun()
{
    cout << "Fucntion 1" << endl;
}}

namespace second
{
    void fun()
{
    cout << "Fucntion 2" << endl;
}}

int main()
{
    first::fun();
    return 0;
}