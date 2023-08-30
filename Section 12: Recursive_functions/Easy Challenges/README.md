## 1- Length of 3n+1:

### Function: `int length_3n_plus_1(int n)`

This function takes a number `n` to compute length 3n+1 sequence by recursion.

**Parameters:**
- `n` (number): number to calculate length of 3n+1 sequence for it.

**Output:**
- return the length of 3n+1 sequence of the number.

sample input :

```cpp
length_3n_plus_1(6);
```

sample output :
```bash
9
```
---

## 2- Power function:

### Function: `int my_pow(int value, int p)`

This function takes a number `value` to compute the power of value to p (`value`^`p`) by recursion.

**Parameters:**
- `value` (number): the number to which power is rised.
- `p` (number): the value of the power rised to the `value``.

**Output:**
- return the value of the power `value`^`p`.

sample input :

```cpp
my_pow(2,3)
```

sample output :
```bash
8
```
---

## 3- Array maximum:

### Function: `int arr_max(int arr[], int len)`

This function get the maximum value in the array.

**Parameters:**
- `arr[]` (pointer): pointer to access the array elements.
- `len` (number): number that holds the length of the array.

**Output:**
- return the maximum value in the array.

sample input :

```cpp
int arr[] = {1,2,10,30,2,5};
cout << arr_max(arr,6) << endl;
```

sample output :
```bash
30
```

---

## 4- Array sum: 

### Function: `int sum(int arr[], int len)`

This function calculates the sum of the numbers in the array.

**Parameters:**
- `arr[]` (pointer): pointer to access the array elements.
- `len` (number): number that holds the length of the array.

**Output:**
- return the sum of all the values in the array.

sample input :

```cpp
int arr[] = {1,2,10,30,2,5};
cout << sum(arr,6) << endl;
```

sample output :
```bash
50
```

---

## 5- Array average: 

### Function: `double average(double arr[], int len)`

This function calculates the average of the numbers in the array.

**Parameters:**
- `arr[]` (pointer): pointer to access the array elements.
- `len` (number): number that holds the length of the array.

**Output:**
- return the average of all the values in the array.

sample input :

```cpp
double arr[] = {1.3,2.5,10.2,30,62};
cout << average(arr,5) << endl;
```

sample output :
```bash
21.2
```
---

## 6- Array increment: 

### Function: `void array_increment(int arr[], int len)`

This function increment every number in the array with the value of it's index.

**Parameters:**
- `arr[]` (pointer): pointer to access the array elements.
- `len` (number): number that holds the length of the array.

**Output:**
- not output.

sample input :

```cpp
int arr[] = {1,3,4,6,7,10};
array_increment(arr,6);

for(int i=0; i<6; i++)
    cout << arr[i] << " ";
```

sample output :
```bash
1 4 6 9 11 15
```

---
## 7- Array accumulation: 

### Function: `void accumulate_arr(int arr[], int len)`

This function increment every number in the array with the value of all the elements before it.

**Parameters:**
- `arr[]` (pointer): pointer to access the array elements.
- `len` (number): number that holds the length of the array.

**Output:**
- not output.

sample input :

```cpp
int arr[] = {2,3,5,6,4,3};
accumulate_arr(arr,6);

for(int i=0; i<6; i++)
    cout << arr[i] << " ";
```

sample output :
```bash
2 5 10 16 20 23
```

---
## 8- Left max: 

### Function: `void left_max(int arr[], int len)`

This function replace each element at position i with the maximum of numbers from 0 to index i.

**Parameters:**
- `arr[]` (pointer): pointer to access the array elements.
- `len` (number): number that holds the length of the array.

**Output:**
- not output.

sample input :

```cpp
int arr[] = {2,3,5,6,4,3,8,9,3,2,10,3,5};
left_max(arr,13);

for(int i=0; i<13; i++)
    cout << arr[i] << " ";
```

sample output :
```bash
2 3 5 6 6 6 8 9 9 9 10 10 10
```
---