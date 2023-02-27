/*ELLIPSIS - variable number of args */


#include<iostream>

using namespace std;

int sum(int n,...)
{
    va_list list;       
    _crt_va_start(list , n);  // getting variable number args inside list

    int x;
    int sum_ = 0;
    for(int i=0; i<n ; i++)
    {
        x = _crt_va_arg(list, int);
        sum_ += x;
    }
    _crt_va_end(list);
    return sum_;
}   

int main()
{
    cout << sum(3, 1 , 0, 123)<< endl;
    return 0;
}