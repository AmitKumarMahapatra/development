## Master Theorem
- Master theorem is only applicable to the recursive equation which are in below format.

$$
T(n) = a * T(\dfrac{n}{b}) + f(n) \\
where \ a \ and \ b \ both \ are \ constants \ and \\
a \geq 1 \ , \ b \gt 1 \\
and \\
f(n) \ is \ a \ +ve \ function
$$

- Master theorem is nothing but comparing 2 values.

$$
f(n) \ and \ n^{\log _{b} a}
$$

- There are 3 cases in Master Theorem
    - Case A

    $$
    if \ f(n) = O(n^{(\log_{b} a) \ - \ \epsilon}) \\
    where \ \epsilon > 0 \\
    then \ T(n) = \Theta(n^{(\log_{b}) a})
    $$

    - Case B

    $$
    if \ f(n) = \Omega(n^{(\log_{b} a) \ + \ \epsilon}) \\
    where \ \epsilon > 0 \\
    and \\
    a f(\dfrac{n}{b}) \leq c.f(n) \\
    where \ c < 1 \\ 
    then \ T(n) = \Theta(f(n)) \\
    $$ 

    - Case C
    
    $$
    if \ f(n) = \Theta(n^{(\log_{b} a)} \ . \ (log_{}n)^{k}) \\
    where \ k \geq 0 \\
    then \ T(n) = \Theta(n^{(\log_{b} a)} \ . \ (log_{}n)^{k + 1})
    $$

- This is what each case is really saying
    - Case A : $ n^{log_{b} a} $ is ***polynomial times bigger*** than $f(n)$. Not logarithmic. But higher than polynomial is fine.
    - Case B : $ n^{log_{b} a} $ is ***polynomial times smaller*** than $f(n)$. Not logarithmic time. Also in case B, the second condition is called the *regularity condition* which get passed in most cases, but you may need to check it if required.
    - Case C : $ n^{log_{b} a} $ and $f(n)$ both are equal or $ n^{log_{b} a} $ is logarithmic times smaller.

- Master Theorem always gives answer in $\Theta$

### Example 1

$$
T(n) = 8 \ T(\dfrac{n}{2}) + n^2
$$

#### Answer

$$
a= 8 \ (\geq 1) \ and \ b=2 \ (\gt 1) \ and \\ 
n^2 \ is \ a \ positive \ function \\
n^{log_{2}8} = n^3 \\
and \ we \ can \ write \ the \ below \\
n^2 = O(n^{log_{2}8 - 1}) \ where \ \epsilon \ is \ 1 \\
so \ this \ falls \ under \ 1^{st} \ Case\\
so \ T(n) = \Theta(n^3)
$$

### Example 2

$$
T(n) = 2 \ T(\dfrac{n}{2}) + n^2
$$

#### Answer

$$
a= 2 \ (\geq 1) \ and \ b=2 \ (\gt 1) \ and \\ 
n^2 \ is \ a \ positive \ function \\
n^{log_{2}2} = n^1 \\
and \ we \ can \ write \ the \ below \\
n^2 = \Omega(n^{log_{2}2 + 1}) \ where \ \epsilon \ is \ 1 \\
so \ this \ falls \ under \ 2^{nd} \ Case\\
so \ T(n) = \Theta(n^2) \\ 
(you \ may \ check \ the \ regularity \ condition \ as \ well )
$$

### Example 3

$$
T(n) = T(\dfrac{n}{2}) + c
$$

#### Answer

$$
a = 1 \ (\geq 1) \ and \ b=2 \ (\gt 1) \ and \\ 
c \ is \ a \ positive \ function \\
n^{log_{2}1} = n^0 \\
and \ we \ can \ write \ the \ below \\
c = \Theta(n^{0}.log_{}n^0) \ where \ k \ is \ 0 \\
so \ this \ falls \ under \ 3^{rd} \ Case\\
so \ T(n) = \Theta(log_{}n)
$$


### Example 4

$$
T(n) = 2 \ T(\dfrac{n}{2}) + n \ log_{} \ n
$$

#### Answer

$$
a = 2 \ (\geq 1) \ and \ b=2 \ (\gt 1) \ and \\ 
n \ log_{}n \ is \ a \ positive \ function \\
n^{log_{2}2} = n^1 \\

but \ here, \ it \ does \ not \ qualify \ the \ 2^{nd} \ case. 
\\ Because, \ 2^{nd} \ case \ says, \ that \ f(n) \ should \ be \ polynomial \ times \ bigger \ than \ n^{log_{b}a} \\
This \ falls \ under \ 3^{rd} \ case. \\
n \ log_{}n = \Theta(n^{1}.log_{}n^1) \ where \ k \ is \ 1 \\
so \ T(n) = \Theta(log_{}n)
$$


### Example 5

$$
T(n) = 8 \ T(\dfrac{n}{2}) + n^4 log_{} \ n
$$

#### Answer

$$
a = 8 \ (\geq 1) \ and \ b=2 \ (\gt 1) \ and \\ 
n^4 log_{} \ n \ is \ a \ positive \ function \\
n^{log_{2}8} = n^3 \\
and \ we \ can \ write \ the \ below \\
n^4 log_{} \ n = \ \Omega(n^{3}) \\
so \ this \ falls \ under \ 2^{nd} \ Case\\
so \ T(n) = \Theta(n^4log_{}n)
$$

#### Take away from this example
If it were the case that $f(n)$ is only logarithmic times bigger than $n^{log_{b}a}$ then, it would have fall under the $3^{rd}$ case. However, in this case $f(n)$ is $n^{1} log_{2}n$ times bigger. So it falls under second case. If it were $n^{2} log_{2}n$ or $n^{3} log_{2}n$ etc, times bigger, then also it would have fall under 2nd case. 

### Example 6

#### Case A

$$
T(n) = 2^n \ T(\dfrac{n}{2}) + n^2
$$

#### Answer

$$
a= 2^n \ (\geq 1) \ and \ b=2 \ (\gt 1) \ and \\ 
n^2 \ is \ a \ positive \ function \\
n^{log_{2}2^n} = n^n \\
and \ we \ can \ write \ the \ below \\
n^2 = O(n^{n - 1}) \ where \ \epsilon \ is \ 1 \\
so \ you \ may \ think \ this \ falls \ under \ 1^{st} \ Case\\
but \ a=2^n \ is \ not \ a \ constant, \\ 
so \ this \ recurrence \ relation \ can \ not \ be \ solved \ by \ Master's \ Theorem.
$$

#### Case B

$$
T(n) = 2^n \ T(\dfrac{n}{2}) - n^2
$$

#### Answer

$$
Master's \ Theorem \ can \ not \ solve \ this, \ because \ f(n) \ is \ not \ a \ positive \ function \ here.
$$

#### Take away from this example
- $f(n)$ has to be a positive function
- First case of Master's theorem says, $n^{log_{b}a}$ should be polynomial times bigger than $f(n)$. But if $n^{log_{b}a}$ is more than that, then also first case is applied.

### Example 7

$$
T(n) = T(\sqrt{n}) + c
$$

#### Answer

$$
Step \  1 \ (First \ Assumption)\\ 
Let's \ assume \ n = 2^k \\ 
So \ T(n) = T(\sqrt{n}) + c \\
becomes \\
T(2^k) = T(2^{\frac{k}{2}}) + c
$$

$$
Step \ 2 \ (Second \ Assumption)\\ 
Let's \ assume \ T(k) = S(k) \\ 
So \ T(2^k) = T(2^{\frac{k}{2}}) + c \\
becomes \\
S(k) = S(\frac{k}{2}) + c 
$$

$$
Step \ 3 \ (Solve \ the \ recurrence \ relation)\\
a= 1 \ (\geq 1) \ and \ b=2 \ (\gt 1) \ and \\ 
c \ is \ a \ positive \ function \\
k^{log_{2}1} = k^0 \\
and \ we \ can \ write \ the \ below \\
c = \Theta(k^0 (log_{}k)^{0}) \\
so \ this \ falls \ under \ 3^{rd} \ Case\\
so \ S(k) = \Theta(log_{}k)
$$

$$
Step \ 4 \ (Reverse \ of \ Step \ 2) \\
S(k) = \Theta(log_{}k) \\
so \ T(2^k) = \Theta(log_{}k)
$$

$$
Step \ 5 \ (Reverse \ of \ Step \ 1) \\
T(2^k) = \Theta(log_{}k) \\
so \ T(n) = \Theta(log_{}log_{}n)
$$

#### Take away from this example
- How to solve the recursive relations with $\sqrt{n}$ term using Master's Theorem
- The assumption in Step 1 and Step 2 is fine, because we are also reversing the assumptions in the Step 4 and Step 5 respectively.

### Example 8

$$
T(n) = T(\sqrt{n}) + log_{2}n
$$

#### Answer

$$
Step \  1 \ (First \ Assumption)\\ 
Let's \ assume \ n = 2^k \\ 
So \ T(n) = T(\sqrt{n}) + log_{2}n \\
becomes \\
T(2^k) = T(2^{\frac{k}{2}}) + k
$$

$$
Step \ 2 \ (Second \ Assumption)\\ 
Let's \ assume \ T(k) = S(k) \\ 
So \ T(2^k) = T(2^{\frac{k}{2}}) + k \\
becomes \\
S(k) = S(\frac{k}{2}) + k
$$

$$
Step \ 3 \ (Solve \ the \ recurrence \ relation)\\
a= 1 \ (\geq 1) \ and \ b=2 \ (\gt 1) \ and \\ 
c \ is \ a \ positive \ function \\
k^{log_{2}1} = k^0 \\
and \ we \ can \ write \ the \ below \\
k^1 = \Omega(k^0) \\
so \ this \ falls \ under \ 2^{nd} \ Case\\
so \ S(k) = \Theta(k)
$$

$$
Step \ 4 \ (Reverse \ of \ Step \ 2) \\
S(k) = \Theta(k) \\
so \ T(2^k) = \Theta(k)
$$

$$
Step \ 5 \ (Reverse \ of \ Step \ 1) \\
T(2^k) = \Theta(k) \\
so \ T(n) = \Theta(log_{}n)
$$


### Example 9

$$
T(n) = 2 \ T(\dfrac{n}{2}) + \frac{n}{log_{2}n}
$$

#### Answer

$$
a= 2 \ (\geq 1) \ and \ b=2 \ (\gt 1) \ and \\ 
\frac{n}{log_{2}n} \ is \ a \ positive \ function \\
n^{log_{2}2} = n^1 \\
and \ we \ can \ write \ the \ below \\
\frac{n}{log_{2}n} = \Theta(n.log_{n}^{-1}) \ where \ k \ is \ -1 \\
but \ k \ has \ to \ be \geq 0 \\ 
so \ this \ recurrence \ can \ not \ be \ solved \ by \ Master \ Theorem
$$