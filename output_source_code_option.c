	int _i_;
	for(_i_ = 1; _i_ < argc; _i_++)
		if(!strcmp(argv[_i_], "--output_source_code") || !strcmp(argv[_i_], "--osc")) {
			FILE *in = fopen(argv[0], "rb");
			fseek(in, -4, SEEK_END);
			int size;
			fread(&size, 1, 4, in);
			int size_all;
			fseek(in, 0, SEEK_END);
			size_all = ftell(in);
			fseek(in, size, SEEK_SET);
			while(size++ != size_all - 4)
				putchar(fgetc(in));
			fclose(in);
			return 0;
		}
