#pragma once

#include <string>
#include <regex>
#include "Servico.hpp"

using std::string;
using std::stoi;

class Desligamento: public Servico{

public:
    int getCodMotivoEncerramento();
    void setCodMotivoEncerramento(int);
    void setMotivoEncerramento(string);
    string getMotivoEncerramento();

    Desligamento(const Data &dataAgendamento, const Data &dataCriacao, const Funcionario &funcionario,
                 bool statusServico, const Data &dataExecucao, const Endereco &endereco,
                 const UnidadeConsumidora &unidadeConsumidora, int codMotivoEncerramento,
                 string motivoEncerramento);

private:
    int codMotivoEncerramento;
    string motivoEncerramento;
};
