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



# Sorting
## Selection Sort
we find the minimum and swap

```cpp
void selectionSort (vector<int> & arr, int size){
    int start = 0;
    int end = size-1;
    for(int i=0;i<size-1;i++){
        // let the minimum element be the arr[i]
        int minimum = i;

        // check or find the min
        for(int j = i+1;ij<size;j++)
        if(arr[j]<arr[i]){
            minimum = j;
        }
        if(minimum != i){
            swap(arr[i], arr[minimum]);
        }
    }
}
```
### Visualization

```
[5,4,3,2,1]
[1,4,3,2,5]
[1,2,3,4,5]
[1,2,3,4,5]
[1,2,3,4,5]
```
### Time complexity
Best case: O(n^2)
Worst case: O(n^2)
Average case: O(n^2)
### Space complexity
O(1)

## Bubble Sort
we push the max element to the end by adjacent swaps
    
```cpp
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
```
### Visualization

```
[5,4,3,2,1]
[4,3,2,1,5]
[3,2,1,4,5]
[2,1,3,4,5]
[1,2,3,4,5]
```
### Time complexity
Best case: O(n)
Worst case: O(n^2)
Average case: O(n^2)
### Space complexity
O(1)

## Insertion Sort
we insert the element at the correct position

```cpp
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int itemToInsert = i;
        while (itemToInsert > 0 && arr[itemToInsert - 1] > current) {
            arr[itemToInsert] = arr[itemToInsert - 1];
            itemToInsert--;
        }
        arr[itemToInsert] = current;
    }
}
```
### Visualization

```
[5,4,3,2,1]
[4,5,3,2,1]
[3,4,5,2,1]
[2,3,4,5,1]
[1,2,3,4,5]
```
### Time complexity
Best case: O(n)
Worst case: O(n^2)
Average case: O(n^2)
### Space complexity
O(1)