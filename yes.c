#include <string.h>
#include <stdio.h>

int
main(int argc, char *argv[]) {
	char	*toPrint;

	if (argc >= 2){
		toPrint = argv[1];

		if (!strncmp(toPrint, "-", 1)){
			if (!strcmp(toPrint, "--help"))
				printf("Usage: %s \"[STRING]...\"\n  or:  %s OPTION\nRepeatedly output a line with all specified STRING(s), or 'y'.\n\n      --help     display this help and exit\n      --version  output version information and exit\n", argv[0], argv[0]);
			else if (!strcmp(toPrint, "--version"))
				printf("yes 1.0\nCopyright (C) 2021 Kieran Houtgraaf\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by the law.\n\nWritten by Kieran Houtgraaf.\n");
			else
				printf("%s: invalid option -- '%s'\nTry '%s --help' for more information.\n", argv[0], toPrint, argv[0]);
			return 0;
		}
	} else 
		toPrint = "y";
	
	while(1)
		printf("%s\n", toPrint);
	

	return 0;
}
