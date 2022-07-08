#include "Medicao.hpp"

int Medicao::getCodMedicao() const {
    return codMedicao;
}

void Medicao::setCodMedicao(int codMedicao) {
    Medicao::codMedicao = codMedicao;
}

float Medicao::getValorMedicao() const {
    return valorMedicao;
}

void Medicao::setValorMedicao(float valorMedicao) {
    Medicao::valorMedicao = valorMedicao;
}

void Medicao::leituraMedicao(float valor) {
    Medicao::setValorMedicao(valor);
}

bool Medicao::servicoExecutado(Data data, float medicao) {
    Medicao::valorMedicao = medicao;
    Medicao::setDataExecucao(data);
    unidadeConsumidora.gerarFatura(medicao);

    return Medicao::isStatusServico();
}

bool Medicao::isStatusServico() const {
    return this->statusServico;
}

void Medicao::setDataExecucao(const Data &dataExecucao) {
    this->dataExecucao = dataExecucao;
}

Medicao::Medicao(const Data &dataAgendamento, const Data &dataCriacao, const Funcionario &funcionario,
                 bool statusServico, const Data &dataExecucao, const Endereco &endereco,
                 const UnidadeConsumidora &unidadeConsumidora, int codMedicao, float valorMedicao) : Servico(
        dataAgendamento, dataCriacao, funcionario, statusServico, dataExecucao, endereco, unidadeConsumidora),
                                                                                                     codMedicao(
                                                                                                             codMedicao),
                                                                                                     valorMedicao(
                                                                                                             valorMedicao) {}
