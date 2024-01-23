#include <iostream>

const int MAX_TASKS = 10;

class ToDoList {
private:
    std::string tasks[MAX_TASKS];
    int taskCount;

public:
    ToDoList() : taskCount(0) {}

    void addTask(const std::string& task) {
        if (taskCount < MAX_TASKS) {
            tasks[taskCount] = task;
            taskCount++;
            std::cout << "Task added: " << task << std::endl;
        } else {
            std::cout << "ToDoList is full. Cannot add more tasks." << std::endl;
        }
    }

    void displayTasks() {
        if (taskCount == 0) {
            std::cout << "ToDoList is empty." << std::endl;
        } else {
            std::cout << "Tasks in ToDoList:" << std::endl;
            for (int i = 0; i < taskCount; ++i) {
                std::cout << i + 1 << ". " << tasks[i] << std::endl;
            }
        }
    }
};

int main() {
    ToDoList myToDoList;

    myToDoList.addTask("Buy groceries");
    myToDoList.addTask("Complete homework");
    myToDoList.addTask("Go for a run");

    myToDoList.displayTasks();

    return 0;
}

