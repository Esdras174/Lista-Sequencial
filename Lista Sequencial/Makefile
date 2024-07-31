CC = gcc
CFLAGS = -Wall -g
SRC = src/lista.c src/main.c
TEST_SRC = src/lista.c tests/test_lista.c
TARGET = lista
TEST_TARGET = test_lista

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

test: $(TEST_TARGET)

$(TEST_TARGET): $(TEST_SRC)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(TEST_SRC)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
