all: append_source_code

append_source_code: append_source_code.c
	gcc append_source_code.c -o append_source_code
