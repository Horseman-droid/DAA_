# Assignment-5

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019019  |   Kalpana | Kalpana200  | 
|    IIB2019020  |   Devang Bharti | Horseman-droid  |
|    IIB2019021  |   Hitika | hitika22  | 

**Group No-**"7"

**Faculty Name-**"Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Using divide conquer find the sum of the GP series

---
## How to use code
```
#Download project
git clone https://github.com/Horseman-droid/DAA_ 
```
Project Initialize 
```
cd DAA_
#create assignment-5 folder
mkdir assignment_05

#go to assignment-5
cd assignment_05

#Create file
touch readme.md
touch sol.cpp
.
.
```
---

Run the code
```
g++ sol.cpp
```
Output
```
Sum of the GP series
```
---
**Test case**
Find the sum of geometric series
```
Test Case-1
Input:
Enter value of n:
5

Enter value of x:
2

Output
Sum of the geometric sequence wil be: 62

#--------------------------#
Test Case-2
Input:
Enter value of n:
4

Enter value of x:
3

Output
Sum of the geometric sequence wil be: 120

###Theory
The Solution to this problem is based on divide and conquer aproach
it involves 3 steps- 
Divide: This involves dividing the problem into some sub problem.
Conquer: Sub problem by calling recursively until sub problem solved.
Combine: The Sub problem Solved so that we will get find problem solution.
here we are dividing problem n sub problem and getting sum from tho se sub-problem

---
### Analysis

**Time Complexity**

The overall complexity of the question is O(n). Our algorithm uses divide and conquer approch to find the sum and the best case complexity will be o(1)

---

**Space Complexity**

No extra space is used in this algorithm, so auxiliary space is constant.Only the input array is of size n. Space Complexity =Input Space+Auxiliary Space ,which in turn equal to O(n).

---

### References

https://www.geeksforgeeks.org/divide-and-conquer-algorithm-introduction/
https://www.tutorialspoint.com/program-for-sum-of-geometric-series-in-c
