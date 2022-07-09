#pragma once

#include "UnidadeConsumidora.hpp"

class IluminacaoPublica : public UnidadeConsumidora {

public:
    IluminacaoPublica(int codigoUc, const Endereco &endereco, const vector<Fatura>     
                      &faturas, int tensaoAtendimento);
};