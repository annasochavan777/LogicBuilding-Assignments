/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write application which accept file name from user and one string from user. Write
// that string at the end of file.
// Input : Demo.txt
// Hello World
// Output : Write Hello World at the end of Demo.txt file 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
using namespace std;

int main () {

  string name,content;
  cout << "please enter file name :";
  cin >> name;

  cout << "please enter string that you want to add into file :";
  cin >> content;

  cout << content;
  
   std::ofstream outfile;

  outfile.open(name +".txt", std::ios_base::app); // append instead of overwrite
  outfile << content; 

}