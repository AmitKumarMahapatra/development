# Fractional Knapsack Problem

## Problem Statement
Given the weights and values of $N$ items, in the form of $(value, weight)$. Put these items in a knapsack of capacity $W$ to get the maximum total value in the knapsack. We can break items for maximizing the total value of the knapsack.

## Example 1

### Question

| Object No | 1     | 2     | 3     | 4     |
| --------- | ----- | ----- | ----- | ----- |
| Profit    | $280$ | $200$ | $300$ | $270$ |
| Weight    | $12 $ | $5  $ | $15 $ | $8  $ |

If knapsack Size is 30, then find what will be the maximum possible profit with the fraction of each item.

### Solution

#### Find the (Profit / Weight) Ratio in Descending Order (STEP 1 and STEP 2)

| Object No       | 2     | 4       | 1       | 3     |
| --------------- | ----- | ------- | ------- | ----- |
| Profit          | $200$ | $270  $ | $280  $ | $300$ |
| Weight          | $5  $ | $8    $ | $12   $ | $15 $ |
| Profit / Weight | $40 $ | $33.75$ | $23.33$ | $20 $ |

#### Insert Objects in Greedy Approach (STEP 3)

| Object No | Possible Fraction | Weight Inserted | Knapsack Mass Left | Profit Gained              |
| --------- | ----------------- | --------------- | ------------------ | -------------------------- |
| Empty     | NA                | $0$             | $30$               | $0$                        |
| 2         | $1$               | $5 $            | $25$               | $200$                      |
| 4         | $1$               | $8 $            | $17$               | $270$                      |
| 1         | $1$               | $12$            | $5 $               | $300$                      |
| 3         | $\frac{5}{15}$    | 5               | 0                  | $\frac{5}{15} * 300 = 100$ |

So we can get maximum profit of $870$ if we take the object $(1,2,3,4)$ in fraction in $(1,1,\frac{1}{3},1)$

## Example 2

### Question

| Object No | 1    | 2    | 3     | 4    | 5    | 6    | 7    |
| --------- | ---- | ---- | ----- | ---- | ---- | ---- | ---- |
| Profit    | $25$ | $55$ | $100$ | $15$ | $95$ | $65$ | $35$ |
| Weight    | $2 $ | $4 $ | $3  $ | $2 $ | $5 $ | $4 $ | $3 $ |

If knapsack Size is 17, then find what will be the maximum possible profit with the fraction of each item.

### Solution

#### Find the (Profit / Weight) Ratio in Descending Order (STEP 1 and STEP 2)

| Object No       | 3       | 5    | 6       | 2       | 1      | 7       | 4     |
| --------------- | ------- | ---- | ------- | ------- | ------ | ------- | ----- |
| Profit          | $100  $ | $95$ | $65   $ | $55   $ | $25  $ | $35   $ | $15 $ |
| Weight          | $3    $ | $5 $ | $4    $ | $4    $ | $2   $ | $3    $ | $2  $ |
| Profit / Weight | $33.33$ | $19$ | $16.25$ | $13.75$ | $12.5$ | $11.66$ | $7.5$ |

#### Insert Objects in Greedy Approach (STEP 3)

| Object No | Possible Fraction | Weight Inserted | Knapsack Mass Left | Profit Gained |
| --------- | ----------------- | --------------- | ------------------ | ------------- |
| Empty     |  NA               | $0$             | $17$               | $0   $        |
| 3         | $1 $              | $3$             | $14$               | $100 $        |
| 5         | $1 $              | $5$             | $9 $               | $95  $        |
| 6         | $1 $              | $4$             | $5 $               | $65  $        |
| 2         | $1 $              | $4$             | $1 $               | $55  $        |
| 1         | $\frac{1}{2}$     | $1$             | $0 $               | $12.5$        |

So we can get maximum profit of $327.5$ if we take the object $(1,2,3,4,5,6,7)$ in fraction in $(\frac{1}{2},1,1,0,1,1,0)$

## Implementation
```python
```

## Analysis

| Steps                                             | $T(n)$              |
| ------------------------------------------------- | ------------------- |
| Finding $(Profit / Weight)$ ratio for each object | $\Theta(n)$         |
| Sort objects as per $(Profit / Weight)$ ratio     | $\Theta(n * log n)$ |
| Taking objects in Greedy Approach                 | $O(n)$              |
| $T(n)$ in every case                              | $\Theta(n * log n)$ |

## Note
- By default if Knapsack Problem is given without any specification, then it is assumed to be Fractional Knapsack.
- In this fractional knapsack problem, we have infinite feasible solutions, because, fraction is allowed. However in case of [0-1 Knapsack]() problem, we have $2^n$ feasible solutions.
- By using Greedy approach, we did not find out all the optimal solutions. We got only 1 solution. Because greedy technique is a shortcut.
- As it is a shortcut, this technique will not give solution to all optimization problem. Only [selected problems](../chapter_1/introduction.md#applications) can be solved using this techniques.
- While sorting, we used an algorithm which gives $\Theta(n * log n)$ time in every case, which is Merge Sort. We did not use Quick Sort, because, we cannot ensure that the array will not be sorted. We should use Quick sort only if we have this ensured beforehand that the input array is not sorted.
- In the algorithm, while choosing items, we are always choosing the item which has the maximum (profit / weight) ratio. So in this case, instead of sorting the array based on (profit / weight) ratio, we could build a max heap and fetch maximum element from the heap every time. However, that will also take the same amount of time. Below is the implementation for that.

### Implementation using Heap

```python
```