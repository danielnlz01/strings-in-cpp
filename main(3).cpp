#include <iostream>
#include <string>

using namespace std;

string s1,s2,s3;

int main()
{
 
 s1="Day";
 s2=" of the ";
 s3="Dead";
 
 string s = s1 + s2 + s3;
 cout << s << endl;
 
 s.append(" 2020!");
 cout << s << endl;
 
 cout << "the lenght of my string is " << s.length() << endl;
 
  return 0;
  
  
}