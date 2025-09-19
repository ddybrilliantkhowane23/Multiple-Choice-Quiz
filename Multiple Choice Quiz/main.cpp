//MT KHOWANE.

#include <iostream>
#include <string>


using namespace std;

// Function prototypes
void askQuestions(string questions[], string options[][4], char answers[], int size);
int calculateScore(string questions[], string options[][4], char answers[], int size);

int main() {
    const int SIZE = 5;  // Number of questions
    string questions[SIZE] = {
        "\nWhat is the capital of France?",
        "\nWhat is 2 + 2?",
        "\nWhat color is the sky?",
        "\nWhat is the boiling point of water?",
        "\nWho is the president of the USA?"
    };

    string options[SIZE][4] = {
        {"A. Paris", "B. London", "C. Rome", "D. Berlin"},
        {"A. 3", "B. 4", "C. 5", "D. 6"},
        {"A. Red", "B. Blue", "C. Green", "D. Yellow"},
        {"A. 90°C", "B. 100°C", "C. 110°C", "D. 120°C"},
        {"A. Obama", "B. Trump", "C. Biden", "D. Bush"}
    };

    char answers[SIZE] = {'A', 'B', 'B', 'B', 'C'};  // Correct answers

    // Ask questions and calculate score
    askQuestions(questions, options, answers, SIZE);
    int score = calculateScore(questions, options, answers, SIZE);

    // Display the score
    cout << "Your score: " << score << "/" << SIZE << endl;

    return 0;
}

// Function to ask questions and accept answers
void askQuestions(string questions[], string options[][4], char answers[], int size) {
    char userAnswer;
    for (int i = 0; i < size; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;  // Display the options
        }
        cout << "Enter your answer (A/B/C/D): ";
        cin >> userAnswer;

        // Convert to uppercase for uniform comparison
        userAnswer = toupper(userAnswer);

        if (userAnswer == answers[i]) {
            cout << "\nCorrect!" << endl;
        } else {
            cout << "\nIncorrect. The correct answer is: " << answers[i] << endl;
        }
    }
}

// Function to calculate the score
int calculateScore(string questions[], string options[][4], char answers[], int size) {
    int score = 0;
    char userAnswer;
    for (int i = 0; i < size; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }
        cout << "Enter your answer (A/B/C/D): ";
        cin >> userAnswer;

        userAnswer = toupper(userAnswer);

        if (userAnswer == answers[i]) {
            score++;
        }
    }
    return score;
}

