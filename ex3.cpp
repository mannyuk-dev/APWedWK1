
#include <iostream>
#include <ctime>
#include <time.h>
#include <sys/stat.h>
#include <string>
#include <fstream>

//ex3 wed ap file reader
// https://repl.it/@mannydev/ex3wedAP#main.cpp


using namespace std;

int main() {
    char name[100];
    cout << "Please enter a valid filename: ";
    cin.getline(name, 100);
    ifstream ifile;
    ifile.open(name);
    if (ifile) {
        cout << "File exists \n";
        //Opens file and will then read files.
        string myText;
        int timesRead = 2;
        ifstream MyReadFile("list.csv");
        cout << "Found 2 items: \n";
        while (getline (MyReadFile, myText)) {
          timesRead++;
          cout << myText << "\n";
        }
        // Close the file
        MyReadFile.close();
        cout << "The total number of lines read: " << timesRead;
    }
    else {
        cout <<"Sorry, '" << name << "' doesn't exist";
    }
}
