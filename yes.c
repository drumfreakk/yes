/* a minimal version of yes */
/* Written by Kieran Houtgraaf <kieran.houtgraaf@gmail.com> */
/* Full license can be found in LICENSE */

int sys_write(unsigned int fd, char const *buf, int cnt);
long unsigned int strlen(const char* msg){
	int len = 0;
	while(*msg++)
		len++;
	return len;
}

#define PRINT(msg) sys_write(2, msg, strlen(msg))

static char* help = "Usage: yes [STRING]\n"
					"Repeatedly prints 'y' or STRING\n"
					"Git repo: <https://github.com/drumfreakk/yes>\n";

int main(int argc, char *argv[]) {
	char *toPrint;

	if (argc >= 2){
		toPrint = argv[1];
		
		if (toPrint[0] == '-' && toPrint[1] == 'h' && toPrint[2] == 0){
			PRINT(help);
			return 0;
		}
	} else 
		toPrint = "y";
	
	while(1){
		PRINT(toPrint);
		PRINT("\n");
	}

	return 0;
}
