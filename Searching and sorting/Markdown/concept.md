# Searching and Sorting
## Searching

agr 1000 elements ka array h toh usko Linear search se usme se koi element nikalne main worst case main __1000__ iterations krni pdegi kyuki time compelexity h O(n) and binary search same task ko 10 ierations main krdegi

how O(n) -> earch for loop has to run n times for any given condition till n {nested for loop ki time complexity n^2 hogi}

## Binary search

### What is binary search
an optimised searching algorithm with the time complexity of __logn__ n = size of array -> derive

it is better than linear search 

### condition  

elements in the array should be in __monotonic order__ i.e either in increasing or decreasing order

__In short__ the elements of an array should be sorted to apply binary search

### Algorithm
![url]()

### Integer overflow condition
![url]()

isiliye, we will use __s+(e-s)/2__  instead of (s+e)/2 or any other type

kyuki agr dono integer maximum possible value of int ki range ke hue toh pehle addition perform hoga and integer overflow ki situation ban jaegu (check the screenshot)

### Binary search using STL