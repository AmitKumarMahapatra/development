## Power of an element

### Input and Output
- Input : $2 +ve$ integer $a \gt 1 \ , \ n \geq 1$
- Output : Find $a^n$

### Example

$$
a = 2 \ and \ n = 6 \\
a^n = 2^6 = 64
$$

### Approaches
1. Simple one `for` loop (Brute force Approach).
2. Use DCC.

### Approach 1

#### Implementation

```python
def power(a,n):
    result = 1
    for i in range(1,n):
        result = result * a
    return(result)
```

#### Analysis

##### Time Complexity
- In every case the loop will execute $n$ times. So in every case $T(n) = \Theta(n)$

##### Space Complexity
- No extra space is required for the execution. So in every case, $S(n) = \Theta(1)$

### Approach 2

#### Implementation

```python
import math
def dcc_power(a,n):
    if(n==1):
        return(a)
    else:
        # divide the big problem
        half = math.floor(n)
        # solving the sub-problems recursively
        half_result = dcc_power(a,half)
        # combine the sub-problem solution to get the final solution
        result = half_result * half_result
        return(result)
```

#### Analysis

##### Time Complexity

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        c & \text{if n $=$ 1} \\
        T(\frac{n}{2}) + c & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

$$
\begin{align*}
T(n) & = T(\frac{n}{2^2}) + c \\
T(n) & = T(\frac{n}{2^3}) + 2c \\
T(n) & = T(\frac{n}{2^4}) + 3c \\
....... \\
T(n) & = T(\frac{n}{2^k}) + kc \\
\\
Say, \ & \frac{n}{2^k} = 1  \implies k = log_{2}n \\
\\
T(n) & = T(1)+ c * log_{2}n \\
T(n) & = c + c * log_{2}n \\
T(n) &= \Theta(log_{2}n)
\end{align*}
$$

- $T(n) = \Theta(log_{2}n)$ is the time complexity in every case.

##### Space Complexity

![Power of an element recursive tree]()

- Space complexity here is the number of levels in the recursive tree. Hence $S(n) = \Theta(log_{2}n)$ in every case.

##### Number of multiplications

$$
\begin{equation}
\ M(n)=
    \begin{cases}
        0 & \text{if n $=$ 1} \\
        M(\frac{n}{2}) + 1 & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

$$
\begin{align*}
M(n) & = M(\frac{n}{2^2}) + 1 \\
M(n) & = M(\frac{n}{2^3}) + 2 \\
M(n) & = M(\frac{n}{2^4}) + 3 \\
....... \\
M(n) & = M(\frac{n}{2^k}) + k \\
\\
Say, \ & \frac{n}{2^k} = 1  \implies k = log_{2}n \\
\\
M(n) & = M(1)+ log_{2}n \\
M(n) & = 0 + log_{2}n \\
M(n) &= \Theta(log_{2}n)
\end{align*}
$$

#### Slight modification for handling the odd cases
```python
import math
def dcc_power(a,n):
    if(n==1):
        return(a)
    else:
        # divide the big problem
        half = math.floor(n)
        # solving the sub-problems recursively
        half_result = dcc_power(a,half)
        # combine the sub-problem solution to get the final solution
        result = half_result * half_result
        # handling the odd case scenario
        if(n % 2 == 0):
            return(result)
        else:
            return(result * a)
```

### Equivalent Non-Recursive Implementation

```python
def non_recursive_power(a,n):
    result = a
    while(i <= n):
        result = result * result
        i = i * 2
```

$$
T(n) = \Theta(log_{2}n)
$$
- To understand why $T(n) = \Theta(log_{2}n)$, check the [previous chapter example]().
- From the above, it might feel that, recursive implementation of the problem is taking less time than the non-recursive approach.
- However, both recursive nd non-recursive programs will take same time complexity when the logic is same. 