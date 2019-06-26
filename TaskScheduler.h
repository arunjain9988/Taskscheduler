//
// Created by arun on 26/6/19.
//
using namespace std;
#ifndef TASKSCHEDULER_TASKSCHEDULER_H
#define TASKSCHEDULER_TASKSCHEDULER_H

#endif //TASKSCHEDULER_TASKSCHEDULER_H

class TaskScheduler
{
    struct Task
    {
        string task;
        int priority;
    };
    Task **H;
    int size;
    int top;
public:
    TaskScheduler(int size=10)
    {
        this->size=size;
        H=new Task*[size+1];
        top=0;
    }
private:
    int pushHeap(Task *p);
    Task* popHeap();
    friend ostream & operator<<(ostream &os,TaskScheduler::Task *p);
    friend ostream & operator<<(ostream &os,TaskScheduler p);
public:
    void addTask(string const &task,int priority);
    void completeTask();
    void getAllTasks(TaskScheduler);
};

void TaskScheduler::addTask(string const &task, int priority) {
    Task * temp=new Task;
    temp->task=task;
    temp->priority=priority;
    int r=pushHeap(temp);
    if(r==-1)
        cout<<"Memory Full. Please delete some tasks."<<endl;
    else
        cout<<"Task add succeeded"<<endl;
}

void TaskScheduler::completeTask() {
    Task* t=popHeap();
    if(t==nullptr)
        cout<<"All tasks completed. Please add some tasks to complete."<<endl;
    else {
        cout<<"Task "<<t->task<<" of priority "<<t->priority<<" completed."<<endl;
    }
}

void TaskScheduler::getAllTasks(TaskScheduler t) {
    cout<<t;
}

int TaskScheduler::pushHeap(TaskScheduler::Task *p) {
    if(top==size-1)
        return -1;
    else {
        H[++top]=p;
        int i=top;
        while(i/2>0 && (H[i/2]->priority<p->priority)) {
            H[i]=H[i/2];
            i/=2;
        }
        H[i]=p;
        return 0;
    }
}

TaskScheduler::Task *TaskScheduler::popHeap() {
    if(top==0)
        return nullptr;
    Task *temp = H[1];
    Task *p=H[top--];
    int i=1;
    int j=2*i;
    while(j<top) {
        if(H[j]->priority<H[j+1]->priority)
            j=j+1;
        if(H[j]->priority>p->priority) {
            H[i]=H[j];
            i=j;
            j=2*i;
        }
    }
    H[i]=p;
    return temp;
}

ostream &operator<<(ostream &os,TaskScheduler::Task *p)
{
    os<<"Task Name: "<<p->task<<endl<<"   Task Priority: "<<p->priority;
    return os;
}

ostream &operator<<(ostream &os, TaskScheduler p) {
    int i=1;
    if(p.top==0)cout<<"No tasks to Show"<<endl;
    while(i<=p.top) {
        cout<<i<<". "<<p.H[i]<<endl;
        i++;
    }
    return os;
}
