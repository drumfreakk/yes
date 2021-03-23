/* yes - a small clone of GNU coreutils yes, repeatedly prints a string */
/* Written by Kieran Houtgraaf <kieran.houtgraaf@gmail.com> */
/* Full license to be found in LICENSE */

#include <string.h>
#include <stdio.h>

int
main(int argc, char *argv[]) {
	char	*toPrint;

	if (argc >= 2){
		toPrint = argv[1];

		if (!strncmp(toPrint, "-", 1)){
			if (!strcmp(toPrint, "--help"))
				printf("Usage: %s \"[STRING]...\"\n  or:  %s OPTION\nRepeatedly output a line with all specified STRING(s), or 'y'.\n\n      --help     display this help and exit\n      --version  output version information and exit\n\nSource code available at: <https://github.com/drumfreakk/yes>\n", argv[0], argv[0]);
			else if (!strcmp(toPrint, "--version"))
				printf("yes 1.0\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by the law.\nThe full license can be found in LICENSE\n\nWritten by Kieran Houtgraaf.\n");
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
