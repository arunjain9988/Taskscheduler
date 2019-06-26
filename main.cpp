#include <iostream>
#include<string>
#include <limits>
#include "TaskScheduler.h"
using namespace std;


class InvalidInput:public exception{};

void clearInput()
{
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}

int main()
{
    int choice;
    int mx=10;
    bool input=false;
    while(!input) {
        try {
            cout<<"Welcome! Enter maximum no. of tasks: ";
            cin >> mx;
            if (mx <= 0 || mx > 500)
                throw InvalidInput();
            input = true;
        }
        catch (InvalidInput &str) {
            cout << "\nInvalid Input. Input should be an integer between 1 and 500.\nPlease Try Again.\n\n";
            clearInput();
        }
    }
    TaskScheduler obj(mx);
    string task_name;
    bool wrongInput;
    int priority=0;
    do {
        cout<<"\n\n1.Add Task\n2.Complete Task\n3.Show All Tasks\n4.Exit\nEnter Your Choice:";
        clearInput();
        cin>>choice;
        cout<<endl;
        switch (choice) {
            case 1:
                cout << "Enter Task Name: ";
                cin.ignore();
                getline(cin,task_name);
                wrongInput=false;
                while(!wrongInput) {
                    try {
                        cout << "Enter Task Priority: ";
                        cin >> priority;
                        if (priority <= 0 || priority > 100)
                            throw InvalidInput();
                        wrongInput = true;
                    }
                    catch (InvalidInput &str) {
                        cout << "\nInvalid Input. Priority should be an integer between 1 and 100.\nPlease Try Again.\n\n";
                        clearInput();
                    }
                }
                obj.addTask(task_name, priority);
                break;
            case 2:
                obj.completeTask();
                break;
            case 3:
                obj.getAllTasks(obj);
                break;
            case 4:
                cout<<"Thank you for using. Good Bye!"<<endl;
                exit(0);
            default:
                cout << "Invalid Choice! Try Again."<<endl;
        }
    }
    while(choice!=4);
}