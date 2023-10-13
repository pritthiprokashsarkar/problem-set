/* string find in c++

string_find is used to find a substring in a string 
the specified string being called upon

it returns index the first occurence of the substring in 
a string the defaults value of starting position is 0

returns value

the function returns the first occurence of
the substring

if the substring is not found then it returns
string::npos
(string::pos is a static its value as the highest possible
fir the size_it datatype
) */

// finding the occurance of a substring in first and 
//second position

/* #include<bits./stdc++.h>
using namespace std;
int main()
{
    string str1="geeksforgeeks a computer science";
    string str2="geeks";

    int it = str1.find(str2);
    if(it != string::npos ) cout<<it<<endl;
    int it2 = str1.find(str2 , it+1); 
    if(it2 != string::npos ) cout<<it2<<endl;
} */

/* find the occurance of a character */

    /* find(je string a search korte hobe , starting position) */

/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1="geeksforgeeks for computer science";
    char str2='g';

    int it = str1.find(str2);
    if( it != string::npos)
    {
        cout<<it<<endl;
    }
    it = str1.find(str2, it+1);
    if( it != string::npos)
    {
        cout<<it<<endl;
    }

} */

// search for a partial string

/* je string er moddhe khujbo.find( je string kujbo 
 , starting position, jotogula character khujbo) */

/*  #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    string str= "geeksforgeeks a computer science";
    int it = str.find("geeks", 0 , 3);
    if(it != string::npos)
    {
        cout<<it<<endl;
    }
 } */
 
 // output 0 hoile sei string or moddhe ase