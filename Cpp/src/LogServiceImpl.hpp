#pragma once 

#include <iostream>
#include "LogService.hh"

class LogServiceImpl : public POA_LogService::inputLog {
public:
    LogServiceImpl();

    bool register(::CORBA::Log log);
};