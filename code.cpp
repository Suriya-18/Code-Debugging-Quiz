#include <iostream>
using namespace std;

struct Question {
    string question;
    string correctAnswer;
};

Question quiz[] = {
    {"Fix this: int x = '10';", "int x = 10;"},
    {"Fix this: cout << Hello World;", "cout << \"Hello World\";"},
    {"Fix this: for(i = 0; i < 5; i++) {", "for(int i = 0; i < 5; i++) {"}
};

void startQuiz() {
    string answer;
    for (auto &q : quiz) {
        cout << "Debug this code: " << q.question << endl;
        cout << "Your Answer: ";
        cin.ignore();
        getline(cin, answer);
        if (answer == q.correctAnswer)
            cout << "Correct!\n";
        else
            cout << "Wrong! The correct answer is: " << q.correctAnswer << endl;
    }
}

int main() {
    cout << "Welcome to Debugging Quiz!\n";
    startQuiz();
    return 0;
}
