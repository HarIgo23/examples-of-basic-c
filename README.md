# Basic of C
## How to run
For any of file use this command:
```shell
gcc $CFILE -o $OUTPUTFILE && ./$OUTPUTFILE
```
### Examples
In Linux/Windows
```shell
gcc basic-of-c/hello.c -o  basic-of-c/hello && ./basic-of-c/hello
```
In mac
```shell
clang basic-of-c/hello.c -o  basic-of-c/hello && ./basic-of-c/hello
```
####
Run function extern example
```shell
cd test-functions/extern/
gcc app.c lib.c -o app && ./app
```
