#include "Desligamento.hpp"

#include <utility>


int Desligamento::getCodMotivoEncerramento(){
    return codMotivoEncerramento;
}

void Desligamento::setCodMotivoEncerramento(int cod) {
    this->codMotivoEncerramento = cod;
}

void Desligamento::setMotivoEncerramento(string motivo) {
    this->motivoEncerramento = std::move(motivo);
}

string Desligamento::getMotivoEncerramento() {
    return this->motivoEncerramento;
}

Desligamento::Desligamento(const Data &dataAgendamento, const Data &dataCriacao, const Funcionario &funcionario,
                           bool statusServico, const Data &dataExecucao, const Endereco &endereco,
                           const UnidadeConsumidora &unidadeConsumidora, int codMotivoEncerramento,
                           string motivoEncerramento) : Servico(dataAgendamento, dataCriacao, funcionario,
                                                                       statusServico, dataExecucao, endereco,
                                                                       unidadeConsumidora),
                                                               codMotivoEncerramento(codMotivoEncerramento),
                                                               motivoEncerramento(std::move(motivoEncerramento)) {}
