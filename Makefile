yes: boot.s yes.c
	gcc -nostartfiles -static -Os -nodefaultlibs -nostdlib -s -o $@ $^ -flto -Wall -Wextra -Wpedantic -Wshadow -Qn -std=c18 -fno-stack-protector -fno-asynchronous-unwind-tables -Wl,-n,-gc-sections,-build-id=none -T x86_64.ld

.PHONY: clean install
install: yes
	install -Dm755 yes /usr/bin/yes

clean:
	$(RM) yes

