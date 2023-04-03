## Algorithm Definition

It is a combination of a **sequence** of **finite steps** to **solve a problem**.

- **sequence** : You cannot swap 2 logical steps.
- **finite steps** : Every algorithm should be of finite steps and every step must be mandatory or else it is not required in the algorithm itself.
- **solve a problem** : The algorithm must be solving a problem.

## Properties of Algorithm

### Property 1

It should terminate after a finite time. 
```python
while(True):
  print("Infinity")
```
If a code has finite steps, it is not necessary that it will terminate in finite time.
The above code will not terminate in finite time, even though, it has finite numbers of steps. So it is not an algorithm.

### Property 2

Algorithm, may or may not take input, but, it should produce at least one output directly or indirectly. Produce an output does not mean there will always be a print statement of the result at the end. It means some meaningful work must be done during the execution.

### Property 3

Every statement in algorithm must be effective

```c
  x = x
```

The above assignment is useless. So this kind of statement should not be
present in any algorithm.

### Property 4

Every algorithm must be deterministic.

![Non-Determinism](image1.png)

The above diagram represents non-determinism.

### Property 5

Algorithms must be independent of programming language.

### Why Properties of Algorithm is Important?

I have written a code. Now I want to know if it's an algorithm or not.
To know that, we need to know the properties of algorithms.

## Steps required to design an algorithm

### Step 1

Know Problem Definition.

*Mostly MBAs and Client do this discussion. Client and
Developer never talk*

### Step 2

Select the Design Technique.

In the Algorithm subject we have lots of algorithms.
For example,

-   Divide and Conquer
-   Greedy Technique
-   Dynamic Programming Technique
-   Branch and Bound Technique
-   Backtracking Technique, etc

The expert will try to map the problem to the most suitable algorithm.
Only experts can do this properly. Because he knows which algorithm
techniques can be applied to solve the problem. Among all of those
candidate algorithms, which one is the best performing.

It\'s like an expert web developer already has lots of templates. When a
client comes to him, he will show him various sample templates. But a
fresher one will always do things from scratch. That\'s the difference
between an expert and a fresher.

### Step 3

Draw Flow chart

### Step 4

Verification

### Step 5

Coding

### Step 6

Analysis (Time and Space Complexity Analysis)

## Note

Only CSE People can do the 2nd and 6th step, No one else can.