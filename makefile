SRC_DIR = ./src
INC_DIR= ./inc
OBJ_DIR = ./build
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC_FILES))

all: $(OBJ_FILES)
	gcc -o $(OBJ_DIR)/a.out $(OBJ_FILES)
include $(OBJ_DIR)/*.d
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -c $< -o $@ -I $(INC_DIR) -MMD
doc:
	doxygen doxyfile
