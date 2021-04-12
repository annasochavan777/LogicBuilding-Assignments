/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write application which accept file name and one word from user. Count the 
// frequency of that word in file. 
// Input : Marvellous.txt 
// Hello
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;  

int main( )  
{      
	  string filename1,word;
    char chr;
    int count=0;
    cout << "please enter first file name :";
    cin >> filename1;

    cout << "please enter word :";
    cin >> word;

    ifstream f1(filename1); 
    if (!f1.is_open())
    {
      cout << "File can't be opened";
    }

    while ((!f1.eof())) { 
		string line;
		getline(f1,line); //get line
    
    stringstream ss(line);
    
    while(ss >> line)
    {
        if(line==word)
          count++;
    }
  }
    f1.close(); 
    cout << "Word count is :" << count;
    return 0; 
}
