# List Data Structure

## List Class Object Properties
- Heterogeneous objects are allowed
- Duplicates are allowed.
- Length is Dynamic. 
- Also Insertion order is preserved.
- Both positive and negative indexing is also allowed
- Mutable

## Ways to Create a List Class Object

### You can create an empty List
```python
listEmpty = []
print(listEmpty)            
# Output []
```

### If you already know the elements, you can create a new list and initialize it in one statement.
```python
listNumbers = [1,2,3,4,5,6,7]
print(listNumbers)          
# Output [1, 2, 3, 4, 5, 6, 7]
```

### You can take input directly inside a list using `eval()` function.
```python
lstData = eval(input("Enter the elements inside a list ")) 
print(lstData)              # Output [1, 2, 3, 4]
print (type(lstData))       # Output <class 'list'>
```

### If you want to convert any object into list type, you can use `list()` function.
```python
strName = "IRONMAN"
listName =  list(strName)   
print(listName)             
# Output ['I','R','O','N','M','A','N']
```

### Converting a range of value to list Datatype.
```python
lstData = list(range(1,5,2))
print(lstData)              
# Output [1, 3]
```

### By using split() function. Only Applicable for string objects.
```python
strSentence = "this is a sentence"
lstData = strSentence.split()
print(lstData)              
# Output ['this', 'is', 'a', 'sentence']
```


## Accessing Elements of a List Class Object

### By using Index Operator OR By Using Slice Operator
- slice operator, never raise the index error.
    ```python
    listNumbers = [1,2,3,4,5,6,7,8,9]
    print(listNumbers[4:100])
    ```

### `for` loop
- For accessing every elements of a list, we should use `for` loop, specially in python.
    ```python
    listNumbers = [1,2,3,4,5,6,7,8,9]
    for number in listNumbers:
        print(number) 
    ```

### Note
- The rules here for both the operators are exactly same as any string object

## Types of Operator Applicable on a List Class Object

### Mathematical Operators Applicable on a List Class Object

#### "+" Operator (Concatenation Operator)
- For Concatenation, both the operands must be list.
    ```python
    listFirst = [1,2,3]
    listSecond = [4,5]
    listConcat = listFirst + listSecond
    print(listConcat) 
    # Output [1, 2, 3, 4, 5]
    ```
- Otherwise, we will get error.
    ```python
    listFirst = [1,2,3]
    nNumber = 10
    listConcat = listFirst + nNumber
    print(listConcat) 
    # Output TypeError: can only concatenate list (not "int") to list
    ```
- Concatenation operator is commutative.
    ```python
    listNumbers = [1,2,3]
    listRepeat1 = listNumbers * 2
    listRepeat2 = 2 * listNumbers
    print(listRepeat1 == listRepeat2)   # Output True
    print(listRepeat1)                  # Output [1, 2, 3, 1, 2, 3]
    print(listRepeat2)                  # Output [1, 2, 3, 1, 2, 3]
    ```

#### "*" Operator (Repetition Operator)
- For Repetition, one operand has to be list and the other has to be int.
    ```python
    listNumbers = [1,2,3]
    listRepeat = listNumbers * 2
    print(listRepeat)
    ```
- Otherwise, we will get error.
    ```python
    listFirst = [1,2,3]
    listSecond = [4,5]
    listRepeat = listFirst * listSecond
    print(listRepeat) 
    # Output TypeError: can't multiply sequence by non-int of type 'list'
    ```



### Equality Operators Applicable on a List Class Object

#### `==` and `!=`
- == Operators return `True` if below 3 are met in case of list objects
    - The number of elements must be same.
    - The order of the elements must be same *(because in list the order is important)*
    - The content of the elements must be same *(including case)*
- Example
    ```python
    listAnimals1 = ["dog", "cat", "rat"]
    listAnimals2 = ["Dog", "Cat", "Rat"]
    listAnimals3 = ["DOG", "CAT", "RAT"]
    listAnimals4 = ["Cat", "Rat", "Dog"]
    listAnimals5 = ["dog", "cat", "rat"]

    print(listAnimals1 == listAnimals2) # Output False
    print(listAnimals1 == listAnimals3) # Output False
    print(listAnimals1 == listAnimals4) # Output False
    print(listAnimals1 == listAnimals5) # Output True
    ```

### Membership Operators Applicable on a List Class Object

#### `in` and `not in`
- Example 1
    ```python
    listNumbers = [10, 20, 30, 40]
    print(10 in listNumbers)        # Output True
    print(50 not in listNumbers)    # Output True
    print(70 in listNumbers)        # Output False
    print(70 not in listNumbers)    # Output True
    ```
- Example 2
    ```python
    strSentence = "the quick brown fox jumps over the lazy dog"
    listAlphabets = (list(set([letter for word in strSentence.split() for letter in word])))
    listAlphabets.sort()
    print(listAlphabets)            
    # Output ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    ```

### Relational Operators Applicable on a List Class Object
- Whenever we are using relational Operators (<, <=, >, >=) between List Objects, only $1^{st}$ element comparison will be performed.
- Here number of elements is not important.
- Example 1
    ```python
    listNumbers1 = [10, 20, 30, 40]
    listNumbers2 = [50, 60]
    print( listNumbers1 > listNumbers2 )    #False
    print( listNumbers1 >= listNumbers2 )   #False
    print( listNumbers1 < listNumbers2 )    #True
    print( listNumbers1 <= listNumbers2 )   #True
    ```
- Example 2
    ```python
    listNumbers1 = [10, 20, 30, 40]
    listNumbers2 = [10, 20, 30, 40, 50, 60]
    print( listNumbers1 > listNumbers2 )    #False
    print( listNumbers1 >= listNumbers2 )   #False
    print( listNumbers1 < listNumbers2 )    #True
    print( listNumbers1 <= listNumbers2 )   #True
    ```

## Functions and Methods for List Class Object

### Theory
- Python has some In-Built Functions. These functions we can apply almost on every class objects.
- *I think, in user-defined class objects, we can make these built-in functions applicable, by implementing the body of some dunder(double underscore) methods.*
- Examples of such Functions are `len()` and `sorted()` etc.
- Every Class also provides some methods that can be applied on the objects.
- Examples of such methods are `list.append()` etc.

### List Class Object Behavior on Built-In Python Functions

#### `len()`
- Returns the number of elements present in the list
- Example
    ```python
    listNumbers = [1,2,3,4]
    print(len(listNumbers)) 
    #output 4
    ```

#### `sorted()`

```python

```


#### `reversed()`

```python

```

### List Class Object Specific Methods

#### Index and length related methods

##### `count()`
- It returns the number of occurrences of specified item in the list.
- Example
    ```python
    listNumbers = [1,2,2,2,2,3,3]
    print(listNumbers.count(1))     # Output 1
    print(listNumbers.count(2))     # Output 4
    print(listNumbers.count(3))     # Output 2
    print(listNumbers.count(4))     # Output 0
    ```

##### `index()`
- Returns the index of first occurrence of the specified item.
- Example
    ```python
    listNumbers = [1, 2, 2, 2, 2, 3, 3]
    print(listNumbers.index(1))     # Output 0
    print(listNumbers.index(2))     # Output 1
    print(listNumbers.index(3))     # Output 5
    print(listNumbers.index(4))     # Error ValueError: 4 is not in list
    ```
- If the specified element not present in the list then we will get ValueError. Hence before using `index()` method, we have to check whether item present in the list or not by using `in` operator. 
    ```python
    listNumbers = [1, 2, 2, 2, 2, 3, 3]
    print( 4 in listNumbers)        
    # Output False
    ```

#### Inserting Elements to the list

##### `append()`
- We can use `append()` function to add item at the end of the list.
- Example
    ```python
    listAlphabet = []
    listAlphabet.append("A")
    listAlphabet.append("B")
    listAlphabet.append("C")
    print(listAlphabet)         
    # Output ['A', 'B', 'C']
    ```

##### `insert()`
- To insert item at specified index position
- Example
    ```python
    listNumbers = [1,2,3,4,5]
    listNumbers.insert(1,888)
    print(listNumbers)
    # Output[1, 888, 2, 3, 4, 5]
    ```
- If the specified index is greater than max index then element will be inserted at last position. 
- If the specified index is smaller than min index then element will be inserted at first position.
- Example
    ```python
    listNumbers = [1,2,3,4,5]
    listNumbers.insert(10,777)
    listNumbers.insert(-10,999)
    print(listNumbers) 
    # Output [999, 1, 2, 3, 4, 5, 777]
    ```

##### `extend()`
- We can use `extend()` function to add all items of one list to another list.
- Example
    ```python
    listFood = ["Chicken", "Mutton", "Fish"]
    listRestaurant = ["KFC", "BurgerKing", "MacD"]
    listFood.extend(listRestaurant)
    print(listFood)
    ```

##### Difference between `append()` and `extend()`
```python
listEvenNumbers = [2,4,6,8]
listOddNumbers = [1,3,5]
listAppended = listEvenNumbers.append(listOddNumbers)
listExtended = listEvenNumbers.extend(listOddNumbers)
print(listAppended)
print(len(listAppended))
print(listExtended)
print(len(listExtended))
```

##### Tricky thing about `extend()`
```python
listEvenNumbers = [2,4,6,8]
strName = "Amit" # try 123 instead of a string
listAppended = listEvenNumbers.append(strName)
listExtended = listEvenNumbers.extend(strName)
print(listAppended)
print(len(listAppended))
print(listExtended)
print(len(listExtended))
```

#### Removing Elements from the list

##### `remove()`
- We can use  remove() function to remove specified item from the list.
- Example
    ```python
    listFood = ["Chicken", "Mutton", "Fish"]
    listFood.remove("Chicken")
    print(listFood)
    ```
- If the item present multiple times then only first occurrence will be removed.
    ```python
    listFood = ["Chicken", "Mutton", "Fish", "Chicken"]
    listFood.remove("Chicken")
    print(listFood)
    ```
- If the specified item not present in list then we will get `ValueError`. So before using `remove()` method first we have to check specified element present in the list or not by using in operator.
    ```python
    listFood = ["Chicken", "Mutton", "Fish", "Chicken"]
    listFood.remove("Egg")
    print(listFood)
    ```
- Correct Approach
    ```python
    listFood = ["Chicken", "Mutton", "Fish", "Chicken"]
    if ("Chicken" in listFood):
        listFood.remove("Chicken")
    print(listFood)
    ```
- For removing all occurrences of an element, we don't have any built-in list method. We need to write the code for that.
    ```python
    while(True):
        if( strItem in listItems ):
            listItems.remove(strItem)
        else:
            break
    print(listItems)
    ```

##### `pop()` and `pop(index)`
- `pop()` function removes and returns the last element of the list.
- This is only function which manipulates list and returns some element.
- Example
    ```python
    listFood = ["Chicken", "Mutton", "Fish"]
    listFood.pop()
    print(listFood)
    ```

- If the list is empty then `pop()` function raises `IndexError`. So we should check the length and then use the `pop()`.
    ```python
    listFood = []
    listFood.pop()
    print(listFood)
    ```

- We can use to `pop(index)` remove elements based on index and return the element present at specified index. If the specified index is not valid, then we will get `IndexError`.
    ```python
    listFood = ["Chicken", "Mutton", "Fish"]
    listFood.pop(2)
    print(listFood)
    ```

##### `clear()`
- `clear()` function removes all the elements of the list and the result is always an empty list.
- Example
    ```python
    listFood = ["Chicken", "Mutton", "Fish"]
    listFood.clear()
    print(listFood)
    ```

#### Ordering Elements of the list

##### `reverse()`
- `reverse()` function reverse the order of elements in the list.
- It is different than the python Built-In `reversed()` function.
- Example
    ```python
    listFood = ["Chicken", "Mutton", "Fish"]
    listFood.reverse()
    print(listFood)
    ```

##### `sort()`
- In List by default insertion order is preserved. If want to sort the elements of list according to default natural sorting order then we should go for `sort()` method.
- For Numbers, default Natural sorting Order is Ascending Order.
- For Strings, default Natural sorting order is Alphabetical Order.
- To use `sort()` function, compulsory list should contain only homogeneous elements. Otherwise we will get `TypeError`.
- It is different than python in-built function `sorted()`.
- Example
    ```python
    listFood = ["Chicken", "Mutton", "Fish"]
    listFood.sort()
    print(listFood)
    ```
- We can sort according to reverse of default natural sorting order by using reverse=True argument. By default, if not specified, the value is `False`
- Example
    ```python
    listFood = ["Chicken", "Mutton", "Fish"]
    listFood.sort(reverse=True)
    print(listFood)
    ```

#### List Aliasing
- The process of giving another reference variable to the existing list is called aliasing.
- Example
    ```python
    listNumbers1 = [10,20,30,40]
    listNumbers2 = listNumbers1
    print(id(listNumbers1))
    print(id(listNumbers2))
    ```
- The problem in this approach is by using one reference variable if we are changing content, then those changes will be reflected to the other reference variable.

#### List Cloning
##### Cloning by writing code (Using Slice Operator)
```python
listNumbers1 = [10,20,30,40]
listNumbers2 = listNumbers1[:]
print(id(listNumbers1))
print(id(listNumbers2))
```

##### Cloning by `copy()`
```python
listNumbers1 = [10,20,30,40]
listNumbers2 = listNumbers1.copy()
print(id(listNumbers1))
print(id(listNumbers2))
```
##### Note
There is a concept of deep cloning and shallow cloning, which is an advanced topic

## List Comprehension

### Theory
- List Comprehensions, is very easy and compact way of creating list objects from any iterable objects (Like List, Tuple, Dictionary, Range etc) based on some condition.
- A list comprehension consists of brackets containing an expression followed by a for clause, then zero or more for or if clauses.
- Syntax: `list = [expression for item in list if condition]`

### Example 1
```python
vec = [-4, -2, 0, 2, 4]
# create a new list with the values doubled
print([x*2 for x in vec])
 
# filter the list to exclude negative numbers
print([x for x in vec if x >= 0])
 
# apply a function to all the elements
print([abs(x) for x in vec])
```

### Example 2
```python
# call a method on each element
freshfruit = ['  banana', '  loganberry ', 'passion fruit  ']
print([weapon.strip() for weapon in freshfruit])
```

### Example 3
```Python
# create a list of 2-tuples like (number, square)
print([(x, x**2) for x in range(6)])
 
# the tuple must be parenthesized, otherwise an error is raised
print([x, x**2 for x in range(6)])
```

### Example 4
```python
matrix = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
]
# transpose rows and columns:
print([[row[i] for row in matrix] for i in range(4)])
```