#pragma once

#include "UnidadeConsumidora.hpp"

class Comercial : public UnidadeConsumidora {
public:
    Comercial(int codigoUc, const Endereco &endereco, const vector<Fatura> &faturas, int tensaoAtendimento);
};
