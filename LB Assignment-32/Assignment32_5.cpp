/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept three file names from user which are existing files. Create one new file 
// named as Demo.txt. Write name and Data of that three files in Demo.txt file one after another. 
// Input : abc.txt 
//         pqr.txt 
//         xyz.txt 
//Output : Write file name and data of each file in Demo.txt file. 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;  
void WriteIntoFile(string filename)
{
    ifstream f1(filename); 
    if (!f1.is_open())
    {
      cout << "File can't be opened";
    }

    std::ofstream outfile;
    outfile.open("Demo.txt", std::ios_base::app); 

    // write file name first
    outfile << "\n" + filename;

    while ((!f1.eof())) { 
		string line;
		getline(f1,line); //get line
    outfile << "\n" + line;     // append instead of overwrite
    }
    f1.close();
    outfile.close(); 
}
int main( )  
{      
	  string filename1,filename2,filename3;
    cout << "please enter 1st file name :";
    cin >> filename1;

    cout << "please enter 2nd file name :";
    cin >> filename2;

    cout << "please enter 3rd file name :";
    cin >> filename3;

    WriteIntoFile(filename1); // write 1st file content 
    WriteIntoFile(filename2); // write 2nd file content 
    WriteIntoFile(filename3); // write 3rd file content 

    cout << "all 3 files data inserted into Demo.txt file";
    return 0; 
}
