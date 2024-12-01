#include <iostream>
#include <vector>
#include <iomanip> // For better formatting
#include <string>
using namespace std;

// Structure to represent a task
struct Task {
    string description;
    bool isCompleted;
};

// Function to display the task list
void displayTasks(const vector<Task>& tasks) {
    cout << "\n================= TO-DO LIST =================\n";
    if (tasks.empty()) {
        cout << "No tasks available. Your to-do list is empty.\n";
    } else {
        cout << setw(5) << "No." << setw(30) << "Task Description" << setw(15) << "Status\n";
        cout << "---------------------------------------------\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << setw(4) << i + 1 << ". " 
                 << setw(30) << tasks[i].description 
                 << setw(15) << (tasks[i].isCompleted ? "Completed" : "Pending") 
                 << "\n";
        }
    }
    cout << "=============================================\n";
}

// Function to add a task
void addTask(vector<Task>& tasks) {
    string description;
    cout << "Enter the task description: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, description);
    tasks.push_back({description, false});
    cout << "Task added successfully!\n";
}

// Function to mark a task as completed
void markTaskAsCompleted(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available to mark as completed.\n";
        return;
    }

    displayTasks(tasks);
    int taskIndex;
    cout << "Enter the task number to mark as completed: ";
    cin >> taskIndex;

    if (taskIndex > 0 && taskIndex <= tasks.size()) {
        tasks[taskIndex - 1].isCompleted = true;
        cout << "Task marked as completed successfully!\n";
    } else {
        cout << "Invalid task number. Please try again.\n";
    }
}

// Function to remove a task
void removeTask(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available to remove.\n";
        return;
    }

    displayTasks(tasks);
    int taskIndex;
    cout << "Enter the task number to remove: ";
    cin >> taskIndex;

    if (taskIndex > 0 && taskIndex <= tasks.size()) {
        tasks.erase(tasks.begin() + taskIndex - 1);
        cout << "Task removed successfully!\n";
    } else {
        cout << "Invalid task number. Please try again.\n";
    }
}

// Main function
int main() {
    vector<Task> tasks;
    int choice;

    cout << "\n<<<<<<<<<<<<<<<<<< TO-DO LIST MANAGER >>>>>>>>>>>>>>>>>>>\n";

    do {
        cout << "\n==================== MAIN MENU ====================\n";
        cout << "1. Add a Task\n";
        cout << "2. View All Tasks\n";
        cout << "3. Mark a Task as Completed\n";
        cout << "4. Remove a Task\n";
        cout << "5. Exit\n";
        cout << "===================================================\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                displayTasks(tasks);
                break;
            case 3:
                markTaskAsCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout << "\nThank you for using the To-Do List Manager! Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
