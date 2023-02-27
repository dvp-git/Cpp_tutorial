/*INHERTITANCE*/
#include<iostream>
using namespace std;

// Example of inheritance.
// class base
// {
// public:
// 	int a;
//      	void display()
// 	{
// 	 	cout<<"display of base"<<a<<endl;
// 	}
// };
// class derived:public base
// {
// public:
//       	void show()
// 	{
// 	   	cout<<"show of derived"<<endl;
// 	}
// };
// int main()
// {
// 	derived d;
// 	d.a=100;
// 	d.display();
// 	d.show();
//     return 0;
// }

/*Rectangle class:*/
// class Rectangle
// {
// private:
//     int length;
//     int breadth;
// public:
//     Rectangle();
//     Rectangle(int l,int b);
//     Rectangle(Rectangle &r);
//     int getLength(){return length;}
//     int getBreadth(){return breadth;}
//     void setLength(int l);
//     void setBreadth(int b);
//     int area();
//     int perimeter();
//     bool isSquare();
//     ~Rectangle();
// }; 

// // Derived class
// class Cuboid:public Rectangle
// {
// private:
//     int height;
// public:
//     Cuboid(int h)
//     {
//     height=h;
//     }
//     int getHeight(){return height;}
//     void setHeight(int h){height=h;}
//     int volume(){return getLength()*getBreadth()*height;}
// };
// int main()
// {
//  Cuboid c(5);
//  c.setLength(10);
//  c.setBreadth(7);
//  cout<<"Volume is "<<c.volume()<<endl;
// }

// Scope resolution

//Constructors
// Rectangle::Rectangle()
// {
//  length=1;
//  breadth=1;
// }
// Rectangle::Rectangle(int l,int b)
// {
//  length=l;
//  breadth=b;
// }
// Rectangle::Rectangle(Rectangle &r)
// {
//  length=r.length;
//  breadth=r.breadth;
// }

// // Mutators
// void Rectangle::setLength(int l)
// {
//  length=l;
// }
// void Rectangle::setBreadth(int b)
// {
//  breadth=b;
// }
// int Rectangle::area()
// {
//  return length*breadth;
// }
// int Rectangle::perimeter()
// {
//  return 2*(length+breadth);
// }
// bool Rectangle::isSquare()
// {
//  return length==breadth;
// }
// Rectangle::~Rectangle()
// {
//  // cout<<"Rectangle Destroyed";
// } 

/* Constructors in inheritence.*/
// class Base
// {
//     public:
//         Base()
//         {
//             cout<< "Default constructor Base"<<endl;
//         }
//         Base(int x)
//         {
//             cout << "Parameterized constructor Base : "<< x << endl;
//         }
// };

// class Derived:public Base
// {
//     public:
//         Derived()
//         {
//             cout <<"Default constructor Dervied" << endl;
//         }
//         Derived(int y)
//         {
//             cout << "Parameterized constructor Derived : "<< y<<endl;
//         }
//         Derived(int x, int y):Base(x)
//         {
//             cout << "Modified Parameterized constructor Derived : "<< y<<endl;
//         }
// };

// int main()
// {
//     Derived d(3,5);
//     return 0;
// }


/*PRIVATE PUBLIC AND PROTECTED DATA MEMBERS
Access Specifiers 
• Private - Accessible only inside a class
• Protected - Accessible inside a class and inside derived classes
• Public - accessible inside class, inside derived class and upon object
*/

// class Base
// {
// private: int a;
// protected: int b;
// public: int c;
 
//  void funBase()
//  {
//     a=10;
//     b=5;
//     c=15;
// }
// };
// class Derived:public Base
// {
// public:
//  void funDerived()
//  {
//     // a=10; private of Base
//     b=5;
//     c=15;
//  }
// };
// int main()
// {
//     Base b;
//     // b.a=10;
//     //b.b=5;
//     b.c=20;
//     return 0;
// }


/*WAYS OF INHERITENCE*/
// class Parent
// {
//     private:
//         int a;
//     protected:
//         int b;
//     public:
//         int c;

//         void funcParent()
//         {
//             a = 10;
//             b = 20;
//             c = 30;
//         }
// };
// class Child:private Parent    // All members (except private) of parent comes to Child and become private
// {
//     private:

//     protected:

//     public:
//         void funcChild()
//         {
//             // a =10;
//             b = 20;
//             c = 30;
//         }
// };
// class GrandChild:public Child
// {
//     public:
//         void funcGrandChild()
//         {
//             // Private data members of parent
//             // a =10;
//             // b =20;  
//             // c = 30;
//         }
// };
// int main ()
// {
//     Child c;
//     // c.a = 12;
//     c.funcChild();
//      // c.c= 23;
// }

/*BASE CLASS POINTER TO DERIVED OBJECT*/
class Base
{
    public:
        void fun1()
        {
            cout <<"func1 of Base "<<endl;
        }
};
class Derived:public Base{
    public:
        void fun2()
        {
            cout << "func2 of Derived" << endl;
        }
};

int main ()
{
    Derived d;
    Base * ptr=&d;
    d.fun1();
    d.fun2();
    ptr -> fun1();
   // ptr -> fun2();  // ERROR: class parent pointer of "Base" has no member "fun2" since fun2 is in derived class
    return 0;

// Test derived class pointer
        // Base b;
        // Derived * dptr = &b;  // ERROR : a value of type "Base *" cannot be used to initialize an entity of type "Derived *

}