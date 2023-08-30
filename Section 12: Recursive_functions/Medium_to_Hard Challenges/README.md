## 1- Right max:

### Function: `void right_max(int arr[], int len)`

This function replace each element at position i with the maximum of numbers from i to end of array.

**Parameters:**
- `arr[]` (pointer): pointer to access the array elements.
- `len` (number): number that holds the length of the array.

**Output:**
- not output.

sample input :

```cpp
int arr[] = {2,3,11,3,8,10,3,5};
right_max(arr,8);

for(int i=0; i<8; i++)
    cout << arr[i] << " ";
```

sample output :
```bash
11 11 11 10 10 10 5 5
```
---

## 2- Suffix sum:

### Function: `int Suffix_Sum(int arr[],int len,int N)`

This function calculate the sum of `N` elements from the end of the array.

**Parameters:**
- `arr[]` (pointer): pointer to access the array elements.
- `len` (number): number that holds the length of the array.
- `N` (number) : represents the number of elements to sum from the end of the array.

**Output:**
- return the sum of `N` elements from the end of the array.

sample input :

```cpp
int arr[] = {1,2,10,30,2,5};
cout << Suffix_Sum(arr,6,3) << endl;
```

sample output :
```bash
37
```
---

## 3- Prefix sum:

### Function: `int Prefix_Sum(int arr[],int N)`

This function calculate the sum of `N` elements from the begining of the array.

**Parameters:**
- `arr[]` (pointer): pointer to access the array elements.
- `N` (number) : represents the number of elements to sum from the begining of the array.

**Output:**
- return the sum of `N` elements from the begining of the array.

sample input :

```cpp
int arr[] = {1,2,10,30,2,5};
cout << Prefix_Sum(arr,5) << endl;
```

sample output :
```bash
45
```

---

## 4- Is palindrome: 

### Function: `bool Is_Palindrome(int arr[],int len)`

This function checks if array is palindrome or not.

**Parameters:**
- `arr[]` (pointer): pointer to access the array elements.
- `len` (number): number that holds the length of the array.

**Output:**
- return `true` if the array is palindrome or `false` if the array is not palindrome.

sample input :

```cpp
int arr[] = {1,2,3,2,1};
cout << boolalpha; 
cout << Is_Palindrome(arr,5) << endl;
```

sample output :
```bash
true
```

---

## 5- Is prefix: 

### Function: `bool is_prefix(string main, string prefix)`

This function checks if `prefix` string is a prefix of the `main` string or not.

**Parameters:**
- `main` (string): the string to check the prefix of it.
- `prefix` (string): the string to be checked if it is a prefix of the main string or not.

**Output:**
- return `true` if the prefix string is the prefix of the main string otherwise return `false`.

sample input :

```cpp
string main = "abcdefgh";
string prefix = "abcd";
cout << boolalpha;
cout << is_prefix(main,prefix) << endl;
```

sample output :
```bash
true
```
---

## 6- Count primes: 

### Function: `int count_primes(int start, int end)`

This function counts the number of the prime numbers between `start` and `end` numbers.

**Parameters:**
- `start` (number): represents the first number to start counting prime numbers from it.
- `end` (number): represents the last number to stop counting primes at it.

**Output:**
- return the number of prime numbers between `start` and `end`.

sample input :

```cpp
cout << count_primes(10,200) << endl;
```

sample output :
```bash
42
```

---
## 7- Grid sum: 

### Function: `int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS)`

This function calculate the sum of maximum elements in a robot path if a robot moves from index `[0][0]` in the array and can move only in `right `, `down` and `diagonal` directions till it reach the end of the array.

**Parameters:**
- `grid[100][100]` (pointer): pointer to access the array elements.
- `row` (number): number that holds the current robot row.
- `col` (number): number that holds the current robot column.
- `ROWS` (number): number that holds the number of rows in the array entered by the user.
- `COLS` (number): number that holds the number of columns in the array entered by the user.

**Output:**
- return the sum of elements in robot path.

sample input :

```cpp
int grid[3][3] = {{4,5,2},
                  {10,5,8},
                  {3,8,2}}
cout << path_sum(grid,0,0,rows,cols) << endl;
```

sample output :
```bash
24
```

---
## 8- Fibonacci: 

### Function: `fibonacci(int n)`

This function return the fibonacci sequence value of `n`.

**Parameters:**
- `n` (number): number to get it's fibonacci sequence value.

**Output:**
- return fibonacci sequence value of `n`.

sample input :

```cpp
cout << fibonacci(5) << endl;
```

sample output :
```bash
8
```
---