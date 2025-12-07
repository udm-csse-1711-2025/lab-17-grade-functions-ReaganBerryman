// Program used to illustrate the usage of functions
// Gets three exam scores from the user and shows them 
// their letter grades
// Started by: Caitlin Snyder
// Edited by: Reagan Berryman, 12/06/2025

#include <iostream>
using namespace std;

/****************************************************************
 *  Function Name: getScore
 *  Purpose: Ask the user for a test score, validate the input,
 *          and return the valid score.
 *  Parameters: None
 *  Return Value: A double representing a valid test score (0–100)
 ****************************************************************/


double getScore() {
    double input; // Initializes a variable that will be used to store the valid score within the function
    do { // Do while loop that keeps asking a user to enter a score until a valid score is entered
        cout << "Please enter a valid test score (Between 0 and 100): "; // Prompts the user to enter a valid score
        cin >> input; // Defines the input variable as whatever the user inputs
    } while (input < 1 || input > 100); 
    return input;
}
 





/****************************************************************
 * Function Name: displayLetterGrade
 * Purpose: Determine and display the letter grade 
 *          corresponding to the numeric score.
 * Parameters: score (double) – the numeric test score
 * Return Value: None (displays the letter grade to the screen)
 ****************************************************************/

void displayLetterGrade(double score) {
    if (score >= 90 && score <= 100) { // If/else if statement that outputs the letter grade of each test score depending on the range the test score falls into
        cout << "A";
    }
    else if (score >= 80 && score <= 89) {
        cout << "B";
    }
    else if (score >= 70 && score <= 79) {
        cout << "C";
    }
    else if (score >= 60 && score <= 69) {
        cout << "D";
    }
    else if (score < 60) {
        cout << "F";
    }
        
}
    



// You should not need to edit main for your program to run 
// correctly. Only edit it to add cout statements or comment
// out code to test your functions.
int main() {
    double score1, score2, score3;

    cout << "Enter your three exam scores below.\n";

    // Call getScore three times to get and validate each test score
    score1 = getScore();
    score2 = getScore();
    score3 = getScore();

    // Display letter grades for each exam
    cout << "\nLetter grades:\n";
    cout << "Exam 1: ";
    displayLetterGrade(score1);

   cout << endl << "Exam 2: ";
    displayLetterGrade(score2);

    cout << endl << "Exam 3: ";
    displayLetterGrade(score3);

    return 0;
}


