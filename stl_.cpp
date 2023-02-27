/*STL classes*/
#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<map>


using namespace std;
// int main ()
// {
//     vector<int> v={2,4,6,8,10};  // change to list<int> , forward_list<int> [ no push_back only push_front]
//     v.push_back(20);
//     v.push_back(40);

//     v.pop_back();
//     // for(int x: v)
//     //     cout << x<< endl;

//     // Using iterator
//     vector<int>::iterator itr=v.begin();  // change to list<int> , forward_list<int> , set

//     for(itr;itr!=v.end();itr++)
//         cout << ++*itr << endl; // modifies the value


//     return 0;


// }


/* map*/
// int main()
// {
//     map<int, string> m;
//     m.insert(pair<int, string>(1,"Darryl"));
//     m.insert(pair<int, string>(2,"Ravi"));

//     map<int,string>::iterator itr;
//     for(itr=m.begin();itr!=m.end();itr++)
//     {
//         cout << itr-> first << " " << itr -> second<<endl;
//     }

//     // Using find.
//     map<int,string>::iterator itr1 = m.find(2);
//     cout << itr1-> first << " " << itr1->second;
//     return 0;
// }


//  Store Items in a File using Vector class 

class Item
{
private:
 string name;
 float price;
 int qty;
public:
    Item(){}
    Item(string n,float p,int q);
    friend ifstream & operator>>(ifstream &fis,Item &i);
    friend ofstream & operator<<(ofstream &fos,Item &i);
    friend ostream & operator<<(ostream &os,Item &i);
    
};
int main()
{
 int n;
 string name;
 float price;
 int qty;
 cout<<"Enter number of Item:";
 cin>>n;
 
 vector<Item *> list;
 cout<<"Enter All Item "<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<"Enter "<<i+1<<" Item Name , price and quantity";
 cin>>name;
 cin>>price;
 cin>>qty;
 list.push_back(new Item(name,price,qty));
 }
 
 ofstream fos("Items.txt");
 vector<Item *>::iterator itr;
 
 for(itr=list.begin();itr!=list.end();itr++)
 {
 fos<<**itr;
 }
 Item item;
 ifstream fis("Items.txt");
 for(int i=0;i<3;i++)
 {
 fis>>item;
 cout<<"Item "<<i<<endl<<item<<endl;
 }
 
}
Item::Item(string n,float p,int q)
{
 name=n;
 price=p;
 qty=q;
}
ofstream & operator<<(ofstream &fos,Item &i)
{
 fos<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
 return fos;
}
ifstream & operator>>(ifstream &fis,Item &i)
{
 fis>>i.name>>i.price>>i.qty;
 return fis;
}
ostream & operator<<(ostream &os,Item &i)
{
 os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
 return os;
}