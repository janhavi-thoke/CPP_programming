#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function prototypes
void addTask(vector<string> &tasks);
void viewTasks(const vector<string> &tasks);
void deleteTask(vector<string> &tasks);

int main() {
    vector<string> tasks;
    int choice;

    do {
        cout << "\n===== TODO List Manager =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Ignore any remaining newline character

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

void addTask(vector<string> &tasks) {
    string task;
    cout << "Enter task to add: ";
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully.\n";
}

void viewTasks(const vector<string> &tasks) {
    cout << "\nCurrent Tasks:\n";
    if (tasks.empty()) {
        cout << "No tasks available.\n";
    } else {
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

void deleteTask(vector<string> &tasks) {
    int index;
    viewTasks(tasks);
    
    if (tasks.empty()) {
        return;
    }

    cout << "Enter task number to delete: ";
    cin >> index;
    cin.ignore();  // Ignore any remaining newline character
    
    if (index >= 1 && index <= static_cast<int>(tasks.size())) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task deleted successfully.\n";
    } else {
        cout << "Invalid task number. No task deleted.\n";
    }
}