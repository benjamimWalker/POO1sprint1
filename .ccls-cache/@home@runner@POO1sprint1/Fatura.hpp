#pragma once

#include "Data.h"
#include <string>
#include <regex>

using std::string;
using std::stoi;


class Fatura {

    int codigo;
    float valor;
    Data dataEmissao;
    Data dataVencimento;
    bool pago;
    float taxa;
    float consumo;
    static int codigoCount;

public:
    int getCodigo();

    Fatura(float valor, const Data &dataEmissao, const Data &dataVencimento,
           float consumo);

    void setCodigo(int);
    float getValor();
    void setValor(float);
    Data getDataEmissao();
    void setDataEmissao(Data);
    Data getDataVencimento();
    void setDataVencimento(Data);
    bool isPago();
    void setPago(bool);
    float getTaxa();
    void setTaxa(float);
    float calcularJuros(Data);
    bool pagarFatura(float, int);
};
