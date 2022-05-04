# A multithreaded program

This repository that calculates the sum of the items in an array and adds and displays the result to standard output.


## Clone Project

```bash
$ git clone git@github.com:jorgearaujo81/mutex.git
$ cd src
```

## Running

```bash
$ make run
```

## Specification

1. The program must have a variable responsible for the sum that must be shared between threads.

2. The program must use the main thread only to receive the data and display the result and the child threads must increment each element of their thread in the shared variable. With this the program must have at least N+1 threads where N is the order of the array.

3. The data input must receive the array order and then its items separated by space.
 
 ```
N
M11 M12 … M1N
M21 M22 … M2N
…
MN1 MN2 … MNN

N is the order of the matrix and each element is represented as Mxy where x is the row of the element and y is the column.
 ```

 The data output should follow the pattern below.

 ```
 Z

 ```

```
Where Z is the sum of the array items
```

### Input 1

```
4
10 15 11 22
81 78 -80 45
95 -79 72 -85
5 2 8 -7

```

### Output 1

```
193
```# mutex
