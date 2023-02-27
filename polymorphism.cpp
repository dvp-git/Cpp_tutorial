/*POLYMORPHISM*/
#include<iostream>
using namespace std;

/*Fuction overloading*/
// class Base {
//     public:
//     void display(){
//         cout << "Display Parent"<<endl;
//     }
// };

// class Derived: public Base {
//     public:
//             void display(int a){
//                 cout << "Display Child" <<endl;
//             }

// };

// int main() {
//     Base b;
//     b.display();
//     Derived d;
//     d.display(3);
//     d.Base::display();
//     return 0;
// }

/*Virtual Functions - Run time polymorphism */
// class Base {
//     public:
//     // Use virtual so that Derived func() is called. If no 'virtual' keyword then this func is called.
//     virtual void func(){
//         cout << "Display Base"<<endl;
//     }
// };

// class Derived: public Base {
//     public:
//             void func(){
//                 cout << "Display Dervied" <<endl;
//             }
// };
// int main (){
//     Base *p = new Derived();
//     p -> func();         // Display Dervied since based on object.
//     return 0;
// }



/* Virtual Functions - Run time polymorphism */
// class Car {
//     public:
//     
//     virtual void start(){
//         cout << "Car started"<<endl;
//     }
//     virtual void stop(){
//         cout << "Car stopped"<<endl;
//     }
// };

// class Swift: public Car {
//     public:
    
//     void start(){
//         cout << "Swift started"<<endl;
//     }
//      void stop(){
//         cout << "Swift stopped"<<endl;
//     }
// };

// class Suzuki: public Car {
//     public:
    
//     void start(){
//         cout << "Suzuki started"<<endl;
//     }
//      void stop(){
//         cout << "Suzuki stopped"<<endl;
//     }
// };

// int main (){
//     Car *car = new Suzuki();

//     // Run-time polymorphism
//     car -> start();         
//     car = new Swift();
//     car -> start();
//     return 0;
// }


/*Abstract classes */
class Car {
    public:
    // Use virtual (pure) - Polymorphism
     virtual void start() = 0;
    //     cout << "Car started"<<endl;
    // }
    // 
    // Reusability
    virtual void stop(){
         cout << "Car stopped"<<endl;
     }
};

class Swift: public Car {
    public:
    
    void start(){
        cout << "Swift started"<<endl;
    }
     void stop(){
        cout << "Swift stopped"<<endl;
    }
};

class Suzuki: public Car {
    public:
    
    void start(){
        cout << "Suzuki started"<<endl;
    }
     void stop(){
        cout << "Suzuki stopped"<<endl;
    }
};

int main (){
    // Car c; // object of abstract class type "Car" is not allowed
    Car *car = new Suzuki();

    // Run-time polymorphism
    car -> start();         
    car = new Swift();
    car -> start();
    return 0;
}
