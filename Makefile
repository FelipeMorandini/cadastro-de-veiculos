# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -pedantic

# Source files
SRCS = src/main.c src/vehicle.c

# Object files
OBJS = $(patsubst src/%.c, build/%.o, $(SRCS))

# Executable name
EXECUTABLE = bin/vehicle_manager

# Build directory
BUILD_DIR = build
BIN_DIR = bin

# Default target
all: $(EXECUTABLE)

# Rule to build the executable
$(EXECUTABLE): $(OBJS) | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^ -Iinclude

# Rule to compile source files
$(BUILD_DIR)/%.o: src/%.c include/vehicle.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o $@ $< -Iinclude

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $@

# Create bin directory if it doesn't exist
$(BIN_DIR):
	mkdir -p $@

# Clean target
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# Phony targets
.PHONY: all clean