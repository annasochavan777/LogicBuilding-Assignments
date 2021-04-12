/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write application which accept two file names from user. Append the contents of 
// first file at the end of second file. 
// Input : Demo.txt Hello.txt 
// Output : Concat contents of Demo.txt at the end of Hello.txt 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <fstream>  
#include <iostream> 
#include <string>
#include <cstring>
using namespace std;  

int main( )  
{      
	  string filename1,filename2;
    char chr;
    int count=0;
    cout << "please enter first file name :";
    cin >> filename1;

    cout << "please enter second file name :";
    cin >> filename2;

    ifstream f1(filename1); 
    if (!f1.is_open())
    {
      cout << "File can't be opened";
    }

    std::ofstream outfile;
    outfile.open(filename2, std::ios_base::app); 
   
    while ((!f1.eof())) { 
		string line;
		getline(f1,line); //get line
    outfile << "\n" + line;     // append instead of overwrite
  }
    f1.close(); 
    cout << "Data appended successfully";
    return 0; 
}
