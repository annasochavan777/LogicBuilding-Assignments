/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write application which accept file name from user and display size of file.
// Input : Demo.txt
// Output : File size is 56 bytes  
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
using namespace std;

int main () {

  string name;
  cout << "please enter file name :";
  cin >> name;
  
  ifstream in_file(name+".txt", ios::binary);
  in_file.seekg(0, ios::end);
  int file_size = in_file.tellg();
  cout << "Size of the file is " << file_size << " bytes";

}