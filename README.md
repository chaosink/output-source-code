# output-source-code

A tool to insert into an executable file its source code so that it can output its source code.

## Compile

```shell
make
```

## Usage

1. The function `main()` of the source code is supposed to be like this:
```Cpp
...
#include "output_source_code.h"
...
int main(int argc, char **argv) {
	output_source_code(argc, argv);
...
}
...
```
The function `output_source_code()` had better follow `main()` immediately.

2. Compile the source code file:
```Shell
./output_source_code program.c
```

3. Use options `--output_source_code` or `--osc` to output the source code.
```Shell
./program --osc
```
