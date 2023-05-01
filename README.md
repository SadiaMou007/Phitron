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

- array size : `sizeof(arrName) / sizeof(int/char)`
- string length: `int l= strlen(a)`
- copy string: strcpy(a,b) `copy b to a`
- compare string: `int value = strcmp(a, b)` <i>value < 0 (a<b)</i>, <i>value = 0 (a==b) </i>, <i>value > 0 (a>b)</i>
- concat string: strcat(a,b) `concat a & b to a`

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

### Selection sort Algorithm

```
1. for i=0 to i<n-1
2. for j=i+1 to j<n
3. if a[i]<a[j] --> swap
```
