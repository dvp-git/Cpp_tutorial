/*SMART POINTERS - Used for garbage collection management */
#include<iostream>
#include <memory>
using namespace std;

class Rectangle 
{
    private:
        float length;
        float breadth;
    // above public, it is by default  private members
    public:

        // Paramerterized constructor
        Rectangle(int l , int b)
        {
            setLength(l);
            setBreadth(b);
        }

        // Copy constructor
        Rectangle(Rectangle &r)
        {
            length = r.length;
            breadth = r.breadth;
        }
        void setLength(int l)
        {
            if (l < 0)
                length = l;
            else
                length = l;
        }
        void setBreadth(int b)
        {
            if (b < 0)
                breadth  = 1;
            else
                breadth = b;
        }
        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
        int area()
        {
            return length * breadth;
        }
        int perimeter()
        {
            return 2*(length + breadth);
        }
};

//UNIQUE POINTER
// int main()
// {

//     unique_ptr<Rectangle> ptr(new Rectangle(10, 20));
//     cout << ptr -> area()<< endl;
//     // unique_ptr<Rectangle> ptr2 = ptr;  // not allowed
    
//     unique_ptr<Rectangle> ptr2;
//     ptr2 = move(ptr);   // moved ptr to ptr2. ptr --> NULL, ptr2 -> Rectangle.

//     //Testing:
//     cout << ptr2 -> area()<< endl;
//     cout << ptr -> area()<< endl;   // Segmentation fault. pointing to nothing.

//     return 0;
//     // unique pointer using template unique_ptr

// }

/*SHARED POINTER*/
int main()
{

    shared_ptr<Rectangle> ptr(new Rectangle(10, 20));
    shared_ptr<Rectangle> ptr2;
    ptr2 = ptr;   // moved ptr to ptr2. ptr --> NULL, ptr2 -> Rectangle.

    //Testing:
    cout << "Ptr2 " << ptr2 -> area()<< endl;
    cout << "Ptr " << ptr -> area()<< endl;   // Segmentation fault. pointing to nothing.

    cout << ptr.use_count() << endl;  // Reference counter.
    return 0;
    // unique pointer using template unique_ptr

}