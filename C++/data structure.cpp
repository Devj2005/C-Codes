#include <iostream>
using namespace std;
struct Students //for dvariious datatypes stored instead of array as it stores the same datatype U{USER DEFINED DATA TYPE}
{
   int admno;
   string name;
   char grade;
};//ends here
int main()
{
  struct Students  S1;
  S1.admno=2345;
  S1.name="devyan j";
  S1.grade="A";
  cout<< "Grade"<<S1.grade;
    return 0;
}
