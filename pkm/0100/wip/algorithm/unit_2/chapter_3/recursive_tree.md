## Recursive Tree Method
- It is applied in below type of recursive functions

$$
T(n) = T(\dfrac{n}{3}) + T(\dfrac{n}{2}) + n
$$

### Example 1

$$
T(n) = T(\dfrac{n}{3}) + T(\dfrac{2n}{3}) + n
$$

![](./images/Example%201.jpg)

#### Note
- This note needs to be image format, specifying what is T(n) and what is n at each level.

![]()

#### Analysis
- In the above, we have a binary tree. 
- If we consider the left most part of the tree, then the height is $log_{3}n$
- If we consider the right most part of the tree, then the height is $log_{\frac{3}{2}}n$.
- The height of the intermediate nodes lies between $log_{3}n$ and $log_{\frac{3}{2}}n$ and the height increases from left most to right most part of the tree.
- Let's assume, $T(n)$ is the actual value of the recurrence. So we can get $T(n)$ by adding the exact total cost at each level of the tree. However, that is not possible. Because calculating the exact cost at each level is difficult as the tree is not uniform (the height of the left most child is less than the height of right most child, and the height increases from left to right).
- Hence, as we can not find the exact value of $T(n)$, we can provide upper bound and lower bound of $T(n)$.
- Now let's assume, the tree is uniform. That means the height of the left most child is exactly equal to the height of right most child. Now we can have 2 cases.
    - Case 1
        - Let's assume the height of the uniform tree is $log_{\frac{3}{2}}n$. 
        - In that case, cost at each level will be exactly equal to $n$. 
        - Hence the total cost will be $n*log_{\frac{3}{2}}n$. 
        - Note that this value is greater than the actual $T(n)$. 
        - But as of now, we can not distinctly say whether it is asymptotical upper bound $O$ or asymptotically strict upper bound $o$.
    - Case 2
        - Let's assume the height of the uniform tree is $log_{3}n$.
        - In that case, cost at each level will be exactly equal to $n$. 
        - Hence the total cost will be n*$log_{3}n$.
        - Note that this value is less than the actual $T(n)$.
        - But as of now, we can not distinctly say whether it is asymptotical lower bound $\Omega$ or asymptotically strict lower bound $\omega$.
- So we can safely write the below is true mathematically

$$
n*log_{3}n \lt T(n) \lt  n*log_{\frac{3}{2}}n
$$

- Now let's find asymptotical relation.
    - We can not directly write $T(n) = o(n * log_{\frac{3}{2}}n)$ , just because $T(n) \lt  n * log_{\frac{3}{2}}n$
    - Similarly, we can not directly write $T(n)=\omega(n * log_{3}n)$ , just because $n * log_{3}n \lt T(n)$
    - But we can compare $n * log_{3}n$ and $n * log_{\frac{3}{2}}n$
    - $n * log_{3}n = \Theta(n * log_{\frac{3}{2}}n)$
    - So asymptotically, there is no difference between the upper and lower bound. So we can safely say, asymptotically, there is no difference between $T(n)$ and $n * log_{\frac{3}{2}}n$ as well as $T(n)$ and $n * log_{3}n$
    - So we can conclude below
    
$$
T(n) = O(n*log_{\frac{3}{2}}n) \\
T(n) = \Omega(n*log_{3}n) \\
n*log_{3}n = \Theta(n*log_{\frac{3}{2}}n) \\
T(n) = \Theta(n*log_{}n)
$$

- The above analysis can be explained diagrammatically below

![]()

### Example 2

$$
T(n) = T(\dfrac{n}{5}) + T(\dfrac{2n}{5}) + n
$$

![](./images/Example%202.jpg)

### Example 3

$$
T(n) = T(\dfrac{n}{2}) + T(\dfrac{n}{3}) + c
$$

![](./images/Example%203.jpg)

### Example 4

$$
T(n) = T(n-1) + T(\dfrac{n}{2}) + T(\dfrac{n}{3}) + c
$$

![](./images/Example%204.jpg)

### Example 5

$$
T(n) = T(\dfrac{n}{3}) + T(\dfrac{2n}{2}) + n^2
$$

![](./images/Example%205.jpg)


### Notes
- Just a claver trick here, even if the recursive equation is written as 2 different factors, we can solve slightly further and then apply Master's theorem or Substitution method. No need to go for Recursion Tree Method

$$
T(n) = T(\dfrac{n}{2}) + T(\dfrac{n}{2}) + n
\\
=> T(n) = 2T(\dfrac{n}{2}) + n
$$

- So directly or indirectly, if there is 1 function call, then we can go with Substitution method or Master's theorem (depending upon the format), and if there are 2 different recursive call (like above examples), we should go with Recursive tree method.