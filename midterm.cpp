// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅: Midterm
// Date ✅: 10/26/25
// Citations: 

// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
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
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {

    string player1 = "";
    string player2 = "";
    string player3 = "";

    int p1Rocks = 0;
    int p2Rocks = 0;
    int p3Rocks = 0;

    const int NUM_PLAYERS = 3;
    double average = 0.0;

    cout << "Welcome to the World Rock Collector's Championship!" << endl << endl;

    cout << "Enter player 1 name: ";
    getline(cin, player1);
    cout << "How many rocks did " << player1 << " collect? ";
    cin >> p1Rocks;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (p1Rocks < 0) {
      cout << "Can't have negative rocks. 0 will be entered." << endl;
      p1Rocks = 0;
    }

    cout << "Enter player 2 name: ";
    getline(cin, player2);
    cout << "How many rocks did " << player2 << " collect? ";
    cin >> p2Rocks;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (p2Rocks < 0) {
      cout << "Can't have negative rocks. 0 will be entered." << endl;
      p2Rocks = 0;
    }

    cout << "Enter player 3 name: ";
    getline(cin, player3);
    cout << "How many rocks did " << player3 << " collect? ";
    cin >> p3Rocks;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (p3Rocks < 0) {
      cout << "Can't have negative rocks. 0 will be entered." << endl;
      p3Rocks = 0;
    }
    cout << endl;

    // Places

    if (p1Rocks == p2Rocks && p2Rocks == p3Rocks) {
      cout << "It is a three way tie!!" << endl;
    }
    else if (p1Rocks == p2Rocks && p2Rocks > p3Rocks) {
      cout << player1 << " and " << player2 << " are tied for first place." << endl;
      cout << player3 << " is in second place." << endl;
    }
    else if (p1Rocks == p3Rocks && p3Rocks > p2Rocks) {
      cout << player1 << " and " << player3 << " are tied for first place." << endl;
      cout << player2 << " is in second place." << endl;
    }
    else if (p2Rocks == p3Rocks && p3Rocks > p1Rocks) {
      cout << player2 << " and " << player3 << " are tied for first place." << endl;
      cout << player1 << " is in second place." << endl;
    }
    else {
      if (p1Rocks > p2Rocks && p1Rocks > p3Rocks) {
        cout << player1 << " is in first place!" << endl;
        if (p2Rocks == p3Rocks) {
          cout << player2 << " and " << player3 << " are tied for second place." << endl;
        }
        else if (p2Rocks > p3Rocks) {
          cout << player2 << " is in second place." << endl;
          cout << player3 << " is in third place." << endl;
        }
        else {
          cout << player3 << " is in second place." << endl;
          cout << player2 << " is in third place." << endl;
        }
        }
      }
      if (p2Rocks > p1Rocks && p2Rocks > p3Rocks) {
        cout << player2 << " is in first place!" << endl;
        if (p1Rocks == p3Rocks) {
          cout << player1 << " and " << player3 << " are tied for second place." << endl;
        }
        else if (p1Rocks > p3Rocks) {
          cout << player1 << " is in second place." << endl;
          cout << player3 << " is in third place." << endl;
        }
        else {
          cout << player3 << " is in second place." << endl;
          cout << player1 << " is in third place." << endl;
      }
      }
      if (p3Rocks > p2Rocks && p3Rocks > p1Rocks) {
        cout << player3 << " is in first place!" << endl;
        if (p2Rocks == p1Rocks) {
          cout << player1 << " and " << player2 << " are tied for second place." << endl;
        }
        else if (p1Rocks > p2Rocks) {
          cout << player1 << " is in second place." << endl;
          cout << player2 << " is in third place." << endl;
        }
        else {
          cout << player2 << " is in second place." << endl;
          cout << player1 << " is in third place." << endl;
        }
      }

// Calculations

  cout << fixed << setprecision(2);
  average = (p1Rocks + p2Rocks + p3Rocks) / static_cast<double>(NUM_PLAYERS);

  cout << endl << "The top three players collected an average of " << average << " rocks!" << endl << endl;
  
  cout << "Congragulations Winners! Come back next year!" << endl;



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