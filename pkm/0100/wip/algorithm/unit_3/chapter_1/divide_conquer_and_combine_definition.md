## Divide and Conquer Definition

### Steps of Divide, Conquer and Combine
1. ***Divide*** the big problem into some small sub-problems.
2. ***Conquer***(Here it means solve) the sub problems by using recursion, until you get the sub-problem solution.
3. ***Combine*** sub-problem solutions so that we het the final problem solution.

### Note
Any problem that we solve with the ***Divide and Conquer**** strategy, we must follow the above 3 steps. Hence, the strategy name should be ***Divide, Conquer and Combine*** not only ***Divide and Conquer***

### Abstract Algorithm of Divide, Conquer and Combine

```python
def DCC(a,i,j):
    if(small(a,i,j)):
        return(solution(a,i,j))
    else:
        # Divide the big problem into some small sub-problems.
        k = divide(a,i,j)
        # Solve the sub problems by using recursion, until you get the sub-problem solution.
        solution_1 = DCC(a,i,k)
        solution_2 = DCC(a,k+1, j)
        # Combine sub-problem solutions so that we het the final problem solution.
        solution = combine(solution_1, solution_2)

        return(solution)

def small(a,i,j):
    # return whether the problem is small or big
    return(bool_problem_size)

def solution(a,i,j):
    # Write code to solve the small problem
    return(solution)

def divide(a,i,j):
    # Write code to divide the big problem into small sub-problems
    return(k)

def combine(a,i,j,k):
    # Combine the sub-problem solutions and return the original problem solution
    return(solution)
```

### Time Complexity for Abstract DCC Algorithm

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        c & \text{if \ n \ is \ small} \\
        divide(n) + 2 * T(\frac{n}{2}) + combine(n) & \text{if \ n \ is \ big} \\
    \end{cases}
\end{equation}
$$

- $divide(n)$ is time to divide the bigger problem into smaller sub-problems.
- $combine(n)$ is time to combine the solution of smaller problems and find the solution to the original problem.
- *Here we have assumed that the problem is divided into 2 sub-problems, but that is not always the case. A problem can be divided into any number of sub-problems, depending upon the problem we are dealing with.*
- By assuming $f(n) = divide(n) + combine(n)$, we can rewrite the time complexity as below.

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        c & \text{if \ n \ is \ small} \\
        2 * T(\frac{n}{2}) + f(n) & \text{if \ n \ is \ big} \\
    \end{cases}
\end{equation}
$$

- And we can generalize it as below

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        c & \text{if \ n \ is \ small} \\
        a * T(\frac{n}{b}) + f(n) & \text{if \ n \ is \ big} \\
    \end{cases}
\end{equation}
$$

- Here, there are 2 constants $a$ and $b$ and below are the constraints for each of then with reason.

$$
a \geq 1
$$

- In the recursive equation, $a$ signifies **how many times you are making the recursive call**. And because it is not necessary that after division, we have to solve both part to get to the final solution ( for example [Binary Search](../Chapter%205/Chapter%205%20-%20Binary%20Search) ), so $a$ can also be equal to $1$ or greater, if there is a need to solve both the sub-problems ( for example [Merge Sort](../Chapter%206/Chapter%206%20-%20Merge%20Sort) ).

$$
b \gt 1
$$

- In the recursive equation, $b$ signifies **in how many parts the problem is divided into**. And the problem has to be divided into some parts, so $b \gt 1$.

- Also from the above, we can clearly say that, [Master Theorem](../../../ALGO/Unit%202/Chapter%204/Chapter%204%20-%20Master%20Theorem) is very much suitable for DCC algorithms.

### Application of DCC
- Max-Min Problem
- Power of an element
- Linear Search
- Binary Search
- Merge Sort
- Quick Sort
- Heap Sort
- Counting No of Inversions
- Stressen's Matrix Multiplication
- Continuous Maximum Sub Array Sum

### Observation
- In DCC, if $n$ is in power of $2$, then the program will run very smoothly.
- Similarly, if we are thinking of dividing the big problem into 3 sub-problems, then $n$ which is a power of $3$ is a best $n$.
- In other odd cases also DCC works. The only thing is to take take care about one or 2 lines using `if` and `else` conditions. Example of such cases are [Power of an element](../Chapter%203/Chapter%203%20-%20Power%20of%20an%20element)
