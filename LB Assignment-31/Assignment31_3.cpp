/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write application which accept file name from user and read all data from that file 
// and display contents on screen. 
// Input : Demo.txt 
// Output : Display all data of file. 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
using namespace std;

int main () {

  string name,content;
  cout << "please enter file name :";
  cin >> name;

   std::ifstream file(name);
   std::string str; 
   while (std::getline(file, str))
   {
       cout << str;
       cout << "\n";
   }

}