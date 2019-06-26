#include <iostream>
#include<string>
#include "TaskScheduler.h"
using namespace std;

int main()
{
    int choice;
    int mx;
    cout<<"Welcome! Enter maximum no. of tasks: ";
    cin>>mx;
    TaskScheduler obj(mx);
    string task_name;
    int priority;
    do {
        cout<<"\n\n1.Add Task\n2.Complete Task\n3.Show All Tasks\n4.Exit\nEnter Your Choice:";
        cin>>choice;
        cout<<endl;
        switch (choice) {
            case 1:
                cout << "Enter Task Name: ";
                cin.ignore();
                getline(cin,task_name);
                cout << "Enter Task Priority: ";
                cin >> priority;
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