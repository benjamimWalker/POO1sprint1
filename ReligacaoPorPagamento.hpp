#pragma once

#include "Servico.hpp"

class ReligacaoPorPagamento : Servico {
public:
    ReligacaoPorPagamento(const Data &dataAgendamento, const Data &dataCriacao, const Funcionario &funcionario,
                          bool statusServico, const Data &dataExecucao, const Endereco &endereco,
                          const UnidadeConsumidora &unidadeConsumidora);
};
