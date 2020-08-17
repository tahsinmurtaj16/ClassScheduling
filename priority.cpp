#include <iostream>
using namespace std;

int min(int burstTime[], int arrivalTime[], int priority[], int current, int size)
{
    int min = 0;
    for (int i = 1; i < size; i++) {
        if (burstTime[min] == 0) min = i;
        if (priority[i] < priority[min] && current >= arrivalTime[i] && burstTime[i] != 0) min = i;
    }
    return min;
}

void incWaitTime(int index, int current, int waitTime[], int arrivalTime[], int burstTime[], int size)
{
    for (int i = 0; i < size; i++) {
        if (i != index && current >= arrivalTime[i] && burstTime[i] > 0) waitTime[i]++;
    }
}

void display(int burstTime[], int arrivalTime[], int waitTime[], int turnaroundTime[], int priority[], int size, int CourseCode[] )
{
    cout << "\n";
    cout << "PID\tPriority\tBurst Time\tArrival Time\tWait Time\tTurnaround Time\n";
    int AvgWaitTime=0, AvgTurnAround=0;
    for (int i = 0; i < size; i++)
    {
        cout << "Coure " << CourseCode[i] << "\t" << priority[i] << "\t\t" << burstTime[i] << "\t\t" << arrivalTime[i] << "\t\t" << waitTime[i] << "\t\t" << turnaroundTime[i] << '\n';
        AvgTurnAround += turnaroundTime[i];
        AvgWaitTime += waitTime[i];
    }
    cout << "AverageTurnAround: " << float(AvgTurnAround/size) <<"\n";
    cout << "AverageWaiting Time: " << float(AvgWaitTime/size) <<"\n";
}

void prioritySched(int burstTime[], int waitTime[], int arrivalTime[], int turnaroundTime[], int priority[], int totalBurst, int size, int CourseCode[])
{
    int index, tempBurstTime[size];
    for (int i = 0; i < size; i++)
        tempBurstTime[i] = burstTime[i];
    index = min(tempBurstTime, arrivalTime, priority, 0, size);
    for (int i = 0; i <= totalBurst; i++) {
        if (tempBurstTime[index] == 0) index = min(tempBurstTime, arrivalTime, priority, i, size);

        tempBurstTime[index]--;
        incWaitTime(index, i, waitTime, arrivalTime, tempBurstTime, size);
    }
    for (int i = 0; i < size; i++)
        turnaroundTime[i] = waitTime[i] + burstTime[i];
    display(burstTime, arrivalTime, waitTime, turnaroundTime, priority, size, CourseCode);
}

int main()
{
    cout<<"Enter the number of Classes: ";
    int size;
    cin >> size;
    
    int burstTime[size], arrivalTime[size], waitTime[size], turnaroundTime[size], priority[size], totalBurst = 0, CourseCode[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Class " << i+1 << " Subject Code: ";
        cin >> CourseCode[i];
    }
    
    for (int i = 0; i < size; i++) {
        cout << "Enter Class duration for " << CourseCode[i] << " : ";
        cin >> burstTime[i];
        totalBurst += burstTime[i];
        cout << "Enter arrival time for " << CourseCode[i] << " : ";
        cin >> arrivalTime[i];
        cout << "Enter Class priority for " << CourseCode[i] << " : ";
        cin >> priority[i];
        waitTime[i] = 0;
    }
    prioritySched(burstTime, waitTime, arrivalTime, turnaroundTime, priority, totalBurst, size, CourseCode);
    return 0;
}
