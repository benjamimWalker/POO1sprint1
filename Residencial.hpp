#pragma once
#include "UnidadeConsumidora.hpp"

class Residencial : public UnidadeConsumidora {
public:
    Residencial(int codigoUc, const Endereco &endereco, const vector<Fatura> &faturas, int tensaoAtendimento);
};
