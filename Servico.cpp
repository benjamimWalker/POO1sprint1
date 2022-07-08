#include "Servico.hpp"
#include <regex>
#include <utility>

bool Servico::servicoExecutado(Data data) {
    Servico::setDataExecucao(data);
    return this->isStatusServico();
}

int Servico::counterId = 0;

Servico::Servico(const Data &dataAgendamento, const Data &dataCriacao, Funcionario funcionario, bool statusServico,
                 const Data &dataExecucao, Endereco endereco, UnidadeConsumidora unidadeConsumidora) : dataAgendamento(
        dataAgendamento), dataCriacao(dataCriacao), funcionario(std::move(funcionario)), statusServico(statusServico),
                                                                                                       dataExecucao(dataExecucao),
                                                                                                       endereco(std::move(endereco)),
                                                                                                       unidadeConsumidora(
                                                                                                               std::move(unidadeConsumidora)) {
    Servico::counterId++;
    this->id = Servico::counterId;
}

const Data &Servico::getDataAgendamento() const {
    return dataAgendamento;
}

void Servico::setDataAgendamento(const Data &dataAgendamento) {
    Servico::dataAgendamento = dataAgendamento;
}

const Data &Servico::getDataCriacao() const {
    return dataCriacao;
}

void Servico::setDataCriacao(const Data &dataCriacao) {
    Servico::dataCriacao = dataCriacao;
}

const Funcionario &Servico::getFuncionario() const {
    return funcionario;
}

void Servico::setFuncionario(const Funcionario &funcionario) {
    Servico::funcionario = funcionario;
}

bool Servico::isStatusServico() const {
    return statusServico;
}

void Servico::setStatusServico(bool statusServico) {
    Servico::statusServico = statusServico;
}

const Data Servico::getDataExecucao() const {
    return dataExecucao;
}

void Servico::setDataExecucao(const Data &dataExecucao) {
    Servico::dataExecucao = dataExecucao;
}

const Endereco &Servico::getEndereco() const {
    return endereco;
}

void Servico::setEndereco(const Endereco &endereco) {
    Servico::endereco = endereco;
}

int Servico::getCounterId() {
    return counterId;
}

void Servico::setCounterId(int counterId) {
    Servico::counterId = counterId;
}

int Servico::getId() const {
    return id;
}