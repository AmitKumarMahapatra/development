# Fundamental DataType Vs Mutability

## Basic
- Python has 5 fundamental data-types.
    1. int
    2. float
    3. complex
    4. bool
    5. str
- Dictionary meaning of Mutable means Changeable and Immutable means Non-Changeable.
- **ALL Fundamental Data-Types are Immutable**
- This means, **Once we created the object, we can not perform any kind of changes on that object.**
- **If we are trying to make any changes, then a new object will be created with those changes.**

## Proof of Immutability

### Example 1
```python
nNumber = 10
print(id(nNumber)) # Output 10101123
nNumber += 1
print(id(nNumber)) # Output 10101456
```
- In Python everything is an object. So `nNumber` is also pointing to an object of `int` type which holds the value 10. The moment we tried to change the object, a new object gets created and the older object is now ready for [**Garbage Collection**]().

#### Diagrammatically
![Insert the image here]()

### Example 2
```python
nNumber1 = 10
nNumber2 = nNumber1

print(nNumber1)     # Output 10
print(nNumber2)     # Output 10
print(id(nNumber1)) # Output 10101123
print(id(nNumber2)) # Output 10101123

# New Object created here
nNumber2 += 1

print(nNumber1)     # Output 10
print(nNumber2)     # Output 11
print(id(nNumber1)) # Output 10101123
print(id(nNumber2)) # Output 10101456
```

#### Diagrammatically
![Insert the image here]()

*If instead of taking 2 integers, wo would have taken 2 List type objects, the behavior would be different. This is because List objects are mutable.*

```python
lstNumber1 = [10,20,30]
lstNumber2 = nNumber1

print(lstNumber1)     # Output [10,20,30]
print(lstNumber2)     # Output [10,20,30]
print(id(nNumber1))   # Output 10101123
print(id(nNumber2))   # Output 10101123

# New Object created here
nNumber2[0] = 5

print(lstNumber1)     # Output [5,20,30]
print(lstNumber2)     # Output [5,20,30]
print(id(nNumber1))   # Output 10101123
print(id(nNumber2))   # Output 10101123
```

#### Diagrammatically
![Insert the image here]()

## Why Immutability is required ?

### Object Reusability Nature of PVM
- In Python if a new object is required, then PVM won’t create object immediately. 
- First, it will check is any object available with the required content or not. If available then existing object will be reused. 
- If it is not available then only a new object will be created.
- Object Reusability concept is not applicable to `complex` datatype, however applicable to all other 4 *(int, float, bool, str)* datatype.

##### Example 1 
```python
nNumber1 = 10
nNumber2 = 10
nNumber3 = 10
print(id(nNumber1)) # Output 139772169011728
print(id(nNumber2)) # Output 139772169011728
print(id(nNumber3)) # Output 139772169011728
```
*There exists only 1 object not 3 and 3 reference variables are pointing to that object.*

##### Example 2
```python
fNumber1 = 10.256
fNumber2 = 10.256
print(fNumber1 is fNumber2) # Output True
```
*There exists only 1 object not 2 and 2 reference variables are pointing to that object.*

### Benefit
- The advantage of this approach is memory utilization will be improved.
- Creating an object is a costly operation, so performance will be improved.

### Issue and Solution
- But the problem in this approach is, several references pointing to the same object, by using one reference if we are allowed to change the content in the existing object then the remaining references will be effected.
- For example, Say, in a city, there are $10000000$ voters, and every voter will have same city name. Now, as PVM will create 1 object to store the city name with $10000000$ reference variable, lot of spaces got saved. But however, if there is a requirement of changing the city name for one of the voter, and if PVM will change the object, then forget about performance, all $10000000$ will get affected.
- To prevent this **immutability** concept is required. According to this once creates an object we are not allowed to change content.
- If we are trying to change with those changes a new object will be created.

## Note
- If you try to verify the immutability nature in **REPL Tools**, you might get wrong results. However, in IDEs and Python Script file execution will always provide correct result.