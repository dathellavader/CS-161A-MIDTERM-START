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
    double average = 0.00;

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

  cout << endl << "The average number of rocks collected by the top three players is " << average << " rocks!" << endl << endl;
  
  cout << "Congragulations Winners! Come back next year!" << endl;



  return 0;
}



// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
    string player1 = "";
    string player2 = "";
    string player3 = "";

    int p1Rocks = 0;
    int p2Rocks = 0;
    int p3Rocks = 0;

    const int NUM_PLAYERS = 3;
    double average = 0.0;

B. OUTPUT
double average = 0.00;
output strings // place, name, etc.

C. CALCULATIONS
cout << fixed << setprecision(2);
average = (p1Rocks + p2Rocks + p3Rocks) / static_cast<double>(NUM_PLAYERS);

D. LOGIC and ALGORITHMS
MESSAGE "Welcome to the World Rock Collector's Championship!"

PROMPT "Enter player 1 name: "
INPUT player1
PROMPT "How many rocks did " player1 " collect? "
INPUT p1Rocks
  IF p1Rocks < 0
    DISPLAY "Can't have negative rocks. 0 will be entered."
    SET p1Rocks = 0

PROMPT "Enter player 2 name: "
INPUT player2
PROMPT "How many rocks did " player2 " collect? "
INPUT p2Rocks
  IF p2Rocks < 0
    DISPLAY "Can't have negative rocks. 0 will be entered."
    SET p2Rocks = 0

PROMPT "Enter player 3 name: "
INPUT player3
PROMPT "How many rocks did " player3 " collect? "
INPUT p3Rocks
  IF p3Rocks < 0
    DISPLAY "Can't have negative rocks. 0 will be entered."
    SET p3Rocks = 0

IF p1Rocks == p2Rocks AND p2Rocks == p3Rocks
    DISPLAY "It is a three way tie!!"
  ELSE IF p1Rocks == p2Rocks AND p2Rocks > p3Rocks
    DISPLAY player1 " and " player2 " are tied for first place."
    DISPLAY player3 " is in second place."
  ELSE IF p1Rocks == p3Rocks AND p3Rocks > p2Rocks
    DISPLAY player1 " and " player3 " are tied for first place."
    DISPLAY player2 " is in second place."
  ELSE IF p2Rocks == p3Rocks AND p3Rocks > p1Rocks
    DISPLAY player2 " and " player3 " are tied for first place."
    DISPLAY player1 " is in second place."
ELSE
    IF p1Rocks > p2Rocks AND p1Rocks > p3Rocks
        DISPLAY player1 " is in first place!"
        IF p2Rocks == p3Rocks
            DISPLAY player2 " and " player3 " are tied for second place."
        ELSE IF p2Rocks > p3Rocks
            DISPLAY player2 " is in second place."
            DISPLAY player3 " is in third place."
      ELSE
            DISPLAY player3 " is in second place."
            DISPLAY player2 " is in third place."
    IF p2Rocks > p1Rocks AND p2Rocks > p3Rocks
        DISPLAY player2 " is in first place!"
        IF p1Rocks == p3Rocks
            DISPLAY player1 " and " player3 " are tied for second place."
        ELSE IF p1Rocks > p3Rocks
            DISPLAY player1 " is in second place."
            DISPLAY player3 " is in third place."
      ELSE
            DISPLAY player3 " is in second place."
            DISPLAY player1 " is in third place."
    IF p3Rocks > p2Rocks AND p3Rocks > p1Rocks
        DISPLAY player3 " is in first place!"
        IF p2Rocks == p1Rocks
            DISPLAY player1 " and " player2 " are tied for second place."
        ELSE IF p1Rocks > p2Rocks
            DISPLAY player1 " is in second place."
            DISPLAY player2 " is in third place."
      ELSE
            DISPLAY player2 " is in second place."
            DISPLAY player1 " is in third place."

// DO CALCULATIONS

DISPLAY "The average number of rocks collected by the top three players is " average " rocks!"
MESSAGE "Congragulations Winners! Come back next year!"


SAMPLE RUNS
Welcome to the Rock Collector Championships!

Enter player 1 name: Gordan Freeman
How many rocks did Gordan Freeman collect? -9
Invalid amount. 0 will be entered.

Enter player 2 name: Link
How many rocks did Link collect? 45

Enter player 3 name: D. Va
How many rocks did D. Va collect? 45

Link and D. Va are tied for first place.
Gordan Freeman is in second place!

The average number of rocks collected by the top three players is 30.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: Mario
How many rocks did Mario collect? 56

Enter player 2 name: Master Chief
How many rocks did Master Chief collect? 56

Enter player 3 name: Sonic
How many rocks did Sonic collect? 56

It is a three way tie!

The average number of rocks collected by the top three players is 56.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: King Dedede
How many rocks did King Dedede collect? 57
Enter player 2 name: Samus
How many rocks did Samus collect? 102

Enter player 3 name: Kirby
How many rocks did Kirby collect? 62

Samus is in first place!
Kirby is in second place.
King Dedede is in third place.

The average number of rocks collected by the top three players is 73.67 rocks!

Congratulations Rock Collectors!

*/