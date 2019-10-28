# Operating-Systems-Part-1

# Important Notes 

1) Any I/O Device will have a buffer(memory or register) associated with it 

2)CPU = Central Process Unit 

3)Memory->1)RAM
          2)Hard Disk 
          3)Cache
          4)Registers
          
4) RAM                              HARD DISK
   -Not permanent                   -Permanent
   -Fast                            -Slow
   -Costly                          -Cheaper
   
5) Size RAM < Size HARD DISK 

6)CPU understand 0's and 1's

7)Hello.c -> Compiler -> Machine Code (executable code or low level program) present in Hard Disk 

8)CPU cannot access hard disk directly 

9)Short-term-scheduler = Decides which process will access the CPU first from RAM ( RAM -> CPU)

10)Long-term-scheduler = Decides which from programs will move to RAM from HARD DISK (hARD DISK -> RAM)

11)Steps 9 and 10 is Resource Allocation 

12)Operating System = Resource Manager

13)Operating System Functionality -> 1) Resource Allocation 
                                     2)Resource Management
                                     
14)Operating System is a core which have a lots of functions 

15)Operating System takes a set of addresses this called OS code 

16)RAM space  = 1)OS space
                2)User space
                
17)When execution of a program is done then removed from the RAM 

Example of Calculator 

Step 1 )If i write 2 then 010 move from keyboard buffer to RAM then if i write 3 the 011 overwrite 010 and move from keyboard buffer to RAM

Step 2)CPU have registers ...then Operations done by CPU ->Result overwritten in any Register depends on implementation  

Step 3) CPU have 2 parts ->1)Control Unit (CU)
                           2)Arithmetic Logical Unit (ALU)

Step 4)Arithmetic and Logic Unit -> Operations ->1)Addition 
                                                 2)Division e.t.c
                                                 
Step 5)From register of CPU ,placed inside the RAM 

Step 6) Result placed into Monitors Buffer 

18)Hard Disk act as ->Input Device
                    ->Output Device 
                    
19)Turn-Around-Time = Waiting time + Burst time + I/O time

20)States of a process
                              1)New Sate 
                              2)Ready State
                              3)Running Sate 
                              4)Waiting State
                              5)Terminated State
                              6)Suspend State Ready 
                              7)Suspend Wait State

            
21)Degree of Multiprogramming  = size of RAM / size of single Process(Assumption ...size of all processes are the same )

22)Types od Operating Systems : 1) Batch os -> 1 CPU
                                2) Multiprogramming os -> 1 CPU
                                3) Multiprocessing os -> More than 1 CPU 
                                
 23)This Program for which the process is created is also called as "Passive Entity"
 
 24)The process which is actually created for the program is also called as "Active Entity"
 
 25)Dynamically Allocating Memory : Allocating Memory at the Runtime with malloc function
 
 26)Stack Space and Heap Space depends on the program
 
 27)For every process we have a process control block PCB(stack,heap,static/globalvariables,prgram)
 
 28)local variables allocated in the stack 
 
 29)Scheduling Algorithms ->1)FCFS
                            2)SJF
                            
                            
 30)Process Attributes: 1)Process id 
                        2)Program Counter
                        3)Process State
                        4)General Purpose Registers
                        5)Priority
                        6)List of open files
                        7)List of open devices
                        8)Protection 
                        
31)Program Counter : A register which will be maintained closer to the CPU 

32)General Purpose Registers : Set of registers values of the program 

33)Protection : For every process our os code needs to make sure that a process is not using the space of another process...ok?

34)Context of the process P1 ->1)process id
                               2)program counter
                               3)process state
                               4)General Purpose Registers
                               5)Priority
                               6)List of open files 
                               7)List of open devices 
                               8)Protection 
                               
35) Parts of OS code -> 1)Long-Term-Scheduler
                     -> 2)Short-Term-Scheduler
                     -> 3)Medium-Term-Scheduler
                     
36)From Hard Disk which processes will be moved into the RAM is deciding by something called as Long-Term-Scheduler

37)Every process has a priority number

38)Medium-Term-Scheduler -> A function of OS which decide which process should swap-out of RAM so the higher priority process swap-into the RAM 

39)swap-in -> from HARD DISK to RAM 
   swap-out -> from RAM to HARD DISK
40)Context - Switching : Let's assume CPU execute p1 and whenever p4 comes into RAM who's priority higher than p1,p1 has to be preemtive and context of p1 saved and p4 has to be scheduled by CPU this call as context-switching 

41)Various times related to a process 
                                        1)Arrival Time 
                                        2)Burst Time(also calleds as Execution time)
                                        3)Completion time
                                        4)Turn-Around-Time
                                        5)Waiting-Time
                                        6)Response Time
                                        7)I/O time
                                        
 42) Arrival Time = point-in-time which process is moved from Hard Disk to RAM 
 
 43)Turn-Around-Time = The total time which the process is inside the RAM 
    Turn-Around-Time = Completion Time - Arrival Time
    Turn-Around-Time = Burst Time + I/O Time + Waiting Time 
    
 44)Waiting Time =  time that a process spend inside the RAM without doing anything 
 
 45) Point-In-Time               Duration-in-time
                                        
          1) Arrival Time               1)Burst Time
                                        
          2) Execution Time             2)Turn Around Time 
                    
                                        3)Waiting Time
                                        
                                        4)Response Time 
 46) Schedule Length = Completion Time of last process - Arrival Time of 1st Process
 
 47) Throughput = Num Of Processes / Schedule Length
 
 48) Response Time = Waiting time of that process until it gets the CPU for the first time 
 
 49) In any Non-Preemtive Scheduling Algorithm(e.g FCFS,SJF) , Response Time = Waiting Time 
 
 50) Context Switching Overhead = 0 time unit ... then Useful Time Of CPU = 100%
 
 51) While ( Context Switching Overhead . Increase) then (CPU Efficiency and Computer Speed Decrease)  
 
 52) Starvation Problem : An Algorithm suffers from starvation problem if there is a chance for a process in the 
                          the ready state to wait indefinitely to get the CPU 
                          
 53) Any kind of Algorithm which follow the concept of FIFO does not suffer from Starvation Problem 
 
     Algorithms                                    Problem of Starvation 
     
     
 54) Shortest-Job-First                            YES Disadvantage
      
     Shortest Remaining Time First                 YES Disadvantage 
 
     First Come First Served                       No Advantage 
