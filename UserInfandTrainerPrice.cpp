#include <iostream>
#include <string>

using namespace std;

// Trainer class with name and cost attributes
class Trainer {
public:
    string name;
    int cost;
    Trainer(string name, int cost) {
        this->name = name;
        this->cost = cost;
    }
};

int main() {
    // Create four Trainer objects with different costs
    Trainer trainer1("John", 50);
    Trainer trainer2("Jane", 75);
    Trainer trainer3("David", 60);
    Trainer trainer4("Sarah", 90);

    // Get user information
    string name, surname;
    int age;
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Please enter your surname: ";
    getline(cin, surname);
    cout << "Please enter your age: ";
    cin >> age;

    // Open class for user
    cout << "Welcome, " << name << " " << surname << "!" << endl;
    cout << "We offer the following trainers:" << endl;
    cout << "1. " << trainer1.name << " (Cost: $" << trainer1.cost << ")" << endl;
    cout << "2. " << trainer2.name << " (Cost: $" << trainer2.cost << ")" << endl;
    cout << "3. " << trainer3.name << " (Cost: $" << trainer3.cost << ")" << endl;
    cout << "4. " << trainer4.name << " (Cost: $" << trainer4.cost << ")" << endl;

    // Select trainer and calculate cost
    int trainerChoice;
    cout << "Please select a trainer (1-4): ";
    cin >> trainerChoice;

    int cost;
    switch (trainerChoice) {
        case 1:
            cost = trainer1.cost;
            break;
        case 2:
            cost = trainer2.cost;
            break;
        case 3:
            cost = trainer3.cost;
            break;
        case 4:
            cost = trainer4.cost;
            break;
        default:
            cout << "Invalid trainer selection!" << endl;
            return 1;
    }

    // Show user information and cost
    cout << "Name: " << name << " " << surname << endl;
    cout << "Age: " << age << endl;
    cout << "Trainer: " << trainerChoice << " (" << cost << ")" << endl;

    return 0;
}
