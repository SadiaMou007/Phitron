# C

- \n - newline
- \t - tab
- Snippet generate :

  1.  Generate snippet from [snippet generate](https://snippet-generator.app/?description=&tabtrigger=&snippet=%23include%3Cstdio.h%3E%0Aint+main%28%29%0A%7B%0A++++return+0%3B%0A%7D&mode=vscode)

  2.  settings - user snippet - paste snippet
  3.  Add prefix and initial point using "$0",

### Range and Format specifier

- int (4 byte (1 byte - 8 bit)) - %d range : -2^32 -1 -> 2^32 -1 (2^4\*8 - 1) `[10 digit: -10^9 to +10^9]`
- long long int (8 byte) - %lld range : `[20 digit: -10^18 to +10^18]`
- float (4 byte) - %f, %0.2f range : `[6 digit]`
- double (8 byte) - %lf, %0.2lf range : `[15 digit]`
- char (8 byte) - %c
