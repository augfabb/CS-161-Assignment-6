// ------------- FILE HEADER -------------
// Author ✅: August Fabbri
// Assignment ✅: 6
// Date ✅: 11/8/2025
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 6
// Participation ✅: 70
// Challenge ✅:50
// Labs ✅:100


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:1
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
  bool restart = true;
  double balanceRemain = 0;

  cout << "Welcome to my Coffee & Tea vending program!!";

  while (restart) {
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
        cin >> count;
      
      }
      else if (choice == 'Q'|| choice == 'q') {
        validChoice = true;
        
        cout << "Thanks for using my program!";
        exit(0);

      }
      else {
        cout << "Invalid Option! Please choose a valid option!" << endl;
        continue;
      }

    }
    
    cost = count * 0.25;
    balanceRemain = userBalance - cost;

    cout << fixed << setprecision(2);
    cout << "Your total: $" << cost << endl;
    cout << "Your balance: $" << balanceRemain << endl;

    if (balanceRemain < 0) {
      cout << "Not enough change!! Please enter more" << endl;
      restart = true;
    }
    else {
      restart = false;
    }
    
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

int userInput;
char choice;

B. OUTPUT

double cost = 0;
double balanceRemain = 0;



C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
 PRINT "Welcome to my Coffee & Tea vending program!!"

  WHILE restart IS TRUE DO

      //Accept coin input
      DO
          PRINT "Enter coins - 5, 10, or 25 only (enter 0 to stop): "
          READ userInput

          SET validInput = (userInput == 5 OR userInput == 10 OR userInput == 25)

          IF NOT validInput AND userInput != 0 THEN
              CONTINUE  // ask again
          ENDIF

          IF userInput == 5 THEN
              userBalance = userBalance + 0.05
          ELSE IF userInput == 10 THEN
              userBalance = userBalance + 0.10
          ELSE IF userInput == 25 THEN
              userBalance = userBalance + 0.25
          ENDIF

      WHILE userInput != 0

      PRINT "Your balance is ", userBalance

      // Step 2: Display menu
      PRINT "Please pick an option ($0.25 each):"
      PRINT "   C/c: Coffee"
      PRINT "   T/t: Tea"
      PRINT "   Q/q: Quit"

      SET validChoice = FALSE

      WHILE NOT validChoice DO
          READ choice

          IF choice IS 'C' OR 'c' THEN
              validChoice = TRUE
              PRINT "How many would you like?"
              READ count

          ELSE IF choice IS 'T' OR 't' THEN
              validChoice = TRUE
              PRINT "How many would you like?"
              READ count

          ELSE IF choice IS 'Q' OR 'q' THEN
              PRINT "Thanks for using my program!"
              EXIT PROGRAM

          ELSE
              PRINT "Invalid Option! Please choose a valid option!"
          ENDIF
      ENDWHILE

      // Step 3: Calculate total cost and remaining balance
      cost = count * 0.25
      balanceRemain = userBalance - cost

      PRINT "Your total: $", cost
      PRINT "Your balance: $", balanceRemain

      IF balanceRemain < 0 THEN
          PRINT "Not enough change!! Please enter more"
          restart = TRUE
      ELSE
          restart = FALSE
      ENDIF

  ENDWHILE

  PRINT "Thanks for using my vending machine!!"



SAMPLE RUNS
Copy from assignment document.

Welcome to my Coffee & Tea vending program!!Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0
Your balance is 1.25
Please pick an option ($0.25 each): 
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> c
How many would you like?
>>2
Your total: $0.50
Your balance: $0.75

Welcome to my Coffee & Tea vending program!!Enter coins - 5, 10, or 25 only: 10
Enter coins - 5, 10, or 25 only: 0
Your balance is 0.1
Please pick an option ($0.25 each): 
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> c
How many would you like?
>>1
Your total: $0.25
Your balance: $-0.15
Not enough change!! Please enter more
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0
Your balance is 0.35
Please pick an option ($0.25 each): 
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> c
How many would you like?
>>1
Your total: $0.25
Your balance: $0.10

Thanks for using my vending machine!!

Thanks for using my vending machine!!

*/