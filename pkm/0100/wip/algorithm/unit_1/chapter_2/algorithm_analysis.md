## Algorithm Analysis
If a problem is having more than 1 algorithm, the best algorithm is decided by analysis based on 2 factors.
1.  Time Complexity (CPU Time that the algorithm requires)
2.  Space Complexity (Main Memory space required by the algorithm)

### Time Complexity Analysis

### Types of Time Complexity Analysis

| APostiary Analysis                                           | APriori Analysis                                                    |
|--------------------------------------------------------------|---------------------------------------------------------------------|
| It is postponing, instead of giving the actual answer        | It will not be postponed. It will give the result quite instantly   |
| It depends on the language of Compiler and type of Processor | It is independent on the language of compiler and Type of processor |
| Hence called Relative analysis                               | Hence called Absolute Analysis                                      |
| Gives Exact Answer                                           | Gives Approximate Answer                                            |
| Answer is different from system to system                    | Same answer in every system                                         |

#### Motivational Quote
Everyone can not buy a supercomputer, but everyone can write a super algorithm.

#### Motivational Quote
In the CSE Field, if you know the algorithm, somehow you will survive. That is for sure.

### APriori Analysis Examples

#### Example 1

##### Case A
![Example 1 - Case A](./images/Example%201/Case%20A.jpg)

##### Case B
![Example 1 - Case B](./images/Example%201/Case%20B.jpg)

##### Case C
![Example 1 - Case C](./images/Example%201/Case%20C.jpg)

##### Case D
![Example 1 - Case A](./images/Example%201/Case%20D.jpg)

##### Case E
![Example 1 - Case A](./images/Example%201/Case%20E.jpg)

#### Example 2

##### Case A
![Example 2 - Case A](./images/Example%202/Case%20A.jpg)

##### Case B
![Example 2 - Case B](./images/Example%202/Case%20B.jpg)

##### Case C
![Example 2 - Case C](./images/Example%202/Case%20C.jpg)

#### Exam Tricks
Few things are just to confuse you. Not really affect the final output at all.

##### Case D
![Example 2 - Case D](./images/Example%202/Case%20D1.jpg)

![Example 2 - Case D](./images/Example%202/Case%20D2.jpg)

##### Case E
![Example 2 - Case E](./images/Example%202/Case%20E.jpg)

##### Case F
![Example 2 - Case F](./images/Example%202/Case%20F.jpg)

##### Case G
![Example 2 - Case G](./images/Example%202/Case%20G.jpg)

##### Case H
![Example 2 - Case H](./images/Example%202/Case%20H.jpg)

##### Case I
![Example 2 - Case I](./images/Example%202/Case%20I.jpg)

#### Example 3

##### Case A
![Example 3 - Case A](./images/Example%203/Case%20A.jpg)

##### Case B
![Example 3 - Case B](./images/Example%203/Case%20B.jpg)

##### Case C
![Example 3 - Case C](./images/Example%203/Case%20C.jpg)

##### Case D
![Example 3 - Case D](./images/Example%203/Case%20D.jpg)

##### Case E
![Example 3 - Case E](./images/Example%203/Case%20E.jpg)

#### Exam Tricks
Exam is not for learning purposes. So don't waste time in doing proofs.

##### Case F
![Example 3 - Case F](./images/Example%203/Case%20F.jpg)

##### Case G
![Example 3 - Case G](./images/Example%203/Case%20G.jpg)

#### Example 4

##### Case A
![Example 4 - Case A](./images/Example%204/Case%20A.jpg)

##### Case B
![Example 4 - Case A](./images/Example%204/Case%20B.jpg)

#### Example 5
![Example 5 - Case A](./images/Example%205/Case%20A.jpg)

#### Exam Tricks
If you are having trouble finding the TC from `for` Loop, convert into `while` Loop.

#### Example 6
![Example 6 - Case A](./images/Example%206/Case%20A.jpg)

#### Example 7
![Example 7 - Case A](./images/Example%207/Case%20A.jpg)

#### Example 8
![Example 8 - Case A](./images/Example%208/Case%20A.jpg)

#### Example 9 (Tricky One)
![Example 9 - Case A](./images/Example%209/Case%20A.jpg)

#### Motivational Quote

$(0.99){}^{365}\  = \ 0.02\ $

$(1){}^{365}\  = \ 1\ $

$(0.99){}^{365}\  = \ 37.78$ 

#### Example 10 (Tricky One)
![Example 10 - Case A](./images/Example%2010/Case%20A.jpg)

#### Motivational Quote
Don\'t be like a problem person, Be a solution Person.

#### Example 11

##### Case A
![Example 11 - Case A](./images/Example%2011/Case%20A.jpg)

##### Case B
![Example 11 - Case B](./images/Example%2011/Case%20B.jpg)

##### Note for Example 11
-   Except Example 11, in all other previous examples, the $T(n)$ has always one particular answer. That is, $T(n)$ does not depend on the **type of n**. But in [Example 11 Case B](#case-b-4), the algorithm gives **different** $T(n)$ depending upon **type of n**.
-   Here, we need to understand the use of $O$ , $\Omega$ and $\Theta$.
-   $O$, $\Omega$ and $\Theta$ is not used for Worst Case, Best case and Average case.
-   $O$, $\Omega$ and $\Theta$ is not only used for Time and Space Complexity. They are used whenever we don\'t have an actual answer and we can only give an approximate one.
-   $O$ simply means the right side is greater or equal, or in other words, **Upper Bound**.
-   $\Omega$ simply means the left side is greater or equal, or in other words **Lower Bound**.
-   Where we can write both $O$ and $\Omega$ in there we can write $\Theta$.
-   This will be explained in [Chapter 3](../Chapter%203/Chapter%203%20-%20Asymptotic%20Notations).

##### Note for Example 11 Case A
- Here $n$ is always guaranteed to be prime. So the ``if`` condition is going to be satisfied exactly 2 times. But the outer ``for`` loop is going to be executed for n number of times. So the $T(n)$ is $O(n)$, not $O(1)$.
- Here there is only 1 possibility of $T(n)$, however, different possibilities comes in [Example 11 Case B](#case-b-4)

##### Note for Example 11 Case B
- Here $n$ can be prime or composite. So the inner ``for`` loop execution will depend on the type of $n$.
    - if $n$ is always prime then $T(n) = n$
    - if $n$ is always composite then max  $T(n) = n^2$
- So $\Omega(n) < T(n) < O(n^2)$
- So the correct expressions for T(n) are
    - $T(n) = \Omega(n)$ *represents that T(n) will be minimum n*
    - $T(n) = O(n^2)$ *represents that T(n) will be maximum $n^2$*

#### Motivational Quote
Don't cry if anything new comes in. Just Smile and learn it.

#### Example 12
![Example 12 - Case A](./images/Example%2012/Case%20A.jpg)

#### Example 13
![Example 13 - Case A](./images/Example%2013/Case%20A.jpg)

#### Example 14

##### Case A
![Example 14 - Case A](./images/Example%2014/Case%20A.jpg)

#### Exam Tricks
-   Going forward, if any **DECREASING GP SERIES** comes in, just take
    it as constant and proceed. No need to calculate,
-   Time complexity means loops only. In the exam they will give a big
    program with no recursion and loops, and will ask for time
    complexity. This kind of trick they might use.

##### Case B
![Example 14 - Case B](./images/Example%2014/Case%20B.jpg)