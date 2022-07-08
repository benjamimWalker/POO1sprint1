#pragma once
#include "string"
#include "Data.h"

using std::string;

class Log {
    string usarioDaOperacao;
public:
    const string &getUsarioDaOperacao() const;

    void setUsarioDaOperacao(const string &usarioDaOperacao);

    Log(string usarioDaOperacao, const Data &dataLog, int tipoMensagemLog);

     Data getDataLog();

    void setDataLog(const Data &dataLog);

    int getTipoMensagemLog() const;

    void setTipoMensagemLog(int tipoMensagemLog);

    string toString();

private:
    Data dataLog;
    int tipoMensagemLog;
};