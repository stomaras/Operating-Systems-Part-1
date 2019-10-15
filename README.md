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
