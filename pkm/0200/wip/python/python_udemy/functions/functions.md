# Functions in Python

- In Python, in a function, if there is no return statement, then by default the function returns `None`
    ```python
    def greet():
        print("Hello World !!")

    result = greet()
    print(f"The result is {result}")
    ```

- In Python, a function can return more than 1 value. This feature is not available in other languages.
    ```python
    def sum_and_subtract(num1, num2):
        sum = num1 + num2
        sub = num1 - num2
        return sum, sub

    sum,sub = sum_and_subtract(20,10)
    print(f"The sum is {sum} and the subtraction is {sub}")
    ```

- However in reality, internally, the function is returning only 1 value. Because the comma separated values are nothing but tuple.
    ```python
    def sum_and_subtract(num1, num2):
        sum = num1 + num2
        sub = num1 - num2
        return sum, sub
    result = sum_and_subtract(20,10)
    print(result)
    print(type(result))
    ```

- Function Parameters
    - param1 and param2 are called Formal Parameter
    - arg1 and arg2 are called Actual Arguments
    ```python
    def fun(param1, param2):
        pass

    fun(arg1, arg2)
    ```

- In Python, 4 Types of Arguments are there
    1. Positional Argument
    2. Keyword Argument
    3. Default Argument
    4. Variable Length Argument

Positional Arguments
- These are the arguments passed to function in correct positional order.
- If we change the order then result may be changed.
- The number of arguments and position of arguments must be matched. If we change the number of arguments then we will get error.
- Example
    ```python
    def subtract(num1, num2):
        sub = num1 - num2
        return sub

    result = subtract(20,10)
    print(result)
    result = subtract(10,20)
    print(result)
    ```


Keyword Arguments
- We can pass argument values by keyword i.e by parameter name.
- Here the order of arguments is not important but number of arguments must be matched.
- Example
    ```python
    def subtract(num1, num2):
        sub = num1 - num2
        return sub
    
    result = subtract(num1 = 20, num2 = 10)
    print(result)
    result = subtract(num2 = 10, num1 = 20)
    print(result)
    ```
- We can use both positional and keyword arguments simultaneously. But first we have to take positional arguments and then keyword arguments, otherwise we will get syntax error.
- Example
    ```python
    def subtract(num1, num2):
        sub = num1 - num2
        return sub
    
    result = subtract(num1 = 20, num2 = 10)
    print(result)
    result = subtract(20, num2 = 10)
    print(result)
    result = subtract(10, 20)
    print(result)
    result = subtract(num1 = 10, 20) #Error
    print(result)
    ```
- The Positional Arguments are the mostly used argument type.


Default Argument
- After default arguments we should not take non default arguments.
- Example
```python
def wish1(name,msg):
	pass
def wish2(name="Guest",msg="Good Morning"):
	pass
def wish3(name,msg="Good Morning"):
	pass
# Invalid
def wish4(name="Guest",msg):
	pass
```

- Argument and Parameter Order should be,
    - During function calling Positional then Keyword Arguments
    - During function definition, first Positional, then Default Parameter

Variable Length Arguments
- Sometimes we can pass variable number of arguments to our function, such type of arguments are called variable length arguments.
- We can call this function by passing any number of arguments including zero number.
- Internally all these values represented in the form of tuple.
- Example
    ```python
    def sum(*numbers):
        print(type(numbers))
        sum = 0
        for number in numbers
        sum = sum+number
        return sum

    sum()
    sum(10)
    sum(10,20)
    sum(10,20,30)
    ```
