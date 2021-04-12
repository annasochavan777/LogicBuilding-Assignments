/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write application which accept file name from user and open that file in read mode.
// Input : Demo.txt
// Output : File opened successfully. 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("Demo.txt");
  cout << "File opened successfully.\n";
  myfile.close();
  return 0;
}