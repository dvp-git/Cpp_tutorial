/*Strings */
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

// int main ()
// {
//     char S[]={'H','E','L','L','O','\0','a'};

//     cout << S << endl; 
//     return 0;
// }

/*Reading and printing:*/
// int main()
// {
//     char s[50], a[20];
//     cout << "Enter name"<<endl;
//     cin.get(s, 50);      // get(string, max_allowed_is_50) - can be used only once in the program
//     // cin.getline(s, 50)
    
//     cin.ignore();      // Use this to ignore any entries in buffer. eg: enter key
//     cout << s <<endl;
//     cout<< "ENter new name"<<endl;
//     cin.get(a,20)  ;          // prints until it reaches null i.e. '\0'
//     cout << a << endl;
//     return 0;
// }

/* C string header functions /
// int main()
// {
//     char Str[50]="Hellow Wrath";
//     cin.getline(Str,50);
//     cout << strlen(Str) << endl;
//     return 0;
// }

/* strlen using pointer*/
// int main()
// {
//     char *s;
//     s = new char[20];  // HEAP

//     cout << "Enter a string"<< endl;
//     cin.getline(s,20);

//     cout << "Legth is "<< strlen(s)<< endl;

//     delete []s;
//     s = nullptr;
//     return 0;
// }


/* strcat(target, source); Concatenation */
/* strncat(target, source, length-of-source-to-concatenate)*/

// int main()
// {
//     char s1[20] = "Good";
//     char s2[20] = " Morning";

//    // cout << strcat(s1,s2)<< endl;  // Good Morning
//     cout << strncat(s1, s2 ,3) << endl;  // Good Mo

//     return 0;
// }


/*strcpy(target, source)*/
/*strncpy*/
// int main()
// {
//     char s1[10]="Hello";
//     char s2[5] = "GoPr";
//     // cout << strcpy(s1, s2)<<endl;
//     cout << strncpy(strrev(s1),s2, 2)<<endl;
//     return 0;
// }

/*strstr(main_string, substring)*/

/*Similarly we have strchr(main, char) and strrchr(main , char)*/

// int main()
// {
//     char s1[10] = "Darryl";
//     char s2[5] = "rry";
//     if (strstr(s1, s2)!=NULL)
//         cout << strstr(s1, s2); // gives substring starting with rry.
//     else
//         cout <<"Not found"<<endl;
//         return 0;
// }


/* strtol  - String to long int
    strtof - String to float*/
// int main ()
// {
//     char s1[10] = "235";
//     char s2[5] = "1.32";
//     int x = strtol(s1, NULL, 10);  // strtol(string,NULL, Base-10 or 2 or hex or oct )
//     float y = strtof(s2, NULL);
//     cout << x + 23 << " and " << y + 20.0 << endl;
//     return 0 ;

// }

/* TOKENIZER 
strtok(str,"=;") // = and ; are the 2 symbols used. 
*/
int main ()
{
    char s[20]="x=10;y=20;z=30";

    char *token = strtok(s, "=;");
    // cout << strtok(s,"=;")<<endl; // returns on x

    cout << "Token pointer: " << *(token+2) << endl;
    // cout << "Token: " << token + 3 << endl;
    while(token!=NULL)
    {
        cout << token << endl;
        token = strtok(NULL, "=;");
    }
    return 0;
}

//STRING CLASS
/*STRING ITERATORS*/
// int main()
// {
//     string str ="hello";
//     string::reverse_iterator r_it_;
//     string::iterator it_;
//     // Forward iterator
//     for(it_=str.begin();it_!=str.end();it_++)
//     {
//         cout << *it_<<endl;
//     }
//     // Reverse iterator
//     cout << "++++"<<endl;
//     for(r_it_=str.rbegin();r_it_!=str.rend();r_it_++)
//     {
//         cout << *r_it_<<endl;
//     }
//     return 0;
// }


/*Count number of vowels , consonents and words*/
// int main()
// {
//     string str = "How are you    doing22-3?";
//     int vowels=0, consonents=0, words=0;
//     for(int i=0;str[i]!='\0';i++)
//     {
//         if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a'  || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
//         vowels+=1;
//         else
//         if (str[i]==' ' && str[i-1]!=' ')
//         words+=1;
//         else
//         if ((97<= str[i] && str[i]<= 163) || (65 <= str[i] && str[i]<= 90))
//         consonents+=1;
//     }
//        cout << "Consonents :"<<consonents<<","<<"Vowerls :"<<vowels<<","<<"Words :"<<words+1;
//         return 0;
// }

/* Find username from email address*/
// int main()
// {
//     string email = "darrylvp@outlook.com";
//     int i;
//     i = email.find_first_of('@');
//     string username = email.substr(0,i);
//     cout << username;
//     return 0;

// }
