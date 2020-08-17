# Introduction

The chosen algorithms are : FCFS , SJF ,and Priority scheduling .

FCFS: First come first serve (FCFS) scheduling algorithm simply schedules the jobs according to their arrival time. The job which comes first in the ready queue will get the CPU first. The lesser the arrival time of the job, the sooner will the job get the CPU. FCFS scheduling may cause the problem of starvation if the burst time of the first process is the longest among all the jobs.

SJF: SJF scheduling algorithm, schedules the processes according to their burst time.In SJF scheduling, the process with the lowest burst time, among the list of available processes in the ready queue, is going to be scheduled next.

Priority Scheduling : In Priority scheduling, there is a priority number assigned to each process. In some systems, the lower the number, the higher the priority. While, in the others, the higher the number, the higher will be the priority. The Process with the higher priority among the available processes is given the CPU.

# Consideration

Here, are pros/benefits of Non-preemptive Scheduling method:

--Offers low scheduling overhead
--Tends to offer high throughput
--It is conceptually very simple method
--Less computational resources need for Scheduling


# Analysis

## FCFS Input
Course 1 : 2201 
Duration: 2
Arrival time:1

Course 2:3401
Duration: 3
Arrival time:2

Course 3:1103
Duration: 2
Arrival time:3

Course 4:3405
Duration: 1
Arrival time:4

## FCFS output
Arrival order: 2201 , 3401 , 1103 , 3405 

Average waiting time: 3.5
Average turn around time:5.5

Hence , FCFS has the highest wating time and  turn around time than Priority scheduling ,and SJF.

## Priority Input
Enter the number of Classes: 4                                                           
Enter Class 1 Subject Code: 2201                                                         
Enter Class 2 Subject Code: 3401                                                         
Enter Class 3 Subject Code: 1103                                                         
Enter Class 4 Subject Code: 3405 

Enter Class duration for 2201 : 2                                                        
Enter arrival time for 2201 : 1                                                          
Enter Class priority for 2201 : 1  

Enter Class duration for 3401 : 3                                                        
Enter arrival time for 3401 : 2                                                          
Enter Class priority for 3401 : 3  

Enter Class duration for 1103 : 2                                                        
Enter arrival time for 1103 : 3                                                          
Enter Class priority for 1103 : 4  

Enter Class duration for 3405 : 1                                                        
Enter arrival time for 3405 : 4                                                          
Enter Class priority for 3405 : 5  
## Priority output
PID     Priority        Burst Time      Arrival Time    Wait Time       Turnaround Time  
Coure 2201      1               2               1               0               2        
Coure 3401      3               3               2               0               3        
Coure 1103      4               2               3               2               4        
Coure 3405      5               1               4               3               4        
AverageTurnAround: 3                                                                     
AverageWaiting Time: 1    

Priority scheduling has lower turn around time than FCFS ,but slightly higher than SJF .And , Lower waiting time than FCFS ,but same as SJF.

## SJF input
Shortest Job First Scheduling ( NP )                                                                                                                      
Enter the No. of Classes: 4                                                                                                                               
Enter the duration time of Class 1 : 2                                                                                                                    
Enter the arrival time of Class 1 : 1                                                                                                                     
Enter the duration time of Class 2 : 3  
Enter the arrival time of Class 2 : 2                                                                                                                     
Enter the duration time of Class 3 : 2                                                                                                                    
Enter the arrival time of Class 3 : 3                                                                                                                     
Enter the duration time of Class 4 : 1                                                                                                                    
Enter the arrival time of Class 4 : 4   
## SJF output
        PROCESS  ARRIVAL TIME    BURST TIME      WAITING TIME    TURNAROUND TIME                                                                          
                                                                                                                                                          
        P1              1               2               0               1                                                                                 
        P2              2               3               0               3                                                                                 
        P4              4               1               1               2                                                                                 
        P3              3               2               3               5                                                                                 
Average Waiting Time --1                                                                                                                                  
Average Turnaround Time --2.75                                                                                                                            
# Conclusion                                                                            
Since SJF has the lowest turn around time and waiting than FCFS , and priority scheduling ,that's why , SJF is the best scheduling algorithm.
