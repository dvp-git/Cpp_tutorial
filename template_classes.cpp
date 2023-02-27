/*TEMPLATE CLASSES

needs to have template <class T> at the start of each bodyheavy 
*/
#include <iostream>
using namespace std;

template <class T>
class Stack 
{
    private:
            T *stck;
            int top;
            int size;
    public:
            Stack(int sz)
            {
                size=sz;
                top = -1;
                stck = new T[size];
            }
            void push(T x);
            T pop();
};

template <class T>
void Stack<T>::push(T x)
{
    if(top==size-1)
        cout<<"Stack is full"<<endl;
    else
    {
        top++;
        stck[top] = x;
    }
}
template <class T>
T Stack<T>::pop()
{
    T x=0;
    if(top==-1)
        cout<<"Stack is Empty"<<endl;
    else
    {
        x = stck[top--];
        top++;
    }
    return x;
}

int main()
{
    Stack <float>s1(10);
    Stack <int>s2(10);
    s1.push(10);
    s1.push(32);
    s1.push(322);
    return 0;
} 