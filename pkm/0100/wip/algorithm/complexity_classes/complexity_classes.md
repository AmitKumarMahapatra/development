## Complexity Classes

1.  Decreasing Functions \[ $\frac{1}{n}$ , $\frac{1}{n^{2}}$ etc\]
2.  Constant Functions
    1.  $log(log(n))$
3.  Logarithmic Functions \[ $log_{}n$, ${(log_{}n)}^{2}$ etc \]
    1.  $\sqrt{n}$
4.  Polynomial Functions \[ $n^{c}\ where\ c \gt 0$ \]
    1.  Linear Functions
        1.  $nlog_{}n$
        2.  $n$
    2.  Quadratic Functions
    3.  Cubic Functions
5.  Exponential Functions \[ $c^{n}\ where\ c \gt 1\ $ \]

## Example 1

### Question
Identify True and False Statements
1.  $1000\ nlog(n)\  = \  O (\frac{nlog(n)}{1000})$
2.  $\sqrt{log(n)}  = \  O (log(log(n)))$
3.  $if\ 0 < x < y\ then\ n^{x}\  = O (n^{y})$
4.  $n^{c}\  \neq \  O (c^{n})$

### Answer

#### Option 1
![Example 1 Option 1](./images/Example%201/Option%20A.jpg)

- This is the most basic example of the topic complexity class.
- The key take away from this option is that C will always help you if the difference is Constant.

#### Option 2
![Example 1 Option 2](./images/Example%201/Option%20B1.jpg)

- The above explanation is based on logical and mathematical fact, **Polynomial is always greater than logarithmic.**
- However, there are another 2 ways to solve a question like this
    1.  Apply Log
    2.  Substituting value
    
##### Applying Log
![](./images/Example%201/Option%20B2.jpg)
- Applying log might fail in some cases as below. So be careful when using this method.

###### Fail Example 1

$if\ x < y\ then\ c^{x} = \Theta(c^{y})$

By solving this using Log Method

$log(c^{x})\ \ \ \ \ \ \ \ log(c^{y})$

$xlog(c)\ \ \ \ \ \ \ \ y\ log(c)$ $\ \ \ \ \ \ \ \ $ *(Canceling $log(c)$ both the sides)*

$x\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ y$

We know  $x < y$

So we can take $x = n\ \&\&\ y = 2n$

$n = \Theta(2n)$

So $c^{x} = \Theta(c^{y})$

But in reality $c^{x} = O (c^{y})$

Because
$2^{n} \neq \Theta(2^{2n})\ \lbrack which\ is\ \Theta(4^{n})\rbrack$

###### Fail Example 2

$if\ x < y\ then\ n^{x} = \Theta(n^{y})\ where\ x\ and\ y\ both\ are\ constants$

By solving this using Log Method

$log(n^{x})\ \ \ \ \ \ \ \ log(n^{y})$

$xlog(n)\ \ \ \ \ \ \ \ log(n)$ $\ \ \ \ \ \ \ \ $ *(Canceling $log(n)$ both the sides)*

$x\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ y$

We know $x < y\ and\ both\ are\ constants\ so\ x = \Theta(y)$

Hence $n^{x} = \Theta(n^{y})$

But in reality $n^{x} = O (n^{y})$

Because $n^{2} \neq \Theta(n^{3})$

##### Substituting value
![](./images/Example%201/Option%20B3.jpg)
- But taking values like this is not a good Idea though. Use this method only in the worst case scenario when you have no other option.
- Still if you are using this method, then use very large values.
- This method will fail for small values, because this is an Asymptotic comparison, not a pure mathematical one.

#### Option C
![](./images/Example%201/Option%20C.jpg)

#### Option D
![](./images/Example%201/Option%20D.jpg)

#### Key Takeaway
- $\omega$ means $\Omega$ But $\Omega$ does not necessarily means $\omega$
- $o$ means $O$ But $O$ does not necessarily means  $o$
- Subset and Superset Diagram
    - ![]()
- If $\Theta$ is possible then  $o$ and $\omega$ not possible.
- If $O$ and $\Omega$ both are possible, then $\Theta possible.
- If $\Theta$ is not possible and the functions are comparable, one of $\omega$ or $o$ must be possible
- The way to compare the Asymptotic relation is in below order of priority
    -   Logical or strong Mathematical Proof
    -   Apply Log, But before applying, make sure, you are deleting the common terms
    -   Substitute will very big values, will give some idea
- If the difference is constant, the C will take care. But if the difference is a function, C can not help at all.

## Example 2

### Question

Identify True and False Statements
1.  $2^{n + 1} = O (2^{n})$
2.  $\frac{4^{n}}{2^{n}} = O (2^{n})$
3.  $2^{2n} = O (2^{n})$
4.  $64^{log(n)} = O (n^{10})$

### Answer

#### Option A
![]()

#### Option B
![]()

#### Option C
![]()

#### Option D
![]()

## Example 3

### Question

Identify True and False Statements
1.  $f(n) = O (({f(n))}^{2})$
2.  $f(n) = O (\frac{f(n)}{2})$
3.  $f(n) = O (f(\frac{n}{2}))$
4.  $if\ f(n) = O g(n)\ then\ 2^{f(n)} = O (2^{g(n)})$

### Answer

#### Option A
![]()

#### Option B
![]()

#### Option C
![]()

#### Option D
![]()

## Example 4

Identify True and False Statements
1.  $f_{1}(n) = 2^{n}$
2.  $f_{2}(n) = n^{log(n)}$
3.  $f_{3}(n) = n^{n}$
4.  $f_{4}(n) = n!$

## Example 5

Identify True and False Statements
1. $n > log(n)$
2. $n > {(logn)}^{2}$
3. $n > {(logn)}^{10}$
4. $n > {(logn)}^{100000}$

## Example 6

Identify the Asymptotic Relation.

$\log_{2}(n)\ ?\ \log_{3}(n)$

## Example 7

Identify the Asymptotic Relation.

$2^{n}\ ?\ 3^{n}$

## Example 8

Identify True and False Statements
1.  $100000\  = \  O (1)$
2.  $\frac{1}{n} = \Theta(1)$
3.  $1000\  = \ \Theta(1)$
4.  $1000\  = \  O (\frac{1}{n})$

## Example 9

$let\ f(n),\ g(n)\ and\ h(n)\ be\ 3\  + ve\ functions,\ defined\ as\ below$

1.  $f(n) = O (g(n))\ \&\&\ g(n) \neq O (f(n))$
2.  $g(n) = O (h(n))\ \&\&\ h(n) = O (g(n))$

Then Identify True and False Statements
1.  $f(n).g(n)\  = O (g(n).h(n))$
2.  $f(n) + g(n)\  = O (h(n))$
3.  $h(n)\  = \Theta(f(n))$
4.  $g(n).h(n)\  = \Theta(h(n).h(n))$

## Example 10

$$
\begin{equation}
\ f(n)=
    \begin{cases}
        2^n & \text{if n\ is\ even} \\
        n & \text{if n\ is\ odd} \\
    \end{cases}
\end{equation}
$$

$$
\begin{equation}
\ g(n)=
    \begin{cases}
        2^n & \text{if n\ is\ odd} \\
        n & \text{if n\ is\ even} \\
    \end{cases}
\end{equation}
$$

Identify the Asymptotic relation between $f(n)\ and\ g(n)$

## Example 11

$$
\begin{equation}
\ f(n)=
    \begin{cases}
        n^3 & \text{if\ 0 <> n < 100} \\
        n^5 & \text{if \ n $\geq$ 100} \\
    \end{cases}
\end{equation}
$$

$$
\begin{equation}
\ g(n)=
    \begin{cases}
        n^7 & \text{if\ 0 < n < 10000} \\
        n^2 & \text{if \ n $\geq$ 10000} \\
    \end{cases}
\end{equation}
$$

Identify the Asymptotic relation between $f(n)\ and\ g(n)$

## Example 12

$f(n) = \ n^{1 + sin(n)\ }$

$g(n) = \ n^{1 + cos(n)\ }$

Identify the Asymptotic relation between $f(n)\ and\ g(n)$

## Example 13

$f(n) = \ n^{1 + sin(n)\ }$

$g(n) = \ n^{2 + cos(n)\ }$

Identify the Asymptotic relation between $f(n)\ and\ g(n)$

## Example 14

$f(n) = \ n^{1 - cos(n)\ }$

$g(n) = \ n^{2 + sin(n)\ }$

Identify the Asymptotic relation between $f(n)\ and\ g(n)$

## Example 15

$$
f_{1} = n^{log(n)} \\
f_{2} = {(log(n))}^{log(n)} \\
f_{3} = n! \\
f_{4} = (log(n))! \\
f_{5} = log(n!) \\
f_{6} = \\
f_{7} = (log(log(n)))! \\
f_{8} = 2^{n} \\
f_{9} = n^{} \\
$$

Arrange in Asymptotic Increasing order.

## Note for Stirling\'s Approximation

$n!\  < \ n^{n}$ Strictly

SO $\ n! = O (n^{n})$

But $log(n!) = \Theta(nlogn)$ According to Stirling\'s Approximation.

Proof:

$n!\  \equiv \ \ \left( \frac{n}{e} \right)^{n}$

$\Rightarrow \ log(n!) \equiv log() + nlog(\frac{n}{e})$

$\Rightarrow \ log(n!) \equiv \frac{1}{2}log(2\pi e) + \frac{1}{2}log(n) + nlog(n) - nlog(e)$

$\Rightarrow \ log(n!) \equiv \ K\  + \ log(n)\  + \ nlog(n)\  + \ nK_{1}$

$\Rightarrow \ log(n!) \equiv \ \Theta(nlog(n))$

# Properties of Asymptotic Notations

## Reflexive Property

$f(n) = O (f(n))$

$f(n) = \Omega(f(n))$

$f(n) = \Theta(f(n))$

$O$ $\Omega$ and $\Theta$ satisfy this property.

$o$ and $\omega$ however, does not satisfy this property.

## Symmetric Property

$f(n) = O (g(n))$ then $g(n) = O (f(n))$

What will pass ?

What will not pass ?

## Transitive Property

$f(n) = O (g(n))$ and $g(n) = O (h(n))$

$then\ f(n) = O (h(n))$

$O$, $\Omega$, $\Theta$, $o$ and $\omega$ all will satisfy this
condition.

## Extra Property

$f(n) = O (g(n))$ and $d(n) = O (e(n))$

$then$

$f(n)\  + \ d(n) = O (g(n) + e(n))\ or\ MAX(g(n),\ e(n))$

$f(n).g(n) = O (g(n).e(n))$
