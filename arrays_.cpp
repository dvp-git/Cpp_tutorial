/* Arrays */
#include<iostream>
#include<climits>
using namespace std;

// // for each loop - No need of size: similar to python for i in list:
// int main()
// {
//     char A[] = {'a',66,68};
//     for(int x:A)   // prints 97, 66, 68 if char : a,B,D
//         cout<<x<<endl;
//     return 0;
// }



/*Minimum */
// int main()
// {
//     int A[10] = {-4,-2,-9,-100,-23,34};
//     int min_ = INT16_MAX;
//     for(int x:A)
//     {
//         if(x < min_)
//             min_ = x;
//     }
//     cout << "Minimum number is"<< min_ <<endl;
//     return 0;
// }

/* Linear Search*/
// int main ()
// {   
//     int key, A[10];
//     for (int i; i < 10;i++)
//         cin >> A[i];
//         cout << "Enter search key"<<endl;
//     cin >> key;
//     for(int i;i<10;i++)
//     {
//         if (A[i] == key)
//         {
//             cout << "Search key at "<< i<<endl;
//             return 0;
//         }
//     }
//     cout <<"Not found"<<endl;
//     return 0;
// }

/* Nested for loops*/
// int main()
// {
//     for(int i=0; i < 5; i++)
//     {   
//      cout <<'*';   
//         for (int j=1;j<=i;j++)
//         {
//             cout <<'*' ;
//         }
//     cout<< "\n";
//     }
    
//     return 0;
// }

// *
// **
// ***
// ****
// *****

/* Matrix representation */
// int main()
// {
//     for(int i=0;i<2;i++) // Rows
//     {
//         for(int j=0;j<5;j++)   // Columns
//         cout<<"("<<i<<","<<j<<") ";
//     cout<<endl;
//     }
// }


/* '*' pattern */
// int main()
// {
//     for(int i=0;i<5;i++) // Rows
//     {
//         for(int j=5;j>i;j--)   // Columns
//         cout<<"*";
//     cout<<endl;
//     }
// }
// // *****
// // ****
// // ***
// // **
// // *

// int main()
// {
//   for (int i=0;i<16;i+=4)
//   {
//     for(int j=1;j<5;j++)
//     {
//         cout<<i+j <<" ";
//     }
//     cout<<endl;
// }
// }


/* 1234 pattern */
// int main()
// {
//   int count = 0;
//   for (int i=0;i<4;i++)
//   {
//     for(int j=0;j<4;j++)
//     {
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;
// }
// }


// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// * patterns
// int main()
// {
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             if(i>=j)  
//                 cout<<'*'<<' ';
//             else
//                 cout<<' '<<' '; 
//         }
//     cout<<'\n';
//     }
//     return 0;
// }
// j>=i
// * * * * 
//   * * *
//     * *
//       *

// i>=j
// *       
// * *
// * * *
// * * * *



// int main()
// {
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             if((i+j)>=3)
//                 cout<<'*'<< ' ';
//             else
//                 cout<<' '<<' ';
//         }
//     cout<<'\n';
//     }
//     return 0;
// }

// (i+j)<4  
// * * * * 
// * * *
// * *
// *

// (i+j)>=3)
// cout<<' '<<' ';
//       * 
//     * *
//   * * *
// * * * *



/* Multi-dimensional arrays*/
int main()
{
    int A[2][3] = {1,2,3,4,5};

    for (auto& x:A)         // has to be auto since reference
    {
        for(auto& y:x)    // has to be auto since reference
            cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}