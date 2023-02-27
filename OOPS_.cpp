/*Classes and Objects*/
#include<iostream>
using namespace std;

// class Rectangle 
// {
//     // above public by default it is private
//     public:
//     float length;
//     float breadth;
//     int area()
//     {
//         return length * breadth;
//     }
//     int perimeter()
//     {
//         return 2*(length + breadth);
//     }
// };
// int main()
// {
//     Rectangle r1, r2;
//     // If attributes are not defined as public in class, e.g. r1.length etc won't be accessible.
//     r1.length = 10;
//     r1.breadth = 20;
//     cout << r1.area() << endl;
//     return 0;
// }

/* Using pointer to object */
// int main ()
// {
//     Rectangle r1;      // Stored in stack
//     Rectangle *ptr;
//     ptr = &r1;
//     ptr -> length = 10;
//     ptr -> breadth = 6;
//     cout << ptr -> area() << endl;   // -> dereferancing for object.
//     return 0;
// }

/* Using object in heap */
// int main ()
// {
//     Rectangle *ptr = new Rectangle();   // Using object stored in heap
//     ptr -> length = 10;
//     ptr -> breadth = 6;
//     cout << ptr -> area() << endl;   // -> dereferancing for object.
//     return 0;
// }


/* PUBLIC and PRIVATE datamembers*/
// class Rectangle 
// {
//     // above public by default it is private
//     private:
//         float length;
//         float breadth;
//     public:
//     void setLength(int l)
//     {
//         if (l < 0)
//             length = 1;
//         else
//             length = l;
//     }
//     void setBreadth(int b)
//     {
//         if (b < 0)
//             breadth  = 1;
//         else
//             breadth = b;
//     }
//     int getLength()
//     {
//         return length;
//     }
//     int getBreadth()
//     {
//         return breadth;
//     }
//     int area()
//     {
//         return length * breadth;
//     }
//     int perimeter()
//     {
//         return 2*(length + breadth);
//     }
// };
// int main()
// {
//     Rectangle r1, r2;
//     // 'float Rectangle::length' is private within this context
//     r1.setLength(10);
//     r1.setBreadth(20);
//     cout << "Area is " << r1.area() << endl;
//     cout <<" Lenfth is " << r1.getLength() << endl;
//     cout <<" Breadth is " << r1.getBreadth() << endl;
//     return  0;
// }

/* CONSTRUCTORS*/
// class Rectangle 
// {
//     
//     private:
//         float length;
//         float breadth;
//     // above public, it is by default  private members
//     public:
//         // Default constructor
//         // Rectangle()
//         // {
//         //     length = 1;
//         //     breadth = 1;
//         // }

//         // Paramerterized constructor
//         Rectangle( int l=1 , int b=1)
//         {
//             setLength(l);
//             setBreadth(b);
//         }

//         // Copy constructor
//         Rectangle(Rectangle &r)
//         {
//             length = r.length;
//             breadth = r.breadth;
//         }
//         void setLength(int l)
//         {
//             if (l < 0)
//                 length = 1;
//             else
//                 length = l;
//         }
//         void setBreadth(int b)
//         {
//             if (b < 0)
//                 breadth  = 1;
//             else
//                 breadth = b;
//         }
//         int getLength()
//         {
//             return length;
//         }
//         int getBreadth()
//         {
//             return breadth;
//         }
//         int area()
//         {
//             return length * breadth;
//         }
//         int perimeter()
//         {
//             return 2*(length + breadth);
//         }
// };

// int main()
// {
//     Rectangle r1;
//     Rectangle r2(10,5);
//     Rectangle r3(r2);
//     cout << r1.area() << endl;  // Default constructor called 
//     cout << r2.area() << endl;  // Parameterized constructor called.
//     cout << r3.area() << endl;  // Copy of r2 constructor called.
// }

/*this Pointer*/
class Rectangle 
{
    
    private:
        float length;
        float breadth;
    public:
         // Default constructor
        Rectangle(float length, float breadth)
        {
            // length = length;  INVALID
            // breadth = breadth; INVALID
            this->length = length;  
            this-> breadth = breadth;
        }
        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
};
int main ()
{
    Rectangle r1(42,233);
}