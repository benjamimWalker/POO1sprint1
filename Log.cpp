//
// Created by benjamim on 06/07/22.
//

#include "Log.hpp"

#include <utility>

const string &Log::getUsarioDaOperacao() const {
    return usarioDaOperacao;
}

void Log::setUsarioDaOperacao(const string &usarioDaOperacao) {
    Log::usarioDaOperacao = usarioDaOperacao;
}

 Data Log::getDataLog() {
    return dataLog;
}

void Log::setDataLog(const Data &dataLog) {
    Log::dataLog = dataLog;
}

int Log::getTipoMensagemLog() const {
    return tipoMensagemLog;
}

void Log::setTipoMensagemLog(int tipoMensagemLog) {
    Log::tipoMensagemLog = tipoMensagemLog;
}

Log::Log(string usarioDaOperacao, const Data &dataLog, int tipoMensagemLog) : usarioDaOperacao(std::move(usarioDaOperacao)),
                                                                                     dataLog(dataLog),
                                                                                     tipoMensagemLog(tipoMensagemLog) {}

string Log::toString() {
    return "Usuario:"  + getUsarioDaOperacao() + "\n" + "Data:" + getDataLog().toString() + "\n" + "Tipo de mensagem:" +
           std::to_string(getTipoMensagemLog()) + "\n";
}
