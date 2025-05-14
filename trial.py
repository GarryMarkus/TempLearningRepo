n = int(input("Enter the number of processes: "))
processes = [i + 1 for i in range(n)]
arrival_time = []
burst_time = []

for i in range(n):
    at, bt = map(int, input(f"Enter Arrival Time and Burst Time for P{processes[i]}: ").split())
    arrival_time.append(at)
    burst_time.append(bt)

remaining_time = burst_time[:]
completion_time = [0] * n
waiting_time = [0] * n
turnaround_time = [0] * n
is_completed = [False] * n

current_time = 0
completed = 0

while completed != n:
    idx = -1
    min_remaining = float('inf')

    for i in range(n):
        if arrival_time[i] <= current_time and not is_completed[i]:
            if remaining_time[i] < min_remaining:
                min_remaining = remaining_time[i]
                idx = i
            elif remaining_time[i] == min_remaining:
                if arrival_time[i] < arrival_time[idx]:
                    idx = i

    if idx != -1:
        remaining_time[idx] -= 1
        current_time += 1

        if remaining_time[idx] == 0:
            completion_time[idx] = current_time
            turnaround_time[idx] = completion_time[idx] - arrival_time[idx]
            waiting_time[idx] = turnaround_time[idx] - burst_time[idx]
            is_completed[idx] = True
            completed += 1
    else:
        current_time += 1
for i in range(n):
    for j in range(0, n - i - 1):
       if (completion_time[j] > completion_time[j + 1]):
            completion_time[j], completion_time[j + 1] = completion_time[j + 1], completion_time[j]
            arrival_time[j], arrival_time[j + 1] = arrival_time[j + 1], arrival_time[j]
            burst_time[j], burst_time[j + 1] = burst_time[j + 1], burst_time[j]
            processes[j], processes[j + 1] = processes[j + 1], processes[j]
print("\nProcess\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time")
for i in range(n):
    print(f"P{processes[i]}\t{arrival_time[i]}\t\t{burst_time[i]}\t\t{completion_time[i]}\t\t{turnaround_time[i]}\t\t{waiting_time[i]}\t")

avg_wt = sum(waiting_time) / n
avg_tat = sum(turnaround_time) / n

print(f"\nAverage Waiting Time: {avg_wt:.2f}")
print(f"Average Turnaround Time: {avg_tat:.2f}")
