/* C++ fundamentals*/

#include<iostream>

using namespace std;
// int main()
// {
//     cout<< "Hello"<<endl;
//     return 0;
// }



//Quotient of 2 numbers

// int main()
// {
//     int a, b,c; 
//     cout<< "ENter the 2 numbers "<< endl;
//     cin>> a >> b;
//     c = a / b;
//     cout<< "Quotient of the 2 numbers is :"<< c ;
//     return 0;
// }


// getline - Take inupts string including space on single line
// int main()
// {
//     string name;
//     cout<<"Enter name"<<endl;
//     cin >> name;
//     // get multiple variables
//     getline(cin,name);
//     cout<< "Welcome Mr."<< name;
//     return 0;
// }




// Area of a triangle
// int main()
// {
//     float b, h, area;
//     cout<<"Enter the base and height"<< endl;
//     cin >> b >> h;
//     cout<< "The area is "<< b * h / 2 ;
//     return 0;
// }

// First n natural numbers
// int main()
// {
//     int n;
//     cout<<"Enter the range"<< endl;
//     cin >> n;
//     cout<< "The sum is "<< (float)(n * (n + 1) / 2) ;
//     return 0;
// }

// Radius of circle
// int main()
// {
//     float r;
//     cout<<"Enter the radius"<< endl;
//     cin >> r;
//     cout<< "The sum is "<< 22/7.0 * r * r ;
//     return 0;
// }

// // Testing char overflow
// #include <iostream>
// using namespace std;
// int main()
// {
//     char r=127;  // 1 byte
//     r++;
//     cout << int(r);  // -128 since Overflow !! NOT +128
//     return 0;
// }

// Bitwise operations:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x=11, y=255; 
//     cout << "Left shift is multiplication by 2^3: "<< (x<<3)<<endl;  // left shift 11 by 3 = 11 * 2^3
//     cout << "Right shift is division by 2^4: "<< (y>>4);  // right shift 255 by 4 = 255 / 2^4
//     return 0;
// }


// Enum:
// #define maxe 9999
// enum day {mon=1, tue, wed, thu, fri, sat, sun};  // constants
// enum dept {CS, ECE, CIVIL, MECH};
// int main()
// {
//     day x,d;
//     dept dep=CS;
//     x = mon;
//     d = fri;
//     cout << d << maxe << dep;
//     return 0;
// }



// typedef - Used for easy readability of the variables.
// typedef int marks;
// int main()
// {
//     marks m1, m2;
//     m1 = 50;
//     m2 = 56;

// }

// Dynamic declaration
// int main()
// {
//     if (int a=2, b=3; a < b )  // Dynamic declaration inside conditional.
//     cout << "Dynamic declaration example";
//     // Dummy block
//     {
//         int a;
//         a = 200;
//         cout << a;
//     }
//     cout << a; // Gives error, lives only inside the if conditional 
//     return 0;
// }


// Switch case
// If no break is given , then all the 3 cases will be executed.
// switch (expr:=int or char)
// {
//     case 1:
//             break;
//     case 2:
//             break;
//     case 3:
//             break;
//     default:
// }

// Infinite for loop
// for(;;)
// {

// }

// int Armstrong(int n)
// {
//     int sum=0,r;
//     int m=n;
//     //write a loop to find sum of cubes of digits
//     //check if a number is Armstrong
//     for(n=n; n > 0; n=n/10)
//     {   
//         r = n % 10;
//         sum +=  r * r * r; 
//     }
//     if(sum==m)
//         cout<<"armstrong";
//     else
//         cout<<"not armstrong";
//     return 0;
// }
// int main()
// {
//     cout<< Armstrong(50);
//     return 0;
// }


int main()
{
    int *p, x;
    cin >> x ;
    p = &x;
    cout << "p address" << p;
    return 0;
}