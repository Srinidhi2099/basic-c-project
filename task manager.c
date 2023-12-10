#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of tasks
#define MAX_TASKS 10

// Structure to represent a task
typedef struct {
    char description[50];
    int completed;
} Task;

// Function to add a new task
void addTask(Task tasks[], int *taskCount, const char *description) {
    if (*taskCount < MAX_TASKS) {
        Task newTask;
        strcpy(newTask.description, description);
        newTask.completed = 0; // Set as incomplete by default
        tasks[*taskCount] = newTask;
        (*taskCount)++;
        printf("Task added successfully!\n");
    } else {
        printf("Task limit reached. Cannot add more tasks.\n");
    }
}

// Function to view all tasks
void viewTasks(const Task tasks[], int taskCount) {
    if (taskCount > 0) {
        printf("Tasks:\n");
        for (int i = 0; i < taskCount; i++) {
            printf("%d. %s - %s\n", i + 1, tasks[i].description, (tasks[i].completed ? "Completed" : "Incomplete"));
        }
    } else {
        printf("No tasks available.\n");
    }
}

// Function to mark a task as completed
void completeTask(Task tasks[], int taskCount, int taskIndex) {
    if (taskIndex >= 1 && taskIndex <= taskCount) {
        tasks[taskIndex - 1].completed = 1;
        printf("Task marked as completed!\n");
    } else {
        printf("Invalid task index.\n");
    }
}

int main() {
    Task tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;
    char description[50];

    do {
        // Display menu
        printf("\nTask Manager\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Mark Task as Completed\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter task description: ");
                scanf(" %[^\n]", description); // Read the description with spaces
                addTask(tasks, &taskCount, description);
                break;
            case 2:
                viewTasks(tasks, taskCount);
                break;
            case 3:
                if (taskCount > 0) {
                    printf("Enter the task index to mark as completed: ");
                    int taskIndex;
                    scanf("%d", &taskIndex);
                    completeTask(tasks, taskCount, taskIndex);
                } else {
                    printf("No tasks available to mark as completed.\n");
                }
                break;
            case 4:
                printf("Exiting Task Manager. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }

    } while (choice != 4);

    return 0;
}
