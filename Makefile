# Specify the target file and the object files
TARGET = connections
OBJS = main.o my_mat.o

# Specify the compiler and compiler flags
CC = gcc
CFLAGS = -Wall -g

# Define the valgrind command and flags
VALGRIND = valgrind
VFLAGS = --leak-check=full --show-leak-kinds=all --track-origins=yes

# Define the targets that are not associated with a specific file or directory
.PHONY: clean run valgrind

# Define the default target (to build the program)
all: $(TARGET)

# Define the target for building the program
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Define the targets for each object file
main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c main.c


my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c my_mat.c

# Define the target for running the program
run: $(TARGET)
	./$(TARGET)

# Define the target for running the valgrind test
valgrind: $(TARGET)
	$(VALGRIND) $(VFLAGS) ./$(TARGET)
    
# Define the target for cleaning up the directory
clean:
	rm -f *.o *.a *.so connections