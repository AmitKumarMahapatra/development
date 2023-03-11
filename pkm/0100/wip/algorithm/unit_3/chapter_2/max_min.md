## Max-Min Problem

### Input and Output
- Input : An array of n-elements
- Output : Find the Maximum and Minimum elements in the array

### Example

| Array elements | 50 | 70 | 60 | 45 | 35 | 25 | 75 | 12 |
| -------------- | -- | -- | -- | -- | -- | -- | -- | -- |
| Indices        | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  |


### Approaches
1. Linear one scan (Brute force Approach).
2. Sort the array and then element in index $1$ and $n$ are the answer.
3. Use DCC.

### Approach 1

This algorithm is also called **Straight Max Min** Algorithm 

```python
def straight_max_min(array):
    max = array[0]
    min = array[0]

    for element in array:
        if(element > max):
            max = element
        else if(element < min):
            min = element

    return(max,min)
```

#### Analysis

##### Best Case
- Best case will occur if in every iteration, only the first ```if``` block gets executed. But as the loop is getting executed $n$ number of times, so the time complexity will be $\Theta(n)$.
- In this case number of comparisons will also be $n-1 = \Theta(n)$

##### Worst Case
- This case will occur when there will always be 2 comparison in every iteration. But as the loop is getting executed $n$ number of times, so the time complexity will be $\Theta(n)$.
- In this case number of comparisons will also be $2(n-1) = \Theta(n)$


##### Average Case
- This is the take away from this Approach 1, i.e ***How to find the average case ?***
- This case will occur when $50\%$ of the times $1$ comparison and remaining $50\%$ of the times, $2$ comparisons. But as the loop is getting executed $n$ number of times, so the time complexity will be $\Theta(n)$.
- Number of comparison Mathematically will be, 

$$
\bigg( \frac{n-1}{2} * 1 \bigg) + \bigg(\frac{n-1}{2} * 2\bigg) =  \frac{n-1}{2}
$$

- Number of comparisons = $\frac{n-1}{2} = \Theta(n)$

#### Note
- So we can conclude,

$$
T(n) = \Theta(n)
$$

- But one thing to note here is, the number of comparison for a given input might change if we just swap the ```if``` and ```else if``` case.
- For Example

    | Array elements | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  |
    | -------------- | -- | -- | -- | -- | -- | -- | -- | -- |
    | Indices        | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  |

    - No of comparison in this case is 7 *(Best case)*
        ```python
            for element in array:
                if(element > max):
                    max = element
                else if(element < min):
                    min = element
        ```
    - No of comparison in this case is 14 *(Worst case)*
        ```python
            for element in array:
                if(element < min):
                    min = element
                else if(element > max):
                    max = element
        ```
    - But the above will have no impact on the asymptotic time complexity or asymptotic limit of number of comparisons. It will only affect the mathematical value of number of comparisons for a given input.


### Approach 2

- Sorting will be discussed in the next chapters. 
- This approach will be sorting the array first. This step which will take $n * log_{}n$ time.
- Then ```array[starting_index]``` is the minimum element and ```array[ending_index]``` is the maximum element (assuming the array is sorted in ascending order). This step will take $\Theta(1)$ time.
- So this approach will take in total 

$$
\Theta(n * log_{}n) + \Theta(1) = \Theta(n * log_{}n)
$$

- This approach is the worst approach, because the [brute force approach](#approach-1) is even taking less time.

### Approach 3
This approach uses Divide, Conquer and Combine template to solve the problem

#### Definition of small problem

$$
If \ n = 1 \ then \ 0 \ Comparison \\
If \ n = 2 \ then \ 1 \ Comparison
$$

