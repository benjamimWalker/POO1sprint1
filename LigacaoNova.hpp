#pragma once

#include <string>
#include "Servico.hpp"
#include <regex>

using std::string;
using std::stoi;

class LigacaoNova : public Servico {

public:

    LigacaoNova(const Data &dataAgendamento, const Data &dataCriacao, const Funcionario       
                &funcionario, bool statusServico, const Data &dataExecucao, const Endereco   
                &endereco, const UnidadeConsumidora &unidadeConsumidora);
};
