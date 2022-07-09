#include "LigacaoNova.hpp"

LigacaoNova::LigacaoNova(const Data &dataAgendamento, const Data &dataCriacao, const Funcionario                         &funcionario, bool statusServico, const Data &dataExecucao, const                               Endereco &endereco, const UnidadeConsumidora &unidadeConsumidora) :                                 Servico(dataAgendamento, dataCriacao,funcionario, statusServico,                                        dataExecucao, endereco, unidadeConsumidora) {}
