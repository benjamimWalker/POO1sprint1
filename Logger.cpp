#include "Logger.hpp"

void Logger::adicionarLog(Log log) {
    logs.push_back(log);
}

string Logger::listarLogs() {
    string logText;
    for (auto log : logs) {
        logText += log.toString();
    }
    return logText;
}

string Logger::listarLogs(Data data) {
    string logText;
    for (auto log : logs) {
        if (log.getDataLog() == data) {
            logText += log.toString();
        }
    }
    return logText;
}

string Logger::listarLogs(Usuario usuario) {
//    string logText;
//    for (auto log : logs) {
//        if (log.getUsarioDaOperacao() == usuario.getNome()) {
//            logText += log.toString();
//        }
//    }
//    return logText;
}
