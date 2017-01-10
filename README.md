# Zerda C++ Orientation Exam

## Caesar's Cipher
Create a command line application that reads a file and decrypts it using the
[caesar's cypher](https://en.wikipedia.org/wiki/Caesar_cipher) algorithm.

### Arguments
The first argument is the file name, after that you can provide the shift and an output file in any order.
The flag for the shift is: `-s` and for the output file is: `-o`.

Examples for reading the content of the file called `input.txt`, shift its content with 2 then write it to a file called `output.txt`:

```
a.out input.txt -s 2 -o output.txt
```

```
a.out input.txt -o output.txt -s 2
```

If the program has ran without the first argument then it should show an error:

```
No filename is provided.
```

If the program has ran without the `-s` argument then it should show and error:

```
No shift is provided
```

If the arguments are missing after the flags it should return an error.

If the program has ran without the `-o` argument then it should print the decrypted content to the standard out.


### Decryption
It should only shift the characters in the english alphabet, it should not change the numbers, whitespace charactes (tabs, spaces, new lines) and any punctuation.
If the character would overflow from the alphabet it should start to count from the begining. So `z` shifted by 3 should be `c`.
It should be case sensitive so if the character was uppercase it should stay uppercase, and it should do the same with lowercase as well.
Try to implement the decryption in a separate unit from the application logic. and also write unit tests using Catch.

### Separate concerns 
Try to separate the argument handling, the file operations and the decription.
