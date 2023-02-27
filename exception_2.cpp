/*Exception handling */
#include<iostream>
using namespace std;

// int main()
// {
//     int x=10, y=2, z;
//     try
//     {  
//         if (y==0)
//             throw (string)"error 101";
//         z = x/y;
//         cout<< z << endl;
//     }
//     catch(string e)    // Executes only if throw block causes runtime error
//     {
//         cout << "Division by 0 "<< e <<endl;
//     }  
//     return 0;
// }
/*throw and catch between functions*/

// int division(int a, int b){
//     {
//         if (b==0)
//             throw string("asdasd");  // throws exception
//         else
//             return a/b;
        
//     }

// }
// int main()
// {
//     int x=10, y=0, z;
//     try
//     {
//         z = division(x , y);
//         cout<< z << endl;
//     }
//     catch(int e)
//     {
//         cout<< "Error "<< e << endl;
//     }
//     catch(...)
//     {
//         cout << "General Error" << endl;
//     }
//     return 0;
// }

// If classes are used in throw: MyException and DerivedMyException, then catch(DerivedMyException e) should come first, followed by catch(MyException e)

/*STACK OVERFLOW AND UNDERFLOW*/
class StackOverFlow:exception{};
class StackUnderFlow:exception{};

class Stack
{
    private:
            int size;
            int top=-1;
            int *stck;
    public:
            Stack(int sz)
            {   
                size=sz;
                stck=new int[size];
            }
            void push(int val)
            {
                if(top==size-1)
                    throw StackOverFlow();
                top++;
                stck[top] = val; 
            }
            
            int pop()
            {
                if(top==-1)
                   throw StackUnderFlow();
                return stck[top--];
            }
};

int main()
{
    Stack s(5);

    s.push(2);
        s.push(4);
            s.push(6);
                s.push(78);
                    s.push(20);
                    s.push(23);
    return 0;

}

