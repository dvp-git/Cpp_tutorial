/*FRIEND FUNCTION, CLASSES and STATIC MEMBERS*/

#include<iostream>
using namespace std;

/*FRIEND FUNCTION & friend CLASSES*/
// class HasTest;
// class Test {

//     public: int a;
//     protected: int b;
//     private: int c;
//     friend void func_();   // allows another class having Test object to access this function
//     friend HasTest;
// };

// void func_()
// {
//     Test t;
//     t.a = 15;
//     t.b = 22; // inaccessible 
//     t.c = 33; // inaccessible without friend
//     cout<< t.a << t.b << t.c << endl;
// };

// class HasTest {
//     public:
//         Test t;
//         void func()
//         {
//             cout << t.b << endl; // inaccessible without declaring HasTest as friend of Test
//         }
// };

// int main()
// {
//     func_();   // friend function

//     HasTest x;
//     x.func();  // friend class object
//     return 0;
// }



/*STATIC VARIABLES AND STATIC FUNCTIONS*/
// class Test
// {
//     public: 
//         int a;
//         static int count;   // static variable
//         static int getCount()  // static function : can access only static member variables
//         {   
//             // cannot access non-static members.
//             return count;
//         }
//         Test()
//         {
//             a = 10;
//             count++;
//         }
// };
// int Test::count=0;   // global variable, but accessible only by class Test

// int main()
// {
//     Test t1, t2;
//     cout << t1.count<< endl;
//     cout << t2.count<< endl;
//     t1.count = 23;
//     cout << t2.count << endl; // prints 23;
    
//     // static variable setting using class(scope resolution)
//     Test::count = 50;
//     cout <<  t2.count << endl; // prints 50

//     // static function call
//     cout << t2.getCount() << endl; 
//     return 0;
// }

/* STATIC members used as counter*/
// class Student {
//     public: 
//             int roll_num;
//             string name;
//             static int admission_num ;
//             Student(string n) 
//             {
//                 name = n;
//                 admission_num++ ;
//                 roll_num = admission_num;
//             }
//             void display()
//             {
//                 cout << "Name " << name << endl << "Roll "<< roll_num << endl;
//             }
// };
// int Student::admission_num=0;  
// int main()
// {
//     Student s1("John Doe");
//     Student s2("Sam fje");
//     Student s3("asd Test");

//     s1.display();
//     s2.display();
//     s3.display();
//     cout << "Number of admission "<< Student::admission_num << endl;
//     return 0;
// }

/*INNER CLASS*/


// class outer
// {
//     public:
//         void fun()
//         {
//             i.display();
//         }
    
//     // to make it inaccessible to Outer, make it private;
// 	class inner
// 	{
//         public:
//             void display()
//             {
//                 cout<<"display of inner"<<endl;
//             }
//         };

// 	inner i;
// };
// int main()
// {
// 	outer::inner i;
//     i.func();
// }






