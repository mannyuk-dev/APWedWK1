#include <iostream>
#include <iostream>
#include <vector>
#include <fstream> 


//ex2 file writer APwk1
//else block writes using ios.

//https://repl.it/@mannydev/ex2wedAP#main.cpp

using namespace std;




int main() {
 
  char input;
  string name;
  do {
    cout << "Add text? (Y/N)";
    cin >> input; 
    if(input == 'N'){
      break;
   }
    //Break loop when N is entered 
    else {
      vector<string> list;
      cout << "Enter name: \n";
      cin >> name;
      list.push_back(name);

      ofstream outfile ("list.csv", ios::app);
      outfile << name << endl;
      outfile.close();
    }
  }
  while(input == 'Y');
  
}
