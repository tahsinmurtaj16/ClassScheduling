# ClassScheduling Assignment
Finding the optimum class scheduling algorithm

# Introduction
In many aspects, trying to schedule a class time is very similar to CPU scheduling. 
For example

1. Each class has a duration class time, similar to a process having a process burst time.
2. In some cases, high level courses has higher priority than others. Similarly, process with much more importance, has higher priority than others. 
3. For some classes, lecturers prefer to have morning classes instead of afternoon classes because they come to the office much earlier than other lecturers. Similarly, Some algorithms in CPU scheduling has specific arrival time, thus processes that arrices first usually gets to run first. 

However, there are significant difference between class scheduling and CPU scheduling. In CPU scheduling, an algorithm can be pre-emptive. Meaning a process can be stopped, and put on the waiting queue/ready queue until it gets scheduled again. In Class scheduling, it is non-preemptive. We cannot stop a class from running to allow another process to run. 

Additionally, we do not assume new classes to be introduced during scheduling, meaning, the scheduling would be final with the input given, and no new courses are introduced after the scheduling have been made. 


# Assignment

Your job is to propose the best scheduling algorithm to implement in finding the best Class Scheduling solution. 
Your choices of algorithms is using FCFS, Round-Robin, SJF, SRTF, or Priority Scheduling.  
As a hint, you can't use some algorithms, because they are pre-emptive scheduling algorithms. Which ones are they? 

## Input

Similar to a process, each class, will have the following members of integer values to consider, its course code, running time, and priority. 
We consider each course can be in the duration of 1 hour, 2 hours, or 3 hours at a time. We can therefore represent a course/class as a structure like the code 
given below. 

```
using namespace std;
 
struct Process
{
   int ccode;     // course code
   int duration;      // class duration
   int priority;  //priority
};
```

We can therefore, initialize a course with the codes given below. For example,

```
// courses CSC2201 with priority 2 for 3 hours, CSC3401 with priority 3 for 2 hours, and CSC1103 with priority 1 for 1 hour 
Process proc[] = {{2201,3,2}, {3401, 2, 3}, {1103, 1,1}};
```

You can access each member in the process by using the dot operator in c++. An example is given below. 

For simplicity, the code for FCFS is already given to you. 

## Output

## Analysis

## What to Submit

https://docs.github.com/en/enterprise/2.13/user/articles/cloning-a-repository
