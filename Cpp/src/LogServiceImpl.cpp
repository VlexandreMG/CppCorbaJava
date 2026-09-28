#include "LogServiceImpl.hpp"

LogServiceImpl::LogServiceImpl() {

// Initialisation du repo MySQL 
    olonaRepo.setHost("tcp://127.0.0.1:3306");
    olonaRepo.setUser("root");
    olonaRepo.setPassword("root"); // Remplace par ton mdp MySQL
    olonaRepo.setDatabase("test_db");
}

bool LogServiceImpl::inputLog(::CORBA::Log log) {
    
}