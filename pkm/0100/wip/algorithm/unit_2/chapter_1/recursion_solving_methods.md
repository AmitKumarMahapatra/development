## Recursion and Solving Methods
- Function calling itself to solve a particular problem is called recursion.
- Solving a big problem in terms of small problems.
- Every recursive program has 2 steps, ```if``` and ```else```. So writing a recursive program is so easy to write.
- Every recursive programme should have a termination condition. Otherwise, we will get stack overflow error.
- To execute a recursive program, we use the Stack Data Structure.
- In recursion from one function call to another function call, only parameter values change.
- Comparing recursive program and non-recursive program, recursive program will take more stack space.
- For every recursive program, a Non-recursive program is possible and vice-versa.
- Recursive program and Non-recursive, both take same Asymptotic time, if the logic is same.
- While the recursive program is running, the number of stack units we are using is called the depth of the stack.
- *In my opinion, in case of recursive programs, Time Complexity is basically counting number of push and pop operation performed because of recursive function calls.*
- Basic building block of Divide and Conquer and Combine is below 3
    - Recursion
    - Recursive relation
    - Recursive relation solving
- There are mainly 3 ways to solve a recursive relation
    - Substitution Method
    - Recursive tree method
    - Master Theorem

- If program is not given, then we can not say whether the recurrence is to find the value or time complexity. For a single program, time and value, both recurrence can be different. For example,

```python
def factorial(n):
    if(n <= 1):
        return(1)
    else:
        return n * factorial(n-1)
```
Time complexity Recurrence Relation

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        1 & \text{if n $\leq$ 1} \\
        T(n-1) + c & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

If you solve it

$$
T(n) = \Theta(n)
$$

Value Recurrence Relation

$$
\begin{equation}
\ F(n)=
    \begin{cases}
        1 & \text{if n $\leq$ 1} \\
        n*F(n-1) & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

If you solve it

$$
F(n) = n! \  or \ O(n^n)
$$