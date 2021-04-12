/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write application which accept two file names from user. Compare the contents of
// that two files. If contents are same then return true otherwise return false.
// Input : Demo.txt Hello.txt
// Output : Compare contents of Demo.txt and Hello.txt 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <fstream>  
#include <iostream> 
#include <string>
using namespace std;  

int main( )  
{
    bool IsContentSame = true;      
	string filename1,filename2;
    cout << "please enter first file name :";
    cin >> filename1;
  
    ifstream f1(filename1); 
    if (!f1.is_open())
    {
      cout << "File can't be opened";
    }

    cout << "please enter second file name :";
    cin >> filename2;

    ifstream f2(filename2); 
    if (!f2.is_open())
    {
      cout << "File can't be opened";
  }
    while ((!f1.eof()) && (!f2.eof())) { 
		
		string line,line2;
		getline(f1,line); //get lines
		getline(f2,line2);

        if(line!=line2)
        { 
           IsContentSame = false;
           break;
        }
    }
                            
    f1.close(); 
	f2.close();   

    if(IsContentSame)
      cout << "Files are same.";
    else
      cout << "Files are not same.";
    return 0; 
}
