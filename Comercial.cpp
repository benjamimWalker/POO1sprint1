#include "Comercial.hpp"

Comercial::Comercial(int codigoUc, const Endereco &endereco, const vector<Fatura> &faturas, int tensaoAtendimento)
        : UnidadeConsumidora(codigoUc, endereco, faturas, tensaoAtendimento) {}
