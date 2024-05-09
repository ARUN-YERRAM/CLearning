#include <stdio.h>
#include <stdbool.h>

// Structure to represent a process
typedef struct {
    int id;        // Process ID
    int arrival;   // Arrival time
    int burst;     // Burst time
    int completion; // Completion time
    int turnaround; // Turnaround time
    int waiting;   // Waiting time
    bool done;     // Whether the process has been completed
} Process;

// Function to find the process with the shortest burst time
int findShortestProcess(Process processes[], int n, int current_time) {
    int min_burst = 9999;
    int min_index = -1;
    for (int i = 0; i < n; i++) {
        if (!processes[i].done && processes[i].arrival <= current_time && processes[i].burst < min_burst) {
            min_burst = processes[i].burst;
            min_index = i;
        }
    }
    return min_index;
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    Process processes[n];

    // Input process details
    for (int i = 0; i < n; i++) {
        printf("Enter arrival time and burst time for process %d: ", i + 1);
        scanf("%d %d", &processes[i].arrival, &processes[i].burst);
        processes[i].id = i + 1;
        processes[i].done = false;
    }

    int current_time = 0;
    int completed_processes = 0;

    // Initialize turnaround time and waiting time sums
    int total_turnaround_time = 0;
    int total_waiting_time = 0;

    while (completed_processes < n) {
        int index = findShortestProcess(processes, n, current_time);

        if (index == -1) {
            current_time++; // If no process is available, increment the time
        } else {
            // Process the selected process
            current_time += processes[index].burst;
            processes[index].completion = current_time;
            processes[index].turnaround = processes[index].completion - processes[index].arrival;
            processes[index].waiting = processes[index].turnaround - processes[index].burst;
            processes[index].done = true;
            completed_processes++;
            // Add to totals
            total_turnaround_time += processes[index].turnaround;
            total_waiting_time += processes[index].waiting;
        }
    }

    printf("Process\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t\t%d\t\t%d\n",
               processes[i].id,
               processes[i].arrival,
               processes[i].burst,
               processes[i].completion,
               processes[i].turnaround,
               processes[i].waiting);
    }

    // Calculate averages
    float avg_turnaround_time = (float) total_turnaround_time / n;
    float avg_waiting_time = (float) total_waiting_time / n;

    printf("\nAverage Turnaround Time: %.2f\n", avg_turnaround_time);
    printf("Average Waiting Time: %.2f\n", avg_waiting_time);

    return 0;
}