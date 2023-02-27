/*DESTRUCTORS */
#include<iostream>
using namespace std;

// class Demo
// {
//     int *p;
//     public:
//         Demo()
//         {   
//             p = new int[10];
//             cout<< "Constructor for Demo" << endl;
//         }
//         ~Demo()
//         { 
//             delete []p;
//             cout<< "Destructor of Demo" << endl;
//         }
// };

// void func()
// {
//     Demo *p=new Demo(); // constructor called
//     delete p;  // Must explicitly delete for dsetructorto be called
// }

// int main()
// {
//     func();
//     return 0;
// }

/*VIRTUAL DESTRUCTOR*/
class base
{
public:
	virtual ~base()
	{
		cout<<"destructor of base"<<endl;
	}
};
class derived:public base
{
public:
	~derived()
	{
		cout<<"destructor of derived"<<endl;
	}
};
void fun()
{
	base *p=new derived();
	delete p;
}
int main()
{
	fun();
}