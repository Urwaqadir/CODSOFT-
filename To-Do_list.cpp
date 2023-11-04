#include <iostream>
#include <string>

using namespace std;

const int MAX_TASKS = 100;

struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    Task tasks[MAX_TASKS];
    int numTasks;

public:
    ToDoList() : numTasks(0) {}
    void addTask(const string &description);
    void viewTasks();
    void markAsCompleted(int taskIndex);
    void removeTask(int taskIndex);
};

void ToDoList::addTask(const string &description) {
    if (numTasks < MAX_TASKS) {
        tasks[numTasks].description = description;
        tasks[numTasks].completed = false;
        numTasks++;
        cout<<endl;
        cout << "\nTask added: " << description << endl;
    } else {
        cout << "\nTask list is full. Cannot add more tasks." << endl;
    }
}

void ToDoList::viewTasks() {
    if (numTasks == 0) {
        cout << "\nNo tasks in the list." << endl;
        return;
    }

    cout << "Tasks in the to-do list:" << endl;
    for (int i = 0; i < numTasks; i++) {
        cout << "[" << (i + 1) << "] ";
        if (tasks[i].completed) {
            cout << "[Completed] ";
        } else {
            cout << "[Pending]   ";
        }
        cout << tasks[i].description << endl;
    }
}

void ToDoList::markAsCompleted(int taskIndex) {
    if (taskIndex >= 1 && taskIndex <= numTasks) {
        tasks[taskIndex - 1].completed = true;
        cout << "\nTask marked as completed: " << tasks[taskIndex - 1].description << endl;
    } else {
        cout << "\nInvalid task index. No task marked as completed." << endl;
    }
}

void ToDoList::removeTask(int taskIndex) {
    if (taskIndex >= 1 && taskIndex <= numTasks) {
        cout << "\nTask removed: " << tasks[taskIndex - 1].description << endl;
        for (int i = taskIndex - 1; i < numTasks - 1; i++) {
            tasks[i] = tasks[i + 1];
        }
        numTasks--;
    } else {
        cout << "\nInvalid task index. No task removed." << endl;
    }
}

int main() {
    ToDoList toDoList;
    int choice;
    string taskDescription;

    while (true) {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter the task description: ";
                cin.ignore();
                getline(cin, taskDescription);
                toDoList.addTask(taskDescription);
                break;
            case 2:
                toDoList.viewTasks();
                break;
            case 3:
                cout << "\nEnter the task index to mark as completed: ";
                cin >> choice;
                toDoList.markAsCompleted(choice);
                break;
            case 4:
                cout << "\nEnter the task index to remove: ";
                cin >> choice;
                toDoList.removeTask(choice);
                break;
            case 5:
                cout << "\nThanks for using this To-Do-List!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}

