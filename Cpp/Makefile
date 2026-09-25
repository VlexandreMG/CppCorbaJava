# --- Compilateur --- 
GPP = g++
CXX = -std=c++17 -Wall -Wextra 

# --- Cible ---
EXEC = $(GEN_DIR)/mon_serveur 
SRC_DIR = src 
GEN_DIR = generated

# --- Depndances --- 
CPP_FILES = $(wildcard $(SRC_DIR)/*.cpp) 

# -- Prend chaque fichier .cpp et les transforme en .o et les met dans Generated 
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp , $(GEN_DIR)/%.o , $(CPP_FILES))  	

# --- Commandes --- 
all: $(GEN_DIR) $(EXEC)

# -- Gen dir 
$(GEN_DIR): 
	mkdir -p $(GEN_DIR)

# -- Execution 
$(EXEC): $(OBJ_FILES)
	$(GPP) $(OBJ_FILES) -o $(EXEC)

# -- Que all et clean ne sont pas des fichier 
.PHONY: all, clean