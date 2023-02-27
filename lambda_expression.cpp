/*LAMBDA EXPRESSIONS*/

#include<iostream>
using namespace std;

template <typename T>
void func(T p)
{
    p();
}


// Syntax 
// [capture-list](parameter-list)return-type { body-of-function;}(function call arguments);
int main()
{
    [](){cout<<"Hellow World!";}();

    //Passing arguments
    [](int x , int y){cout<<"Sum is: "<< x+ y << endl;}(10, 50);

    // returning 
    cout<<([](int x , int y){return x+ y;}(10, 100))<< endl;

    // mentioning return type
    auto a = [](int x , float y)->float{return x+y;}(10,1.3);
    cout << a << endl;

    // Access outside elements using capture-list
    int b = 10;
    [b](){cout << b << endl;}();
    

    // Assign function to variable
    int s = 30;
    auto f =[&s](){cout << s << endl;};  // pass by referance to change the value
    f();
    s++;
    f();

    // Assign lambda expression to function as parameter
    func(f);
    return 0;
}