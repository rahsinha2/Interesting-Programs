#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * program[] = {
		"\t\t};",
		"void print_string(char * str)",
		"{",
		"\tchar * ptr;",
		"\tprintf(\"                \\\"\");",
		"\tfor (ptr = str; *ptr != 0; ptr++){",
		"\t\tif (*ptr == '\\\\')",
		"\t\t\tprintf(\"\\\\\\\\\");",
		"\t\telse if (*ptr == '\"')",
		"\t\t\tprintf(\"\\\\\\\"\");",
		"\t\telse if (*ptr == '\\t')",
		"\t\t\tprintf(\"\\\\t\");",
		"\t\telse",
		"\t\t\tputchar(*ptr);",
		"\t}",
		"\tprintf(\"\\\",\\n\");",
		"}",
		"int main(int argc, char ** argv)",
		"{",
		"\tchar ** ptr;",
		"\tchar id[] = \"0003392258\";",
		"\tif (argc != 3){",
		"\t\tprintf(\"Invalid no. of arguments passed\\n\");",
		"\t\texit(1);",
		"\t}",
		"\tif((strcmp(id, argv[1]) == 0 || strcmp(id, argv[2]) == 0)){",
		"\t\tprintf(\"#include<stdio.h>\\n#include<string.h>\\n#include<stdlib.h>\\n\");",
		"\t\tprintf(\"char * program[] = {\\n\");",
		"\t\tfor ( ptr = program; *ptr != NULL; ptr++ ){",
		"\t\t\tprint_string(*ptr);",
		"\t\t}",
		"\t\tfor ( ptr = program; *ptr != NULL; ptr++ ){",
		"\t\t\tprintf(\"%s\\n\",*ptr);",
		"\t\t}",
		"\t}",
		"\telse",
		"\t\tprintf(\"%d\\n\",  atoi(argv[1]) + atoi(argv[2]));",
		"return 0;",
		"}",
		};
void print_string(char * str)
{
	char * ptr;
	printf("		\"");
	for (ptr = str; *ptr != 0; ptr++){
		if (*ptr == '\\')
			printf("\\\\");
		else if (*ptr == '"')
			printf("\\\"");
		else if (*ptr == '\t')
			printf("\\t");
		else
			putchar(*ptr);
	}	
	printf("\",\n");
}
int main(int argc, char ** argv)
{
	char ** ptr;
	char id[] = "0003392258";
	if (argc != 3){
		printf("Invalid no. of arguments passed\n");
		exit(1);
	}
	if((strcmp(id, argv[1]) == 0 || strcmp(id, argv[2]) == 0)){
		printf("#include<stdio.h>\n#include<string.h>\n#include<stdlib.h>\n");
		printf("char * program[] = {\n");
		for ( ptr = program; *ptr != NULL; ptr++ ){
			print_string(*ptr);
		}
		for ( ptr = program; *ptr != NULL; ptr++ ){
			printf("%s\n",*ptr);
		}	
	}
	else 
		printf("%d\n",  atoi(argv[1]) + atoi(argv[2]));
return 0;
}
