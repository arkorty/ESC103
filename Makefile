CC=clang
CFLAGS=-Ofast -lm
PROG=assignment-$(a)/problem-$(p)
BIN=bin/assignment-$(a)/problem-$(p)

$(BIN): $(PROG).c
	@mkdir -p bin/assignment-$(a)
	@$(CC) $(PROG).c -o $(BIN) $(CFLAGS)

run: $(BIN)
	@./$(BIN)

clean:
	@rm -rf bin/*
