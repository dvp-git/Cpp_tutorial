/*IO streams*/
#include<iostream>
#include<fstream>
using namespace std;
/*Writing to a file*/

// int main ()
// {
//     ofstream ofs("Mytext.txt",ios::trunc);
//     ofs<<"Darryl"<<endl;
//     ofs<<27<<endl;
//     ofs<<"cs"<<endl;

//     ofs.close();
//     return 0;
// }

/*Reading from a file*/
// int main()
// {
//     ifstream ifs("Mytext.txt");

//     // or ifs.open(""Mytext.txt");
//     if (ifs.is_open())
//         cout <<"File is Open"<< endl;
//     string name;
//     int age;
//     string course;

//     ifs>> name >> age >> course;
//     cout << "Name: " << name << " Age: " << age << " Course: " << course << endl;
//     ifs.close();
//     return 0;
// }

/*Store objects in a file using overloadng*/
class Student
{
   public :
            string name;
            int age;
            string course;
            friend ofstream & operator<<(ofstream &ofs, Student &s);
            friend ifstream & operator>>(ifstream &ifs, Student &s);
};
ofstream & operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name <<endl;
    ofs << s.age << endl;
    ofs << s.course <<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name ;
    ifs >> s.age ;
    ifs >> s.course ;
    return ifs;
}

int main ()
{
    Student s1,s2,s3;
    s1.name="Cantourse" ; s1.age = 23 ; s1.course = "EE";
    ifstream ifstream_object;   // input stream object from a file  
    
    ifstream_object.open("Mytext.txt");
    
    ifstream_object >> s2 >> s3;
    ifstream_object.close();

    cout<< s2.name << endl; // Retrieve state of object from a file  
    cout<< s2.age << endl;

    ofstream ofstream_object;  // output to file
    ofstream_object.open("Mytext.txt",ios::app);

    ofstream_object<<s1;
    ofstream_object.close();
    return 0;
}