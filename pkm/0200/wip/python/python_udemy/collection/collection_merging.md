# Collection Merging

## List Merging
```python
lstNum1 = [1,2,3,4]
lstNum2 = [3,4,5,6,6,7]
# Way 1
lstNum = lstNum1 + lstNum2
print(lstNum)
 
# Way 2
lstNum = [ *lstNum1, *lstNum2 ]
print(lstNum)
```
So we are asking to create a new list, with all elements of lstNum1 and lstNum2 as, *lstNum1 represents, all the elements present inside lstNum1.



## Tuple Merging
```python
tplNum1 = (1,2,3,4)
tplNum2 = (3,4,5,6,6,7)
 
# Way 1
tplNum = tplNum1 + tplNum2
print(tplNum)
 
# Way 2
tplNum = ( *tplNum1, *tplNum2 )
print(tplNum)
```
So we are asking to create a new tuple, with all elements of tplNum1 and tplNum2 as, *tplNum1 represents, all the elements present inside tplNum1.


## Set Merging
```python
setNum1 = {1,2,3,4}
setNum2 = {3,4,5,6,7}
 
# Way 1 [ + Operator is not possible in set ]
 
# Way 2
setNum = { *setNum1, *setNum2 }
print(setNum)
```

- So we are asking to create a new set, with all elements of setNum1 and setNum2 as, *setNum1 represents, all the elements present inside setNum1.
- The duplicate items will be removed in this type of merging as well.
- Order might not be preserved, as in case of sets, the order is not important.



## Dictionary Merging
```python
dictStudentInfo1 = {
	"Name": "Amit",
	"Roll No" : "39"
}
dictStudentInfo2 = {
	"Name": "Chiku",
	"Branch" : "CSE"
}
 
# Way 1 [ + Operator is not possible in dictionary ]
 
# Way 2
dictStudentInfo = { **dictStudentInfo1, **dictStudentInfo2 }
```
- If there is any duplicate key, then this will update the new value of the key with the previous one.

## Note
- List Inside set is not possible
- List Inside dictionary as a key is not possible
- Other than above 2 combination, all other combination is possible.
- The above 2 is not possible, because, List is not hashable.