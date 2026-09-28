#pragma once 

#include <iostream>
#include "LogService.hh"
#include "OlonaRepository.hpp"

class LogServiceImpl : public POA_LogService::inputLog {
public:
    LogServiceImpl();
    OlonaRepository olonaRepo;

    bool register(::CORBA::Log log);
};