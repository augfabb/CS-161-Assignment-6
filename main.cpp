// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char* argv[]) {
 
  int userInput;
  double userBalance = 0;
  bool validInput = false;
  char choice;
  int count = 0;
  double cost = 0;

  cout << "Welcome to my Coffee & Tea vending program!!";

  //money input
  do {
    cout << "Enter coins - 5, 10, or 25 only: ";
    cin >> userInput;
    validInput = (userInput == 5 || userInput == 10 || userInput == 25);
    if (!validInput) {
      continue;
    }
    if(userInput == 5) {
      userBalance = userBalance + 0.05;
    }
    else if(userInput == 10) {
      userBalance = userBalance + 0.10;
    }
    else if(userInput == 25) {
      userBalance = userBalance + 0.25;
    }

    
  } while (userInput != 0);

  cout << "Your balance is " << userBalance << endl;

  //Menu Display
  
  cout << "Please pick an option ($0.25 each): \n";
  cout << "    C/c: Coffee\n";
  cout << "    T/t: Tea\n";
  cout << "    Q/q: Quit\n";
  cout << ">> ";
  
  bool validChoice = false;

  while(!validChoice) {

    cin >> choice;
   
    if (choice == 'c'|| choice == 'C') {
      validChoice = true;
      
      cout << "How many would you like?\n";
      cout << ">>";
      cin >> count;
    
    }
    else if (choice == 'T' || choice == 't') {
      validChoice = true;

      cout << "How many would you like?\n";
      cout << ">>";
     
    }
    else if (choice == 'Q'|| choice == 'q') {
      validChoice = true;
      
      cout << "How many would you like?\n";
      cout << ">>";
      cin >> count;

    }
    else {
      cout << "Invalid Option! Please choose a valid option!" << endl;
      continue;
    }

  }
  
  cost = count * 0.25;
  userBalance = userBalance - cost;

  cout << fixed << setprecision(2);
  cout << "Your total: $" << cost << endl;
  cout << "Your balance: $" << userBalance << endl;

  if (userBalance < 0) {
    cout << "Not enough change!! Please enter more" << endl;
  }
  

  cout <<"\nThanks for using my vending machine!!" << endl;

  





  return 0;
}







// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/