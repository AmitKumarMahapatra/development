# Python Notes

- Python follows snake case (e.g. python_message) for it's variables, functions and methods
- All variables, functions and methods are in lower case
- Python follows Pascal case (e.g EarthCreature) for it's classes

## Hello world Program in Python

```python
print('Hello World!')
```

- strings can be wrapped with in single quote or double quote
```python
message_in_single_quote = 'Message in single quote'
message_in_double_quote = "Message's is wrapped in double quotes"

print(message_in_single_quote)
print(message_in_double_quote)
```

## Multi line strings / Doc string
```python
multi_line_single_quote_string = '''MCU is nothing without Iron Man.
Now that Iron Man is dead, I don't know whats gonna happen'''
print(multi_line_single_quote_string)

multi_line_double_quote_string = """DC used to create good movies.
But problem with DC I think is, it's just #Dark and "Not my type" of thing."""

print(multi_line_double_quote_string)
```

- How to find number of characters in a string
```python
movie_name = "Avengers Endgame"

# using len() function
print("Number of characters in my favorite movie " + movie_name + " is", end=" ")
print(len(movie_name))
```

- Access the character at a particular index in a string
```python
movie_name = "Avengers Endgame"
print(movie_name[10]) #Output 'n'
print(movie_name[16]) #IndexError: string index out of range
```

## String Slicing (List Slicing concept is also there in python)
- Slicing is basically a way to extract a certain part of a string or a list

- Access a range of characters in a string
```python
movie_name = "Avengers Endgame"
print(movie_name[0:8]) #Output Avengers
```

- Access till the last character starting from a particular character
```python
movie_name = "Avengers Endgame"
print(movie_name[5:]) #Output rs Endgame
```

- Access the full string using this notation
```python
movie_name = "Avengers Endgame"
print(movie_name[:]) #Output Avengers Endgame
```

## Frequently used methods in Python for string objects

- Make all the characters of a string in lower case or upper case
```python
movie_name = "Avengers Endgame"
print(movie_name.lower()) #Output avengers endgame
print(movie_name.lower()) #Output AVENGERS ENDGAME
```

### Searching in a string related methods [count() and find() and replace()]
- count the occurrence of a certain character/sub-string in a string (Note: It is case sensitive)
```python
movie_name = "Avengers Endgame"
print(movie_name.count('e')) #Output 3
print(movie_name.count('en')) #Output 1
print(movie_name.count('Infinity War')) #Output 0
print(movie_name.count('Avengers End')) #Output 1
```

- find the first index of occurrence of a certain character/sub-string in a string (Note: It is case sensitive)
```python
movie_name = "Avengers Endgame"
print(movie_name.find('e')) #Output 2
print(movie_name.find('en')) #Output 2
print(movie_name.find('Infinity War')) #Output -1
print(movie_name.find('Avengers End')) #Output 0
print(movie_name.find('Avengers End ')) #Output -1
```

- replace method in python
```python
movie_name = "Avengers Endgame"
print(movie_name.replace('e', 'a')) #Output "Avangars Endgama"
print(movie_name.replace('en', 'ann')) #Output 2 "Avanngers Endgame"
print(movie_name.replace('Infinity War', 'Avenger')) #Output "Avengers Endgame"
print(movie_name.replace('Avengers End', 'Avengers Begin')) #Output "Avengers Begingame"
```

- replace method in python returns a new string object instead of changing the same.
```python
movie_name = "Avengers Endgame"
movie_name.replace('e', 'a')
print(movie_name) #Output "Avengers Endgame"

# reassignment of the same variable
# this is very common practice
movie_name =  movie_name.replace('e', 'a')
print(movie_name) #Output "Avangars Endgama"
```

- string concatenation in python

```python
greeting = "Hi"
name = "Tony Stark"

#Version 1
message = greeting + name
print(message) # Output "HiTony Stark" 

#Version 2
message  = greeting + ", " + name + ". Welcome !"
print(message) #Output "Hi, Tony Stark. Welcome !"

#Version 3 (Also called formatted string)
message = "{}, {}. Welcome !".format(greeting,name)
print(message) #Output "Hi, Tony Stark. Welcome !"
```


- string formatting in python

[Python Official Documentation for string formatting](https://docs.python.org/3/tutorial/inputoutput.html)

```python
person = {"name": "Tony Stark" , "age": 40}

#Version 1
message = "My name is " + person["name"] + ". I am " + str(person["age"]) + " years old."
print(message)

#Version 2 (Note: By default the parameters of the format sequence is followed in formatted string)
message = "My name is {}. I am {} years old.".format(person["name"], person["age"])
print(message)

#Version 2.1 (Note: the sequence can be changed as per requirement)
message = "My name is {0}. I am {1} years old.".format(person["name"], person["age"])
print(message)

#Version 2.1 (Note: this is mostly used when we need to repeat a particulate value several times)
message = "My name is {0}. I am {1} years old. My brother is also {1} years old".format(person["name"], person["age"])
print(message)
```

- Accessing the elements present in a dictionary or list in string formatting
```python

person = {"name": "Tony Stark" , "age": 40}
hobbies = ["books", "movies"]

#Version 3.1
message = "My name is {0[name]}. I am {1[age]} years old. My brother is also {1[age]} years old".format(person, person)
print(message)

#Version 3.2 (Note: redundancy removed)
message = "My name is {0[name]}. I am {0[age]} years old. My brother is also {0[age]} years old".format(person)
print(message)

#Version 4.1 (Using List)
message = "My prior hobby is {0[0]}. I am also interested in {0[1]}".format(hobbies)
print(message)
```

- Accessing the elements present in a a class in string formatting
```python
class Person:
    def __init__(self,name, age):
        self.name = name
        self.age = age

person = Person("Tony Stark", 40)

message = "My name is {0.name}. I am {0.age} years old. My brother is also {0.age} years old".format(person)
print(message) #Output My name is Tony Stark. I am 40 years old. My brother is also 40 years old
```

- Accessing the elements using keyword argument in string formatting
```python
message = "My name is {name}. I am {age} years old. My brother is also {age} years old".format(name="Tony Stark", age=40)
print(message) #Output My name is Tony Stark. I am 40 years old. My brother is also 40 years old
```


[Date time formatting Python documentation](https://docs.python.org/3/library/datetime.html#strftime-and-strptime-behavior)

