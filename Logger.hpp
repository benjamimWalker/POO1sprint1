#pragma once
#include "vector"
#include "Usuario.hpp"
#include "Log.hpp"

class Logger {

    vector<Log> logs;

public:
    void adicionarLog(Log);
    string listarLogs();
    string listarLogs(Data);
    string listarLogs(Usuario);
};
