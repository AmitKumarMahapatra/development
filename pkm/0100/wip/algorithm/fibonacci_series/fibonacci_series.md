## Fibonacci Series

### Input and Output
- Input : An integer $n$
- Output : Fibonacci of $n$

### Example

| $n$      | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7  | 8  | 9  | 10 |
| -------- | - | - | - | - | - | - | - | -- | -- | -- | -- |
| $fib(n)$ | 0 | 1 | 1 | 2 | 3 | 5 | 8 | 13 | 21 | 34 | 55 |

### Approaches
- Dynamic Programming Approach
- DCC Approach

### Approach 1 (Dynamic Programming Approach)

#### Implementation

```python
def dp_fibonacci(n):
    list_fibonacci = [0,1]
    if(n == 0 or n == 1):
        return(list_fibonacci[n])
    else:
        for i in range(2,n+1):
            list_fibonacci.append(list_fibonacci[i-1] + list_fibonacci[i-2])
        return(list_fibonacci[n])
```

#### Analysis

##### Time Complexity

$T(n) = \Theta(n)$ in every case

- An important thing to note here is, if $n = 1 \ or \ n = 0$, then we might think that is the best case and the best case time complexity is $T(n)=\Theta(1)$. But that is not the case. Because, while calculating the time complexity, $n$ value is always big.

- And in case of recursive relation, best and worst case always comes from `else` part. It never comes from `if` part. `if` part is just for the termination condition, nothing else.

##### Space Complexity

The algorithm used an extra array of size $n$ to store the solution of the sub-problems. So the space complexity of this approach is $\Theta(n)$.

### Approach 2 (DCC Approach)

```python
def dcc_fibonacci(n):
    if(n == 0 or n == 1):
        return(n)
    else:
        return(dcc_fibonacci(n-1) + dcc_fibonacci(n-2))
```

#### Analysis

##### Time Complexity

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        c & \text{if n $=$ 1} \\
        c & \text{if n $=$ 0} \\
        T(n-1) + T(n-2) & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

![Insert image of recursive tree]()

So we can conclude below 2 approximation for $T(n)$

$$
\begin{align*}
T(n) & \lt 2^{0}c + 2^{1}c + 2^{2}c + ... +2^{n}c \\
T(n) & \lt 2^{n+1}c \\
T(n) & = O(2^{n})
\end{align*}
$$

$$
OR
$$

$$
\begin{align*}
T(n) & \gt 2^{0}c + 2^{1}c + 2^{2}c + ... +2^{\frac{n}{2}}c \\
T(n) & \gt 2^{\frac{n}{2}+1}c \\
T(n) & = \Omega(2^{\frac{n}{2}})
\end{align*}
$$

$$
So \\
2^{\frac{n}{2}+1} \  \lt T(n) \ \lt 2^{n+1}\\
T(n) = O(2^{n}) \\
T(n) = \Omega(2^{\frac{n}{2}})
$$

##### Space Complexity

![Insert image of recursive tree showing which path is longer]()

$$
S(n) = \Theta(n)
$$

##### Recursive relation for Value

$$
\begin{equation}
\ V(n)=
    \begin{cases}
        n & \text{if n $=$ 1} \\
        n & \text{if n $=$ 0} \\
        V(n-1) + V(n-2) & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

#### Notes
By looking at the recursive relation below conclusions can be made.

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        c & \text{if n $=$ 1} \\
        c & \text{if n $=$ 0} \\
        T(n-1) + T(n-2) & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

- 2 function calls, so definitely recursive tree method is the best way to solve the recursive equation.
- $T(n-1)$ will take n steps, hence will be used for **upper bound**
- $T(n-2)$ will take $\frac{n}{2}$ steps, hence will be used for **lower bound**
- We can find the space complexity from hightest number of levels of the recursive tree

If the below implementation is given, it will have no impact on the time complexity, as the recursive relation will not change, however, the Value recursive relation will change, so there will be impact on the final value.

```python
def dcc_fibonacci(n):
    if(n == 0 or n == 1):
        return(n)
    else:
        return(dcc_fibonacci(n-1) - dcc_fibonacci(n-2))
```

##### Recursive relation for Value

$$
\begin{equation}
\ V(n)=
    \begin{cases}
        n & \text{if n $=$ 1} \\
        n & \text{if n $=$ 0} \\
        V(n-1) - V(n-2) & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

### Note
- This is the simplest best problem that can make you feel, how much important is algorithm design.  Just put the value of $n=200$ and run both the algorithm(recursive and non-recursive). You can really see the time difference.
- In this case, we can see that the [Dynamic Programming Approach](#approach-1-dynamic-programming-approach) is better than the [Divide Conquer and Combine Approach](#approach-2-dcc-approach).
- DP Approach is non recursive and DCC Approach is recursive. So you might feel like, recursive implementation is taking more time than non recursive approach. But that is not really the case.
- The DP Approach is taking less time, because instead of resolving the same sub-problem, it is first checking, if we already have the solution, we don't have to recalculate it again. Hence it is saving significant amount of time.
- If we change the logic of recursive solution, we can make it as same as the DP approach, taking the same amount of time.
- Below is the implementation.

```python
```