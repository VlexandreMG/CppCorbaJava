# --- Compilateur & Options --- 
GPP = g++
CXXFLAGS = -std=c++17 -Wall -Wextra 

# --- Cible ---
SRC_DIR = src
GEN_DIR = generated
EXEC = $(GEN_DIR)/mon_serveur 

# --- Dépendances --- 
CPP_FILES = $(wildcard $(SRC_DIR)/*.cpp) 

# Transforme src/X.cpp en generated/X.o
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(GEN_DIR)/%.o,$(CPP_FILES))    

# --- Commandes --- 
all: $(GEN_DIR) $(EXEC)

# 1. Création du dossier
$(GEN_DIR): 
	mkdir -p $(GEN_DIR)

# 2. Compilation des fichiers objets
$(GEN_DIR)/%.o: $(SRC_DIR)/%.cpp 
	$(GPP) $(CXXFLAGS) -c $< -o $@

# 3. Édition de liens (Assemblage des .o)
$(EXEC): $(OBJ_FILES)
	$(GPP) $(OBJ_FILES) -o $(EXEC)

clean:
	rm -rf $(GEN_DIR)

debug:
	@echo "Fichiers sources trouves : '$(CPP_FILES)'"
	@echo "Fichiers objets générés : '$(OBJ_FILES)'"

.PHONY: all clean