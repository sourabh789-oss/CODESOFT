#include <iostream>
#include <string>
using namespace std;

void displayTask(string tasks[], int task_count)
{
    if (task_count < 1)
    {
        cout << "No Task Created" << endl; // it is used to when we have no task but we display so this if block executes
    }
    for (int i = 0; i < task_count; i++)
    {
        cout << "Task " << i + 1 << " is " << tasks[i] << endl;
    }
}

int main()
{
    string tasks[10] = {""};
    int task_count = 0;
    int input = -1;

    while (input != 0)
    {
        cout << "_________________________" << endl;
        cout << "||_____TODO LIST________||" << endl;
        cout << "enter 1 for Create the Task" << endl;
        cout << "enter 2 for View the Task" << endl;
        cout << "enter 3 for delete the Task" << endl;
        cout << "enter 0 for Exit  the Todo list" << endl;
        cout << "_____________________" << endl;
        cin >> input;

        switch (input)
        {
        case 1:
        {

            if (task_count > 9) // we insert only 10 tasks but in array index starts from 0 so we write >9 condition not >10
            {
                cout << " Your Todo List Size is full " << endl;
                break;
            }
            else
            {
                cout << "Create The Task" << endl;
                cin.ignore(); // it ignores the empty space when we click the enter(\n) button
                getline(cin, tasks[task_count]);
                task_count++; // task is increment by 1 because we insert here task
                break;
            }
        }
        case 2:
        {
            displayTask(tasks, task_count); // to display our all task
            break;
        }

        case 3:
        {
            int del_task;
            cout << "enter the Task number you want to delete" << endl;
            cin >> del_task;
            if (del_task < 1 || del_task > 10)
            {
                cout << "you entered a invalid number" << endl;
            }
            else
            {
                for (int i = (del_task - 1); i < task_count; i++)
                {
                    tasks[i] = tasks[i + 1];
                }
                task_count--; // when we deleted the task then task_count is decrement by 1
            }
            break;
        }

        case 0:
        {
            cout << " Loop is Terminated" << endl;
            break; // break is used when we want to not execute below line or not below any case
        }
        default:
        {
            cout << "you entered the invalid value which is not in todo list" << endl;
            break;
        }
        }
    }

    return 0;
}