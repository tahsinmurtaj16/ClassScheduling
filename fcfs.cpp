/* Simple C++ program for implementation 
of FCFS scheduling */

#include<iostream>

using namespace std;
 
// function to find the waiting time for all processes
void findWaitingTime(int processes[], int n, int bt[], int wt[])
{
    // waiting time for first process will be 0
    wt[0] = 0;
 
    // calculating waiting time
    for (int i = 1; i < n ; i++)
    {
        wt[i] =  bt[i-1] + wt[i-1];
    }
}
 
// function to calculate turn around time
void findTurnAroundTime( int processes[], int n, int bt[], int wt[], int tat[])
{
    // calculating turnaround time by adding
    // bt[i] + wt[i]
    for (int i = 0; i < n ; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
}

void findArrivalTime(int processes[], int n, int bt[],int at[])
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(at[i]<at[j])
            {
                temp=processes[j];
                processes[j]=processes[i];
                processes[i]=temp;
        
                temp=at[j];
                at[j]=at[i];
                at[i]=temp;
        
                temp=bt[j];	
                bt[j]=bt[i];
                bt[i]=temp;
            }
        }
    }
}
 
// function to calculate average time
void findAverageTime( int processes[], int n, int bt[],int at[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
 
    // function to find waiting time of all processes
    findWaitingTime(processes, n, bt, wt);
 
    // function to find turn around time for all processes
    findTurnAroundTime(processes, n, bt, wt, tat);
    
    findArrivalTime(processes, n, bt,at);
 
    // display processes along with all details
    cout << "Processes  "<<" Arrival time "<< " Burst time  "<< " Waiting time  " << " Turn around time\n";
 
    // calculate total waiting time and total turn around time
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "   " << processes[i] << "\t\t" <<at[i] <<"\t    "<< bt[i] <<"\t\t  "<< wt[i] <<"\t  " << tat[i] <<endl;
    }
 
    cout << "Average waiting time = "<< (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "<< (float)total_tat / (float)n;
}
 
// main function

// courses CSC2201 with priority 2 for 3 hours with prefered to start first, 
// CSC3401 with priority 3 for 2 hours prefered to start second, 
// // and CSC1103 with priority 1 for 1 hour 
// Process proc[] = {{2201,3,2,1}, {3401, 2, 3,2}, {1103, 1,1,3}};
int main()
{
    // process ids
    // we change processes ids to CourseCode
    int processes[] = { 2201, 3401, 1103, 3405};
    
    int arrival_time[]={1,2,3,4};
    int n = sizeof processes / sizeof processes[0];
 
    // burst time of all processes
    // we change burst_time to Class duration
    int  burst_time[] = {2, 3, 2, 1};
 
    findAverageTime(processes, n,  burst_time,arrival_time);
    
    return 0;
}
