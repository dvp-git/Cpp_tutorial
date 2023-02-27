/* OPERATOR OVERLOADING */
#include<iostream>
using namespace std;

// class Complex
// {
//     private:
//         int real;
//         int img;
//     public:
//         // constructor
//         Complex(int r=0, int i=0)
//         {
//             real = r;
//             img = i;
//         }
//         Complex operator+(Complex x)  // operator overloading
//         {
//             Complex temp;
//             temp.real = real + x.real;
//             temp.img = img + x.img;
//             return temp;
//         }
//         int getReal()
//         {
//             return real;
//         }
//         int getImg()
//         {
//             return img; 
//         }
// };

// int main ()
// {
//     Complex c1(25, 32), c2(4,32),c3;
//     cout<< "Adding to cmplex using overload operator+"<<endl;
//     c3 = c1 + c2;
//     cout << c3.getReal()<<endl;
//     cout << c3.getImg()<<endl;
//     cout << 3 + 2<< endl;
//     return 0;
// }


/* friend OPERATOR OVERLOADING */
// class Complex
// {
//     private:
//         int real;
//         int img;
//     public:
//         // constructor
//         Complex(int r=0, int i=0)
//         {
//             real = r;
//             img = i;
//         }
//         friend Complex operator+(Complex c1, Complex c2);
//         int getReal()
//         {
//             return real;
//         }
//         int getImg()
//         {
//             return img; 
//         }
// };

// // friend operator overloading
// Complex operator+(Complex c1, Complex c2)
// {
//     Complex t;
//     t.real = c1.real + c2.real;
//     t.img = c1.img + c2.img;
//     return t;
// }
// int main ()
// {
//     Complex c1(25, 32), c2(4,32),c3;
//     cout<< "Adding to cmplex using overload operator+"<<endl;
//     c3 = c1 + c2;
//     cout << c3.getReal()<<endl;
//     cout << c3.getImg()<<endl;
//     return 0;
// }

/*INSERTION AND EXTRACTION Operator overloading cin and cout*/
class Complex
{
    private:
        int real;
        int img;
    public:
        // constructor
        Complex(int r=0, int i=0)
        {
            real = r;
            img = i;
        }
        //Overloading the ostream
        friend  ostream & operator<<(ostream &o, Complex &c); 
        int getReal()
        {
            return real;
        }
        int getImg()
        {
            return img; 
        }
};

// ostream operator overloading
ostream & operator<<(ostream &o, Complex &c)
{
    o << c.getReal() << " + " << c.getImg()<< "j"<<endl;
    return o;
}
int main ()
{
    Complex c1(25, 32);
    cout << c1<<endl; // OR  operator<<(cout, c1);
    return 0;
}