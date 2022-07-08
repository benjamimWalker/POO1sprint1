#pragma once
#include "Log.hpp"

class LogLeitura : public Log {
public:
    LogLeitura(const string &usarioDaOperacao, const Data &dataLog, int tipoMensagemLog);
};
