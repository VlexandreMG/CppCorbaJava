# Compilateur 
GPP = g++
CXX = -std=c++17 -Wall -Wextra 

# Cible
EXEC = $(GEN_DIR)/mon_serveur 
SRC_DIR = src 
GEN_DIR = generated

# Depndances 
CPP_FILES = $(wildcard $(SRC_DIR)/*.cpp) 

# Commandes 
$(EXEC): $(GEN_DIR)
	$(GPP) $(GEN_DIR) -o $(EXEC)	