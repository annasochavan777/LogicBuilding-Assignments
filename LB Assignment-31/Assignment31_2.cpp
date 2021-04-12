/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write application which accept file name from user and create that file.
// Input : Demo.txt
// Output : File created successfully. 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
using namespace std;

int main () {

  string name;
  cout << "please enter file name :";
  cin >> name;
  
  ofstream file;
  file.open(name + ".txt",ios::out);
  
   if(!file)
   {
       cout << "Error while creating file";
       return 0;
   }
  
   cout << "File created successfully.";

}