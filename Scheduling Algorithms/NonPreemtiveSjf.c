/*C program to implement non-preemtive sjf without arrival time*/

#include<stdio.h>
#include<stdlib.h>
#define max 30

void main(){

	int i,j,n,t,p[max],bt[max],wt[max],tat[max];
	float awt=0,atat=0;
	
	printf("Enter the number of process:\n");
	scanf("%d",&n);
	printf("Enter the process number");
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	printf("Enter the burst time of the process");
	for(i=0;i<n;i++){
		scanf("%d",&bt[i]);
	}

	// applying bubble sort technique to sort according to their burst time
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(bt[j]>bt[j+1]){
				t=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=t;

				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	printf("process \t burst time \t waiting time \t turn around time\n");
	
	for(int i=0;i<n;i++){
		wt[i]=0;
		tat[i]=0;
		for(int j=0;j<i;j++){
			wt[i]=wt[i]+bt[j];
		}
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("%d\t %d\t %d\t %d\t",p[i],bt[i],wt[i],tat[i]);
	}
	awt = awt/n;
	atat = atat/n;
	printf("Average waiting time =%f\n",awt);
	printf("Average turn around time=%f\n",atat);
	

}
