# C

- Snippet generate :

  1.  Generate snippet from [snippet generate](https://snippet-generator.app/?description=&tabtrigger=&snippet=%23include%3Cstdio.h%3E%0Aint+main%28%29%0A%7B%0A++++return+0%3B%0A%7D&mode=vscode)

  2.  settings - user snippet - paste snippet
  3.  Add prefix and initial point using "$0",

### <u>Range and Format specifier</u>

- int (4 byte (1 byte - 8 bit)) - %d range : -2^32 -1 -> 2^32 -1 (2^4\*8 - 1) `[10 digit: -10^9 to +10^9]`
- long long int (8 byte) - %lld range : `[20 digit: -10^18 to +10^18]`
- float (4 byte) - %f, %0.2f range : `[6 digit]`
- double (8 byte) - %lf, %0.2lf range : `[15 digit]`
- char (8 byte) - %c

### take input till EOF

```
while(scanf("%d",&num) != EOF)
```

### post Increment and Pre Increment

- In general i++ & ++i is same. Pre or Post increment matters when assign i to another variable.

```
 int i = 10;
 int a = i++ [ a-10 ,i=11 (post increment of i)]
 int a = ++i [a=11 , i=11 (pre increment of i)]
```

### max and min int

```
#include <limits.h>
...
int a= INT_MIN, b= INT_MAX
```

<hr/>  
### <u>Build in Functions</u>  
` Headerfiles --> #include<string.h> , #include<math.h> `

- array size : `sizeof(arrName) / sizeof(int/char)`
- string length: `int l= strlen(a)`
- copy string: strcpy(a,b) `copy b to a`
- compare string: `int value = strcmp(a, b)` <i>value < 0 (a<b)</i>, <i>value = 0 (a==b) </i>, <i>value > 0 (a>b)</i>
- concat string: strcat(a,b) `concat a & b to a`
- ceil(v)
- floor(v)
- round(v)
- sqrt(v)
- pow(a,b)
- abs() [not works for long long int, headerfile --> #include<stdlib.h>]

<hr/>

### Counting array algorithm:

```
1. Array input a[n]
2. initialize empty array `cnt[10]={0} (for number 0-9) || cnt[26]={0} (for char)`
3. for i=0 to n `cnt[a[i]]++`
4. print counting value according input or char order.
```

### Pattern

- take outer array > s for spaces && k for stars (initialize outside loop && inc/dec later) > break after every iteration

### Pointer

- call by value(pass value that store in another variable )
- call by reference(pass address as param to change data by dereferencing)

### Matrix

- Diagonal: all 0 except primary & secondary diagonal. Diagonal value itself can be 0.

```
primary diagonal values -> i+j = row - 1`
secondary diagonal values -> i = j
```

- Scalar: all 0 except primary & secondary diagonal. Diagonal values are equal.

```
secondary diagonal values -> i+j = row - 1`
primary diagonal values -> i = j
```

### Selection sort Algorithm

```
1. for i=0 to i<n-1
2. for j=i+1 to j<n
3. if a[i]<a[j] --> swap
```

# cpp

- stack vs heap memory(can remove/change)
- create data in dynamic memory: (stack memory store heap memory address )

```
int *a = new int
*a = 10
cout<<a<<*a //a--> memory address, *a-->10
```

## Dynamic array

- Initialize: `int *a = new int[5]` (as array work's as pointer rest will work as normal array)
- Increase size: initialize new array > copy old array value > delete old array
- Delete: `delete[] a`--> delete entire array, `delete a`--> delete first index address

## String build in functions

### Capacity

| Function          | Description                                                    |
| ----------------- | -------------------------------------------------------------- |
| \*s.size()        | returns the size of the string.                                |
| s.max_size()      | returns the maximum size that string can hold.                 |
| s.capacity()      | returns current available capacity of the string.              |
| \*s.clear()       | clear the string.                                              |
| \*s.empty()       | return true/false if the string is empty.                      |
| \*s.resize(n)     | decrease the size of the string to n.                          |
| \*s.resize(n,'X') | increase the size of the string to n and put value 'X' after n |

### Element access

| Function   | Description                                                   |
| ---------- | ------------------------------------------------------------- |
| \*s[i]     | access the ith index of the string.                           |
| s.at(i)    | access the ith index of the string.                           |
| \*s.back() | access the last element of the string.(same as s[s.size()-1]) |
| s.front()  | access the first element of the string.(same as s[0])         |

### Modifiers

| Function                | Description                                       |
| ----------------------- | ------------------------------------------------- |
| \*s+=                   | append another string.(addition)                  |
| s.append()              | append another string.                            |
| \*s.push_back()         | add character to the last of the string.          |
| \*s.pop_back()          | remove the last character of the string.          |
| s=                      | assign string.                                    |
| s.assign()              | assign string.                                    |
| \*s.erase(4)            | erase all characters after index 4.               |
| \*s.erase(4, 3)         | erase 3 characters from index 4.                  |
| \* s.replace(4,3,"abc") | replace a portion of the string.(erase + replace) |
| \* s.replace(4,0,"abc") | insert "abc" at index 4                           |
| s.insert(4,"abc")       | same as s.replace(4,0,"abc")                      |

### Iterators

| Function  | Description                                                       |
| --------- | ----------------------------------------------------------------- |
| s.begin() | pointer to the first element.                                     |
| s.end()   | pointer to the next element after the last element of the string. |

#### Example 1: string iterator

```
int main() {

    string s;
    //string :: iterator it; //can avoid using auto iteration [gnu 14+]
    cin >> s;

    for(auto it = s.begin();it < s.end(); it++)
    {
        cout<< *it <<endl;
    }
    return 0;
}
```

#### Example 2: Ignore newline for multiple input (int , getline)

```
int a;
cin >> a;
cin.ignore(); //for cpp or getchar()
string s;
getline(cin,s);
```

#### Example 3: stringstream

```
int main() {

   string s;
   getline(cin,s);
   stringstream ss(s);
   string word;

   while(ss >> word)
   {
       cout<<word<<endl;
   }

    return 0;
}
```

## Vector

- [Vector build In functions](https://docs.google.com/document/d/1-AlWED5nChiMx4iqH_E-dCTgZn2EmzpB1THvfw-L7pM/edit)

## Singely Linked list  
## Doubly Linked list  
- [List build In functions](https://docs.google.com/document/d/1ck7jVccsfKckkS9sB1BmE2COXRDvYOCEfIRX3Tu7SHQ/edit)
  

