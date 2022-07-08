#pragma once

#include <string>
#include "Servico.hpp"

using std::string;
using std::stoi;

class Troca: public Servico {
public:
    Troca(const Data &dataAgendamento, const Data &dataCriacao, const Funcionario &funcionario, bool statusServico,
          const Data &dataExecucao, const Endereco &endereco, const UnidadeConsumidora &unidadeConsumidora);
};
