#include <iostream>
#include <ctime>
#include <time.h>
#include <sys/stat.h>
#include <string>
#include <fstream>


//AP ex1 WEd File exists

//Takes a file an checks if file exists. if it doesn't else block is executed
// https://repl.it/@mannydev/Apex1wed#main.cpp


using namespace std;

int main()
{
    char file_name[100];
    cout << "Filename to check: ";
    cin.getline(file_name, 100);

    ifstream ifile;
    ifile.open(file_name);
    if (ifile) {
     //if block checking if file exists or not

      cout << "file exists \n";
      struct stat sb;
      
      if (stat(file_name, &sb) != 0) {
          cout << "An error occured";
      }

      cout << "File name: " << file_name << "\n";
      cout << "size (bytes): " << sb.st_size << "\n";
      cout << "created At: " << (ctime(&sb.st_ctime)) << "\n";
      cout << "modified At: " << (ctime(&sb.st_mtime)) << "\n";
            
    }
    else {
        cout << file_name << " doesn't exist";
    }
}
