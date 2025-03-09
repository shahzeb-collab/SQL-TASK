#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

int main() {
    string name, reply;
    int option, subjectOption, score = 0;
    vector<int> attemptScores;  
    char opt;
    system("color 5f");

    cout << "\t\t\t==================================\n";
    cout << "\t\t\t****** WELCOME TO QUIZ GAME ******\n";
    cout << "\t\t\t==================================\n";
    cout << "\t\t\t*** Developed by Shahzeb Ahmed ***\n";
    cout << "\t\t\t==================================\n\n";
    cout << " Enter your Name: ";
    getline(cin,name);
    cout << " \n\tWelcome " << name;
    getch();

main:
    system("cls");

    cout << "\n1) Start Quiz Game\n";
    cout << "2) View Scores\n";
    cout << "3) Quit\n\n";
    cout << "Select one option from above: ";
    cin >> option;

    while (cin.fail() || option < 1 || option > 3) {
        cin.clear(); // Clear the error state
        cin.ignore(1000, '\n'); // Discard invalid input
        cout << " \nPlease, Enter a valid option (1-3): ";
        cin >> option;
    }

    switch (option) {
        case 1: {
            score = 0; // Reset score for a new attempt
            system("cls");
            cout << "Choose a subject for the quiz:\n";
            cout << "1) ICT\n";
            cout << "2) Math\n";
            cout << "3) Science\n";
            cout << "Select one option: ";
            cin >> subjectOption;

            while (cin.fail() || subjectOption < 1 || subjectOption > 3) {
                cin.clear(); // Clear the error state
                cin.ignore(1000, '\n'); // Discard invalid input
                cout << "Please enter a valid subject option (1-3): ";
                cin >> subjectOption;
            }

            if (subjectOption == 1) {
                // General Knowledge Quiz
                system("cls");
                cout << " \nQ1- Which of the following is not a type of software?";
                cout << "\n\na) Operating System  \nb) Database Management System \nc) Mouse \nd) Word Processor\n\n";
                cout << "Enter your correct option: ";
                cin >> opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'C' || opt == 'c') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system ("cls");
                cout<<"\nQ2)In database management, which technique ensures data consistency in concurrent transactions?";
                cout<<"\n\na) Sharding\nb) Concurrency control\nc) Replication\nd) Normalization\n\n";
                cout<<"Enter your correct option: ";
                cin>>opt;
                  while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'B' || opt == 'b') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system("cls");
                 cout<<"\nQ3) Which of the following is NOT a characteristic of cloud computing?";
                cout<<"\n\na) On-demand self-service\nb) Resource pooling\nc) Fixed scalability\nd) Measured service\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'C' || opt == 'c') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system ("cls");
                cout<<"\nQ4)  What is the primary role of a firewall in network security?";
                cout<<"\n\na)  Encrypt network traffic\nb) Monitor and control incoming and outgoing network traffic\nc) Provide a backup for data\nd) Optimize network performance\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'B' || opt == 'b') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                 system ("cls");
                cout<<"\nQ5) In computer architecture, what is pipelining used for?";
                cout<<"\n\na)  Improving clock speed\nb) Reducing memory size\nc) Increasing instruction throughput\nd) Decreasing instruction latency\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'C' || opt == 'c') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                 system ("cls");
                cout<<"\nQ6) Which technology is used in blockchain to achieve a decentralized ledger?";
                cout<<"\n\na) Public-key cryptography\nb) Hash functions\nc) Consensus algorithms\nd) All of the above\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'D' || opt == 'd') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                 system ("cls");
                cout<<"\nQ7) In machine learning, which algorithm is most suitable for dimensionality reduction?";
                cout<<"\n\na) K-means\nb) Support Vector Machines\nc) Principal Component Analysis (PCA)\nd) Random Forest\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'C' || opt == 'c') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system ("cls");
                cout<<"\nQ8) Which HTTP method is considered unsafe?";
                cout<<"\n\na)  GET\nb) POST\nc) PUT\nd) DELETE\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'D' || opt == 'd') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                 system ("cls");
                cout<<"\nQ9) What does RAID 1 in storage refer to?";
                cout<<"\n\na) Striping with parity\nb) Mirroring\nc) Striping without parity\nd) Hot-swapping\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'B' || opt == 'b') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system ("cls");
                cout<<"\nQ10)  Which of the following is an example of system software?";
                cout<<"\n\na)  Microsoft Word\nb) Adobe Photoshop\nc) Operating System\nd) VLC Media Player\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'C' || opt == 'c') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                // Add more General Knowledge questions here if needed
            } else if (subjectOption == 2) {
                // Math Quiz
                system("cls");
                cout << "\nQ1- What is the square root of 64?";
                cout << "\n\na) 6\nb) 8\nc) 10\nd) 12\n\n";
                cout << "Enter your correct option: ";
                cin >> opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'B' || opt == 'b') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system("cls");
                cout<<"\nQ2)What is 15*6?";
                cout<<"\n\na)75 \nb)80\nc)90\nd)95\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt; while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'C' || opt == 'c') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system("cls");
                cout<<"\nQ3) What is the vlue of  (pi) approximately ";
                cout<<"\n\na) 2.14 \nb) 3.14\nc) 4.14\nd) 5.14 \n\n";
                cout<<"Enter your correct option : ";
                cin>>opt; while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'B' || opt == 'b') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                  getch();
                system("cls");
                cout<<"\nQ4)  What is the square root of 81? ";
                cout<<"\n\na) 7 \nb) 8\nc) 9\nd) 12 \n\n";
                cout<<"Enter your correct option : ";
                cin>>opt; while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'C' || opt == 'c') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system("cls");
                cout<<"\nQ5) What is the perimeter of a square with side length 4 cm? ";
                cout<<"\n\na)  12 cm \nb) 16 cm\nc) 20 cm\nd) 8 cm\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt; while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'B' || opt == 'b') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                  getch();
                system("cls");
                cout<<"\nQ6) What is 10% of 200? ";
                cout<<"\n\na)  10\nb) 20\nc) 30\nd) 40\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt; while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'B' || opt == 'b') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                   getch();
                system("cls");
                cout<<"\nQ7) How many sides does a hexagon have? ";
                cout<<"\n\na) 4\nb) 5\nc) 6\nd) 8\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt; while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'C' || opt == 'c') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system("cls");
                cout<<"\nQ8)  If a train travels 60 km in 2 hours, what is its speed? ";
                cout<<"\n\na) 15 km/h\nb) 20 km/h\nc) 30 km/h\nd) 40 km/h\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt; while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'C' || opt == 'c') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                 getch();
                system("cls");
                cout<<"\nQ9) If you subtract 3 from 9, what is the result? ";
                cout<<"\n\na) 3\nb) 5\nc) 9\nd) 6\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt; while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'D' || opt == 'd') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                 getch();
                system("cls");
                cout<<"\nQ10) What is the perimeter of a square with side length 4";
                cout<<"\n\na) 16\nb) 12\nc) 90\nd) 8\n\n";
                cout<<"Enter your correct option : ";
                cin>>opt; while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'A' || opt == 'a') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                
                
                
                // Add more Math questions here if needed
            } else if (subjectOption == 3) {
                // Science Quiz
                system("cls");
                cout << "\nQ1- What is the chemical symbol for water?";
                cout << "\n\na) H2O\nb) O2\nc) CO2\nd) H2\n\n";
                cout << "Enter your correct option: ";
                cin >> opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'A' || opt == 'a') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system("cls");
                cout << "\nQ2- Which of the following is the powerhouse of the cell?";
                cout << "\n\na) Nucleus\nb) Mitochondria\nc)  Ribosome\nd) Golgi apparatus\n\n";
                cout << "Enter your correct option: ";
                cin >> opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'B' || opt == 'b') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                getch();
                system("cls");
                cout << "\nQ3-The closest planet to the Sun is ?";
                cout << "\n\na) Venus\nb) Earth\nc)  Mercury\nd) Mars\n\n";
                cout << "Enter your correct option: ";
                cin >> opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'C' || opt == 'c') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                 getch();
                system("cls");
                cout << "\nQ4-What is the process by which plants make their own food?";
                cout << "\n\na) Photosynthesis.\nb) Earth\nc)  Mercury\nd) Mars\n\n";
                cout << "Enter your correct option: ";
                cin >> opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'A' || opt == 'a') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                 getch();
                system("cls");
                cout << "\nQ5-What is the smallest unit of matter?";
                cout << "\n\na) Photosynthesis.\nb) Earth\nc)  An Atom\nd) Mars\n\n";
                cout << "Enter your correct option: ";
                cin >> opt;
                while (cin.fail() || (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd' &&
                                      opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D')) {
                    cin.clear(); // Clear the error state
                    cin.ignore(1000, '\n'); // Discard invalid input
                    cout << "Enter a valid option like a, b, c, d or A, B, C, D: ";
                    cin >> opt;
                }

                if (opt == 'A' || opt == 'a') {
                    cout << "\nCorrect option!";
                    score += 2;
                } else {
                    cout << "\nSorry, Wrong Answer.";
                }
                // Add more Science questions here if needed
            }

            // Save the score of this attempt
            attemptScores.push_back(score);
            goto main;
        }

        case 2:
            system("cls");
            if (attemptScores.empty()) {
                cout << "No attempts made yet!\n";
            } else {
                cout << "Scores from all attempts:\n";
                for (size_t i = 0; i < attemptScores.size(); ++i) {
                    cout << "Attempt " << i + 1 << ": " << attemptScores[i] << " points\n";
                }
            }
            getch();
            goto main;

        case 3:
            system("cls");
            cout << "Do you want to Exit the quiz (yes/no)? ";
            cin >> reply;
            if (reply == "yes" || reply == "Yes") {
                break;
            } else {
                goto main;
            }
    }

    getch();
    return 0;
}


