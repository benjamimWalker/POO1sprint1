#pragma once

#include "UnidadeConsumidora.hpp"

class Industrial : public UnidadeConsumidora {

public:

    Industrial(int codigoUc, const Endereco &endereco, const vector<Fatura> &faturas, int 
               tensaoAtendimento);
};