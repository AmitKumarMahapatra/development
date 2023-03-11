# Job Scheduling with Deadline

## Problem Statement
Given an array of jobs where every job has a deadline and associated profit if the job is finished before the deadline. It is also given that every job takes a single unit of time, so the minimum possible deadline for any job is 1. Maximize the total profit if only one job can be scheduled at a time.

### Constraints
- All jobs arrived at the same time
- Every job's running time is 1 unit.
- There is no preemption.
- One job can be performed at one time.

### Existing Scheduling Algorithm
- This problem is very similar to the existing scheduling algorithms we have in [CPU Scheduling](). However none of the scheduling algorithm will fit because of the constraint.
- As there is no preemption, [Round Robin]() will fail.
- As all the jobs are arrived at the same time, [FCFS]()  will fail.
- As the running time of each job is 1 unit, so [SJF]() will fail.

## Example 1

### Question
| Job No   | 1    | 2     | 3     | 4    |
| -------- | ---- | ----- | ----- | ---- |
| Profit   | $80$ | $200$ | $150$ | $70$ |
| Deadline | $2 $ | $1  $ | $2  $ | $1 $ |

### Solution

#### Brute Force Approach
- In this problem, the feasible solutions in the correct order are
    - J2 then J1
    - J1 then J3
    - J3 then J1
    - J4 then J1
    - J2 then J3
    - J4 then J3
    - Only J1 *(trivial)*
    - Only J2 *(trivial)*
    - Only J3 *(trivial)*
    - Only J4 *(trivial)*
- But the greedy technique will provide the optimal solution using shortcut, so we don't have to evaluate all feasible solution and find out the optimal ones.

##### Implementation

#### Greedy Approach
- **STEP 1 :** Take an array with number of elements = $max(Deadline)$

    | Slot No | 1 | 2 |
    | ------- | - | - |
    | Job No  |   |   |

- **STEP 2 :** Fill the slots from last to first in a way that, slot-x gets booked for a job having a deadline $\geq x$ which has maximum profit.

    | Slot No | 1     | 2     |
    | ------- | ----- | ----- |
    | Job No  | $2  $ | $3  $ |
    | Profit  | $200$ | $150$ |

- To find the most fitted job for every slot, we need to iterate the array containing all the job with their corresponding profit.

- So maximum profit we can get is 350.

## Example 2

### Question

| Job No   | 1    | 2    | 3     | 4    | 5    | 6    | 7    |
| -------- | ---- | ---- | ----- | ---- | ---- | ---- | ---- |
| Profit   | $80$ | $20$ | $150$ | $25$ | $95$ | $15$ | $70$ |
| Deadline | $5 $ | $3 $ | $1  $ | $4 $ | $3 $ | $2 $ | $4 $ |

### Solution using Greedy Approach

- **STEP 1**

    | Slot No | 1 | 2 | 3 | 4 | 5 |
    | ------- | - | - | - | - | - |
    | Job No  |   |   |   |   |   |

- **STEP 2** 

    | Slot No | 1   | 2  | 3  | 4  | 5  |
    | ------- | --- | -- | -- | -- | -- |
    | Job No  | 3   | 4  | 5  | 7  | 1  |
    | Profit  | 150 | 25 | 95 | 70 | 80 |

- So maximum profit we can get is 420.
- J2 and J6 are left out jobs. Also called *penalty*.

#### Note
The max profit job will always come in the sequence, no matter what happens. BUT WHY ??


## Example 3

### Question

|          |    |    |    |    |    |    |    |    |    |
| -------- | -- | -- | -- | -- | -- | -- | -- | -- | -- |
| Job No   | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  |
| Profit   | 55 | 77 | 11 | 39 | 65 | 95 | 25 | 10 | 88 |
| Deadline | 7  | 3  | 4  | 5  | 1  | 5  | 4  | 2  | 3  |

### Solution Using Greedy Approach

- **STEP 1**

    |         |   |   |   |   |   |   |   |
    | ------- | - | - | - | - | - | - | - |
    | Slot No | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
    | Job No  |   |   |   |   |   |   |   |

- **STEP 2**

    |         |      |      |      |      |      |         |      |
    | ------- | ---- | ---- | ---- | ---- | ---- | ------- | ---- |
    | Slot No | $1 $ | $2 $ | $3 $ | $4 $ | $5 $ | $6    $ | $7 $ |
    | Job No  | $5 $ | $2 $ | $9 $ | $4 $ | $6 $ | Empty   | $1 $ |
    | Profit  | $65$ | $77$ | $88$ | $39$ | $95$ | $0    $ | $55$ |

- We can shift the last job to the earlier empty slot.

    |         |      |      |      |      |      |      |
    | ------- | ---- | ---- | ---- | ---- | ---- | ---- |
    | Slot No | $1 $ | $2 $ | $3 $ | $4 $ | $5 $ | $6 $ |
    | Job No  | $5 $ | $2 $ | $9 $ | $4 $ | $6 $ | $1 $ |
    | Profit  | $65$ | $77$ | $88$ | $39$ | $95$ | $55$ |

- So maximum profit we can get is 420.

### Implementation

## Analysis

### Time Complexity

$$
\begin{align*}
T(n) & = O(max(Deadline)) * O(n) \\
T(n) & = O(n) * O(n) \ \ \{if \ no \ of \ jobs \ = \ max(Deadline)\}\\
T(n) & = O(n^2) \ in \ Every \ case
\end{align*}
$$

## Improvement
- We can make some improvement in STEP 2.
- If we sort the jobs in decreasing order of their profit, finding the best fitted job for a slot might take $O(1)$ time for most of the slots and we can achieve a best case.
- This is because, once we find a fit job, we can assume it is the best fit, because it is already giving the maximum profit.
- So the best case time complexity would be $O(nlog n) + O(n) *O(1) = O(nlog n)$
- But the worst case will remain same as $O(n^2)$
- One key point to note here is, even if the array is sorted in this case, we can not apply [Binary Search](). Because, array is sorted based on profit and we are finding the best fit based on deadline.

### Improved Step 2 for Example 3

|         |        |        |        |        |        |         |        |
| ------- | ------ | ------ | ------ | ------ | ------ | ------- | ------ |
| Slot No | $1 $   | $2 $   | $3 $   | $4 $   | $5 $   | $6    $ | $7 $   |
| Job No  | $5 $   | $2 $   | $9 $   | $4 $   | $6 $   | $Empty$ | $1 $   |
| Profit  | $65$   | $77$   | $88$   | $39$   | $95$   | $0    $ | $55$   |
| $T(n)$  | $O(1)$ | $O(1)$ | $O(1)$ | $O(1)$ | $O(1)$ | $O(n)$  | $O(n)$ |


#### Analysis

- In Worst / Average Case

    $$
    \begin{align*}
    T(n) & = O(max(Deadline)) * O(n) \\
    T(n) & = O(n) * O(n) \ \ \{if \ no \ of \ jobs \ = \ max(Deadline)\}\\
    T(n) & = O(n^2) \\
    \end{align*} \\
    $$

- In Best Case

    $$
    \begin{align*}
    T(n) & = O(max(Deadline)) * O(1) + O(nlogn) \\
    T(n) & = O(n) * O(1) + O(nlogn) \ \ \{if \ no \ of \ jobs \ = \ max(Deadline)\}\\
    T(n) & = O(nlogn)
    \end{align*} \\
    $$

### Implementation


## Key Notes

- Sometimes in exam, the sequence provided in the options might not match our result. In that case we can swap the appropriate jobs to choose the right answer.

    |          |     |     |     |     |     |     |     |
    | -------- | --- | --- | --- | --- | --- | --- | --- |
    | Job No   | $5$ | $2$ | $9$ | $4$ | $5$ | $6$ | $7$ |
    | Deadline | $1$ | $3$ | $3$ | $5$ | $5$ | $6$ | $7$ |

- In the above case, any of the below 4 sequence can be the answer.
    - (5,2,9,4,5,6,7)
    - (5,2,9,5,4,6,7)
    - (5,9,2,4,5,6,7)
    - (5,9,2,5,4,6,7)

- If all deadlines are same, the $6!$ sequences are possible in this case.

- In exam, from this problem, 2 Questions are frequently asked with small twists.
    - What is the optimal solution (not necessarily unique)
    - what is the sequence