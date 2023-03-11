# Dictionary in Python

## Dictionary Class Object Properties 
- Duplicate keys are not allowed but values can be duplicated. If duplicated, then the final value will be considered.
    ```python
    dictStudents = {
        "Name" : "Amit",
        "Roll" : 39,
        "School" : "SIT",
        "Name" : "ABC"
    }
    print(dictStudents)     
    # Output {'Name': 'ABC', 'Roll': 39, 'School': 'SIT'}
    ```
- Heterogeneous objects are allowed for both key and values.
- Insertion order is not preserved. It is based on Hash-code of the key.
- Indexing and Slicing concepts are not applicable.
- Dictionaries are mutable.
- Dictionaries are dynamic.

## Ways to Create a Dictionary Class Object

### Empty Dictionary Creation
```python
# Way 1
dictEmpty1 = {} 
# Way 2
dictEmpty2 = dict()

print(dictEmpty1)           # Output {}
print(type(dictEmpty1))     # Output <class 'dict'>
print(dictEmpty2)           # Output {}
print(type(dictEmpty2))     # Output <class 'dict'>
```

### Dictionary Creation and Initialization (when the content is known in advance)
```python
dictStudent = {
    "Name" : "Amit",
    "Roll No" : 39,
    "School" : "SIT"
}
print(dictStudent)          # Output {'Name': 'Amit', 'Roll No': 39, 'School': 'SIT'}
```

### Taking input as a Dictionary Object instead of string (eval() function)
```python
dictInput = eval(input("Input in form of dictionary "))     # Input {"A": 100, "B": 200}
print(dictInput)                                            # Output {'A': 100, 'B': 200}
print(type(dictInput))                                      # Output <class 'dict'>
```

### Converting any object into Dictionary type (dict() function)
```python
# From List of Lists
listAlphaNums = [["A", 1],["B", 2],["C", 3]]
dictAlphaNums = dict(listAlphaNums)
print(dictAlphaNums)                            # Output {'A': 1, 'B': 2, 'C': 3}

# From List of Tuples [Most commonly Used]
listAlphaNums = [("A", 1),("B", 2),("C", 3)]
dictAlphaNums = dict(listAlphaNums)
print(dictAlphaNums)                            # Output {'A': 1, 'B': 2, 'C': 3}

# From List of Sets

# From Tuple of Lists
tupleAlphaNums = (["A", 1],["B", 2],["C", 3])
dictAlphaNums = dict(tupleAlphaNums)
print(dictAlphaNums)                            # Output {'A': 1, 'B': 2, 'C': 3}

# From Tuple of Tuples
tupleAlphaNums = (("A", 1),("B", 2),("C", 3))
dictAlphaNums = dict(tupleAlphaNums)
print(dictAlphaNums)                            # Output {'A': 1, 'B': 2, 'C': 3}

# From Tuple of Sets

# From Set of Tuples
# From Set of Sets
```

#### Loopholes of ```dict()```
- Set of Lists is not allowed, so anyway this function will not work
- Every group of collection, must contain, 2 elements. Otherwise, we will get Value Error.
    ```python
    listAlphaNums = [("A", 1, "C"),("B", 2),("C", 3)]
    dictAlphaNums = dict(listAlphaNums)     # Error ValueError: dictionary update sequence element #0 has length 3; 2 is required
    print(dictAlphaNums)
    ```  


## CRUD Operation on Dictionary Class Object

### Accessing Value in the Dictionary based on Key

#### Direct Retrieval
```python
dictStudent = {
    "Name" : "Amit",
    "Roll No" : 39,
    "School" : "SIT"
}
print(dictStudent["Name"])      # Output Amit
print(dictStudent["Age"])       # Error KeyError: 'Age'
```

#### Using ```in``` operator and if else statement
```python
dictStudent = {
    "Name" : "Amit",
    "Roll No" : 39,
    "School" : "SIT"
}
key = "Age"
if key in dictStudent:
    print(dictStudent[key])
else:
    print("The Key is not present")     # Output The Key is not present
```

    
    

#### Using ```get()```
```python
dictStudent = {
    "Name" : "Amit",
    "Roll No" : 39,
    "School" : "SIT"
}
print(dictStudent.get("Name"))          # Output Amit
print(dictStudent.get("Age"))           # Output None
print(dictStudent.get("Branch", {}))    # Output {}
```

#### Accessing all the keys using for loop
```python
dictStudent = {
    "Name" : "Amit",
    "Roll No" : 39,
    "School" : "SIT"
}
for key in dictStudent:
    print(f'{key} : {dictStudent[key]}')

# Output
# Name : Amit
# Roll No : 39
# School : SIT
```

### Add and Update Key : Value pair in the Dictionary
- Syntax : dictionary[key] = value
- If the key is not available then a new entry will be added to the dictionary with the specified key-value pair
- If the key is already available then old value will be replaced with new value
    ```python
    dictStudent = {
        "Name" : "Amit",
        "Roll No" : 39,
        "School" : "SIT"
    }
    dictStudent["Name"] = "Chiku"
    dictStudent["Branch"] = "CSE"
    print(dictStudent)              # Output {'Name': 'Chiku', 'Roll No': 39, 'School': 'SIT', 'Branch': 'CSE'}
    ```

### Deleting Value in the Dictionary based on Key
```python
dictStudent = {
    "Name" : "Amit",
    "Roll No" : 39,
    "School" : "SIT"
}
del dictStudent["Name"]
print(dictStudent)                                  # Output {'Roll No': 39, 'School': 'SIT'}
del dictStudent["School"], dictStudent["Roll No"]   # Output {}
print(dictStudent)

#del dictStudent["Branch"] will throw KeyError

key = "Branch"
if key in dictStudent:
    del dictStudent[key]
else:
    print(f'the key {key} is not available')        # Output the key Branch is not available
print(dictStudent)                                  # Output {}
```

## Operators on Dictionary Object

### Mathematical Operator
- Not Applicable (+ and *)

### Equality Operator
- Number of Key-Value pairs and the content of each Key-Value pair, must be same.
- Order is not important.
    ```python
    dictStudent1 = {
        "Name" : "Amit",
        "Roll No" : 39,
        "School" : "SIT"
    }
    dictStudent2 = {
        "Roll No" : 39,
        "School" : "SIT",
        "Name" : "Amit"
    }
    print(dictStudent1 == dictStudent2)     #Output True
    ```

### Relational Operator
 - Not Applicable (>, >=, <, <=)

### Membership Operator
- Only applicable for keys not values
    ```python
    dictStudent = {
        "Name" : "Amit",
        "Roll No" : 39,
        "School" : "SIT"
    }
    print(dictStudent["Name"])  # Output Amit
    print(dictStudent["Amit"])  # Error KeyError: 'Amit'
    ```

## Functions and Methods of Dictionary Object

### Python Built-In ```len()```
- Returns the number of items in the dictionary
    ```python
    dictStudent = {
        "Name": "Amit",
        "Roll No": 39,
        "School": "SIT"
    }
    print(len(dictStudent))    
    ```

### ```update()```
- The below example will
    - Add all the new Key-Value pair from dictStudentMeta to dictStudentInfo
    - Update all the existing Key-Value pair indictStudentMeta to the new value present in dictStudentInfo
        ```python
        dictStudentInfo = {
            "Name": "Amit",
            "Roll No": 39,
            "School": "SIT"
        }
        dictStudentMeta = {
            "Name": "Amit Mahapatra",
            "Branch": "CSE"
        }
        dictStudentInfo.update(dictStudentMeta)
        print(dictStudentInfo)
        ```

### ```get()```
```python

```

### ```keys()```
- It returns all keys associated with dictionary of return type dict.keys
    ```python
    dictStudentInfo = {
        "Name": "Amit",
        "Roll No": 39,
        "School": "SIT"
    }
    StudentKeys = dictStudentInfo.keys()
    print(StudentKeys)
    print(type(StudentKeys))
    for key in StudentKeys:
        print(key)
    ```

### ```values()```
- It returns all values associated with dictionary of return type dict.values
    ```python
    dictStudentInfo = {
        "Name": "Amit",
        "Roll No": 39,
        "School": "SIT"
    }
    StudentValues = dictStudentInfo.values()
    print(StudentValues)
    print(type(StudentValues))
    for value in StudentValues:
        print(value)
    ```

### ```items()```
- It returns all key-value pair associated with dictionary of return type dict.items.
    ```python
    dictStudentInfo = {
        "Name": "Amit",
        "Roll No": 39,
        "School": "SIT"
    }
    StudentItems = dictStudentInfo.items()
    print(StudentItems)
    print(type(StudentItems))
    for item in StudentItems:
        print(item)

    # Most commonly Used approach is as below
    for key,value in StudentItems:
        print(f"{key} => {value}");
    ```

### ```pop(key)```
- It returns the value associated with the key and removes the key-value pair from the dictionary.
- If the key is not present, then it returns KeyError. So before using this method, we should use the Membership Operator.
    ```python
    dictStudentInfo = {
        "Name": "Amit",
        "Roll No": 39,
        "School": "SIT"
    }
    strName = None
    if "Name" in dictStudentInfo:
        strName = dictStudentInfo.pop("Name")
    print(strName)
    print(type(strName))
    ```

### ```pop(key,value)```
- It returns the value associated with the key and removes the key-value pair from the dictionary. (exactly same as pop())
- If the key is not present, then it returns the given value instead of raising KeyError. *(Here is the difference)*
    ```python
    dictStudentInfo = {
        "Name": "Amit",
        "Roll No": 39,
        "School": "SIT"
    }
    strRollNo = dictStudentInfo.pop("Roll No", "Not Exists")
    print(strRollNo)
    strBranch = dictStudentInfo.pop("Roll No", "Not Exists")
    print(strBranch)
    ```

### ```popitem()```
- It removes an arbitrary item(key-value) from the dictionary and returns it in form of tuple.
- If the dictionary is empty, we will get KeyError.
    ```python
    dictStudentInfo = {
        "Name": "Amit",
        "Roll No": 39,
        "School": "SIT"
    }
    tplItem = dictStudentInfo.popitem()
    print(tplItem)
    ```

### ```clear()```
- To remove all entries from the dictionary.
    ```python
    dictStudentInfo = {
        "Name": "Amit",
        "Roll No": 39,
        "School": "SIT"
    }
    print(dictStudentInfo)
    dictStudentInfo.clear()
    print(dictStudentInfo)
    ```

### ```setdefault()```
```python

```

### ```copy()```
- To create exactly duplicate dictionary (cloned copy)
    ```python
    dictStudent = {
        "Name": "Amit",
        "Roll No": 39,
        "School": "SIT"
    }

    dictStudentCopy = dictStudent.copy()
    dictStudent["Name"] = "Chiku"
    print(dictStudent)
    print(dictStudentCopy)
    ```