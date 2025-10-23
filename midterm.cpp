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

    int player1Rocks = 0;
    int player2Rocks = 0;
    int player3Rocks = 0;
    
    cout << "Welcome to the World Rock Collectors Championship!" << endl << endl;

    cout << "Enter player 1 name: ";
    getline(cin, player1);
    cout << "How many rocks did " << player1 << " collect? ";
    cin >> player1Rocks;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    cout << "Enter player 2 name: ";
    getline(cin, player2);
    cout << "How many rocks did " << player2 << " collect? ";
    cin >> player2Rocks;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter player 3 name: ";
    getline(cin, player3);
    cout << "How many rocks did " << player3 << " collect? ";
    cin >> player3Rocks;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (player1Rocks < 0) {
    cout << "Can't have negative rocks. 0 will be entered." << endl;
    player1Rocks = 0;
    }
    else if (player2Rocks < 0) {
    cout << "Can't have negative rocks. 0 will be entered." << endl;
    player2Rocks = 0;
    }
    else if (player3Rocks < 0) {
    cout << "Can't have negative rocks. 0 will be entered." << endl;
    player3Rocks = 0;
    }








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