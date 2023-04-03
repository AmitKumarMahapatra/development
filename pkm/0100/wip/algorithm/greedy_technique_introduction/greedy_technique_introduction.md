# Greedy Technique

## Theory
- It is another technique or you can say template (like Divide and Conquer) for solving some specific type of problem.
- Most of the problems which can be solved by Greedy Technique, contains $n$ numbers of inputs and our objective is to find out subset or subsets, which will satisfy our condition and optimize our goal.

### Basics

#### Solution Space
- A set of all possible solution over the given input is called Solution Space.

#### Feasible Solution
- A subset of Solution Space, which will satisfy our condition is called Feasible Solution. 

#### Optimal Solution
- A subset of Feasible solution which maximize our goal is called Optimal Solution.

### Diagram
![Insert Ven-Diagram here]()

### Example

#### Problem Statement
Say we have to find out the top 3 students, each having more than $90\%$ mark, out of 10 students in a class.

#### Solution Space
Choosing 3 students out of 10 is possible in $^{10}C_{3} = 120$

#### Feasible Solution
Say out of 10 students, we have 5 students which satisfy the $90\%$ condition.
So Feasible solution will be $^{5}C_{3} = 10$

#### Optimal Solution
We need top 3, so among the 5 students, we will choose top 3 students, based on there marks and that will be our Optimal Solution.
It could be more than 1. See the example below

| Student No | 1  | 2  | 3  | 4  | 5  |
| ---------- | -- | -- | -- | -- | -- |
| Mark       | 95 | 94 | 92 | 92 | 92 |

So Optimal Solutions are $(1,2,3)$ , $(1,2,4)$ and $(1,2,5)$

## Applications
- Knapsack Problem
- Job Sequencing with Deadline
- Huffman Coding
- Optimal Merge Pattern
- Minimum-cost Spanning Tree
    - Prim's Algorithm
    - Krushkal's Algorithm
- Single Source Shortest Path
    - Dijkstra's Algorithm
    - Bellman Ford Algorithm
    - Breadth First Search / Traversal

### Note
- Prim's Algorithm and Dijkstra's Algorithm are almost similar.
- Huffman Coding and Optimal Merge Pattern are almost similar.

## Note
- One of the Easiest Topic.
- In GATE exam, from this topic, max 4 marks can be asked.
- 2 Most important applications are *MST* and *Single Source Shortest Path*
- Numerical Problems will be asked mostly.