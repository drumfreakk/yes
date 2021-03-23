MAIN := yes
INSTALL_PREFIX := /usr/bin

all: $(MAIN)

$(MAIN):
	$(CC) $(MAIN).c -o $(MAIN)

.PHONY: clean install
install: $(MAIN)
	install -Dm755 $(MAIN) $(INSTALL_PREFIX)/$(MAIN)

clean:
	$(RM) $(MAIN)

