#include "Fatura.hpp"


int Fatura::codigoCount = 1;

float Fatura::calcularJuros(Data data) {
    return taxa * (float) data.diffData(dataVencimento);
}


int Fatura::getCodigo() {
    return codigo;
}

void Fatura::setCodigo(int codigo) {
    Fatura::codigo = codigo;
}

float Fatura::getValor() {
    return valor;
}

void Fatura::setValor(float valor) {
    Fatura::valor = valor;
}

Data Fatura::getDataEmissao() {
    return dataEmissao;
}

void Fatura::setDataEmissao(Data dataEmissao) {
    Fatura::dataEmissao = dataEmissao;
}

Data Fatura::getDataVencimento() {
    return dataVencimento;
}

void Fatura::setDataVencimento(Data dataVencimento) {
    Fatura::dataVencimento = dataVencimento;
}

bool Fatura::isPago() {
    return pago;
}

void Fatura::setPago(bool pago) {
    Fatura::pago = pago;
}

float Fatura::getTaxa() {
    return taxa;
}

void Fatura::setTaxa(float taxa) {
    Fatura::taxa = taxa;
}

Fatura::Fatura(float valor, const Data &dataEmissao, const Data &dataVencimento,
               float consumo) : valor(valor), dataEmissao(dataEmissao), dataVencimento(dataVencimento), consumo(consumo) {
    this->pago = false;
    Fatura::codigoCount++;
    codigo = codigoCount;
    this->taxa = 0.0f;
}

bool Fatura::pagarFatura(float, int) {
    setPago(true);
    return '0';
}
