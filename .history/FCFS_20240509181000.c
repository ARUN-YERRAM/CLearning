#include <stdio.h>
int main()
{
    int noOfProcess;
	printf("Enter no of Processes: ");
	scanf("%d", &noOfProcess);
	
	int burstTime[noOfProcess];
	int arrivalTime[noOfProcess];
	// getting burst times
	for (int i = 0; i < noOfProcess; i++){
		printf("Enter the burst time of Processes %d : ", i);
		scanf("%d", &burstTime[i]);
		// arrival time set to 0
		arrivalTime[i] = 0;
	}
	
	int waitingTime[noOfProcess];
	int turnAroundTime[noOfProcess];
	int completionTime[noOfProcess];
	int responseTime[noOfProcess];
	int current_end = 0;
	printf("Gantt Chart:\n");
	printf("Process\tAT\tBT\tCT\tTAT\tWT\tRT\n");
	for (int i = 0; i < noOfProcess; i++){
		completionTime[i] =  burstTime[i] + current_end;
		turnAroundTime[i] =  completionTime[i] - arrivalTime[i];
		waitingTime[i] = turnAroundTime[i] - burstTime[i];
		responseTime[i] = waitingTime[i];
		current_end = completionTime[i];
		printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n", i, arrivalTime[i], burstTime[i], completionTime[i], turnAroundTime[i], waitingTime[i], responseTime[i]);
	}
	
	// Average
	float totalTAT = 0;
	float totalWT = 0;
	
	for (int i = 0; i < noOfProcess; i++){
		totalTAT += turnAroundTime[i];
		totalWT += waitingTime[i];
	}
	float averageTAT = totalTAT/noOfProcess;
	float averageWT = totalWT/noOfProcess;
	printf("\nAverage Turn Around Time: %2f\n", averageTAT);
	printf("Average Waiting Time %2f\n",averageWt)
}