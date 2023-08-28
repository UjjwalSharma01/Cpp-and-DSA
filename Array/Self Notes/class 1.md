## Algorithm

An **algorithm** is a series of steps to fulfill a task, and the collection of those steps is known as an algorithm.

## Data Structure

A **data structure** is an entity in which we can store data. The way data is stored can vary, but the primary purpose is to store data.

- A set of similar elements stored in continuous memory is called an **array**.

## Behind the Scenes in Memory

Behind the scenes, elements are stored continuously, one after another in memory.

## Why Arrays Are Needed?

Arrays are needed when we have to operate with a large amount of data. Creating individual variables for each data point becomes impractical, so arrays are used to operate efficiently.

Memory wastage can occur due to internal fragmentation, where contiguous memory blocks might not be available even if the total space is sufficient.

## Important Points

- Default initialization of an array is with 0.
- Indexing starts from 0 and goes up to n-1, where n is the size of the array.

## Significance of Index 0

- Accessing `arr[0]` is interpreted as accessing `arr[0x4]`, which means navigating memory addresses using indexes.
- `arr[4]` is interpreted as accessing the value at `arr + (4x4)`.

Attempting to access memory locations outside the array boundaries can result in garbage values or segmentation errors.

## Initialization of Arrays

1. Initializing with 0:
   
    ```cpp
    int arr[10] = {0}; // The whole array is initialized with 0
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    ```

2. Initializing with different values - using `memset` function.

## Arrays and Functions

Arrays are always passed by reference. When passing an array to a function, its size should also be passed.

## Finding the Maximum Number in an Array

Best practices:

- Always initialize the maximum number with `INT_MIN` and the minimum number with `INT_MAX`.

- This way, the variables are initialized with the maximum and minimum possible values in C++.

To find the maximum number in an array:

1. Loop through each value of the array.
2. Check if the value is greater than the current maximum. If yes, update the maximum.
3. Check if the value is smaller than the current minimum. If yes, update the minimum.

This approach effectively finds the maximum and minimum values in the array.
