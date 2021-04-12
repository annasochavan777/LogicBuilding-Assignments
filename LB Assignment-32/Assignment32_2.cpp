/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write application which accept file name and one character from user. Count the 
// frequency of that character in file. 
// Input : Demo.txt 
// M
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <fstream>  
#include <iostream> 
#include <string>
#include <cstring>
using namespace std;  

int main( )  
{      
	string filename1;
    char chr;
    int count=0;
    cout << "please enter first file name :";
    cin >> filename1;

    cout << "please enter character :";
    cin >> chr;
  
    ifstream f1(filename1); 
    if (!f1.is_open())
    {
      cout << "File can't be opened";
    }

    while ((!f1.eof())) { 
		
		string line;
		getline(f1,line); //get line
        
        // calculate string length
        int n = line.length();
        char char_array[n + 1];
        // string to char array
        strcpy(char_array, line.c_str());
 
    for (int i = 0; i < n; i++)
    {
        if(char_array[i] == chr)
        { 
           count++;
        }
    }                  
  }
    f1.close(); 
    cout << " Count occurrence of " << chr << " in " << filename1 << " is : " << count;
    return 0; 
}
