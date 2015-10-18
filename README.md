# output-source-code

A tool to insert into an executable file its source code so that it can output its source code.

## Usage

1. The function `main()` of the source code is supposed to be like this:
```cpp
...
int main(int argc, char **argv) {
#include "output-source-code.c"
...
}
...
```

2. Compile the source code file:
```shell
./output_source_code source_code_file.c
```

3. Use options `--output_source_code` or `--osc` to output the source code.
