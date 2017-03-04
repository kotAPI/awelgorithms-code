# Arrays and Strings

#### 1. [Return minimum Element In an Array (minimumElementInAnArray)](C++/minimumElementInAnArray.cpp)

> Write an algorithm that accepts an array of `'n'` length , finds the minimum element in it and returns it.  

#### 2. [Reverse a String (reverseAString)](C++/reverseAString.cpp)

> Write an function that takes in a string, reverses it and returns it.


#### 3. [Reverse an Array (reverseAnArray)](C++/reverseAnArray.cpp)

> Write an function that takes in an array, reverses it and returns it(or its pointer).

#### 4. [Pair of Numbers add up to another in an array (findPairofNumbersToAddUpToAnother)](C++/findPairofNumbersToAddUpToAnother.cpp)

> Check for a pair of numbers in a given number array A[] with the sum 'x'
>       Test Case => [2,4,5,7,1,3] - x =12 (5,7 are the pair with sum 12)


#### 5. [Find most occuring number in an Array (mostOccuringNumber)](C++/mostOccuringNumber.cpp)

> Find out the number that appears most number of times
>       Test Case => [2,2,2,2,1,4,2,2,2,63,1,1,1,1,15,72,4,3,2,6,7,1,3] 

#### 6. [Find a number that occurs odd number of times (arrayNumberOccuringOddTimes)](C++/arrayNumberOccuringOddTimes.cpp)

> Find out the number that appears odd number of times.
>       Test Case => [2,2,2,2,2,1,1,1,1,2,3,4,3,4,6,7,6,7,8,9,8,9] 

#### 7. [Rotate an array 'd' number of times (rotateAnArray)](C++/rotateAnArray.cpp)

> Given an array, with an argument 'd'. Rotate it by d number of times. 
>           A = [1,2,3,4,5], d = 3, RotatedArray = [4,5,1,2,3]
>           Test Case => [1,2,3,4,5,6,7,8,9,10,11,12,13] 

#### 8. [Maximum sum in an Array such that no two elements are adjacent(maxNonAdjacentSum)](C++/maxNonAdjacentSum.cpp)

> Find out the number that's maximum sum in an Array such that no two elements are adjacent
>       Test Case => [33,2,1,64,23,75,3,7,8,78,3,65]; 

#### 9. [Print all the LEADERS in the array(C++/leadersInAnArray)](leadersInAnArray.cpp)

> An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. 
>       Test Case => [16, 17, 4, 3, 5, 2]; 
>       Leaders   => 17, 5 and 2.


#### 10. [Segregate 0s and 1s in an array (segregate01))](C++/segregate01.cpp)

> Given an array of just random 0s and 1s, segregate the 0s on the left and 1s on the right
> 
>       Test Case => [0,1,1,1,0,0,0,0,1,1,1,1,1,0,1,0,1,0,0,1,1,1,0,1,0,1,0,0,1]; 
.       
#### 11. [Segregate 0s and 1s in an array (productArrayPuzzle))](C++/productArrayPuzzle.cpp)

> Given an array arr[] of n integers, construct a Product Array prod[] (of same size) such that prod[i] is equal to the product of all the elements of arr[] except arr[i]. Solve it without division operator and in O(n).
> 
>      arr[] = {10, 3, 5, 6, 2}
       prod[] = {180, 600, 360, 300, 900} 


#### 11. [Given two sorted arrays, find their union and intersection (unionAndIntersection))](C++/unionAndIntersection.cpp)
 
       arr1[] = {1, 3, 4, 5, 7}
       arr2[] = {2, 3, 5, 6}

       Union[] = {1, 2, 3, 4, 5, 6, 7}
       Intersection= {3,5}


#### 12. [Find two repeating elements in an Array (repeatingElementsInArray))](C++/repeatingElementsInArray.cpp)
 
     Find the two repeating elements in a given array
    You are given an array of n+2 elements. All elements of the array are in range 1 to n. And all elements occur once except two numbers which occur twice. Find the two repeating numbers.
           A= {4, 2, 4, 5, 2, 3, 1} and n = 5

       The above array has n + 2 = 7 elements with all elements occurring once except 2 and 4 which occur twice. So the output should be 4 2.





TODO :


* Given an array A[], write a function that segregates even and odd numbers. The functions should put all even numbers first, and then odd numbers.

Example

Input  = {12, 34, 45, 9, 8, 90, 3}
Output = {12, 34, 8, 90, 45, 9, 3} 





* Equilibrium index of an array
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. For example, in an arrya A:

A[0] = -7, A[1] = 1, A[2] = 5, A[3] = 2, A[4] = -4, A[5] = 3, A[6]=0

3 is an equilibrium index, because:
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

* Check if array elements are consecutive | Added Method 3
Given an unsorted array of numbers, write a function that returns true if array consists of consecutive numbers.

Examples:
a) If array is {5, 2, 3, 1, 4}, then the function should return true because the array has consecutive numbers from 1 to 5.

b) If array is {83, 78, 80, 81, 79, 82}, then the function should return true because the array has consecutive numbers from 78 to 83.

c) If the array is {34, 23, 52, 12, 3 }, then the function should return false because the elements are not consecutive.


* Find the smallest missing number
Given a sorted array of n integers where each integer is in the range from 0 to m-1 and m > n. Find the smallest number that is missing from the array.

Examples
Input: {0, 1, 2, 6, 9}, n = 5, m = 10
Output: 3

Input: {4, 5, 10, 11}, n = 4, m = 12
Output: 0

Input: {0, 1, 2, 3}, n = 4, m = 5
Output: 4

Input: {0, 1, 2, 3, 4, 5, 6, 7, 10}, n = 9, m = 11
Output: 8

* Find the minimum distance between two numbers
Given an unsorted array arr[] and two numbers x and y, find the minimum distance between x and y in arr[]. The array might also contain duplicates. You may assume that both x and y are different and present in arr[].

Examples:
Input: arr[] = {1, 2}, x = 1, y = 2
Output: Minimum distance between 1 and 2 is 1.

Input: arr[] = {3, 4, 5}, x = 3, y = 5
Output: Minimum distance between 3 and 5 is 2.

Input: arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6
Output: Minimum distance between 3 and 6 is 4.

Input: arr[] = {2, 5, 3, 5, 4, 4, 2, 3}, x = 3, y = 2
Output: Minimum distance between 3 and 2 is 1.

Count smaller elements on right side

* Write a function to count number of smaller elements on right of each element in an array. Given an unsorted array arr[] of distinct integers, construct another array countSmaller[] such that countSmaller[i] contains count of smaller elements on right side of each element arr[i] in array.

Examples:

Input:   arr[] =  {12, 1, 2, 3, 0, 11, 4}
Output:  countSmaller[]  =  {6, 1, 1, 1, 0, 1, 0} 

(Corner Cases)
Input:   arr[] =  {5, 4, 3, 2, 1}
Output:  countSmaller[]  =  {4, 3, 2, 1, 0} 

Input:   arr[] =  {1, 2, 3, 4, 5}
Output:  countSmaller[]  =  {0, 0, 0, 0, 0}

* Find subarray with given sum | Set 1 (Nonnegative Numbers)
Given an unsorted array of nonnegative integers, find a continous subarray which adds to a given number.

Examples:

Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Ouptut: Sum found between indexes 2 and 4

Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
Ouptut: Sum found between indexes 1 and 4

Input: arr[] = {1, 4}, sum = 0
Output: No subarray found