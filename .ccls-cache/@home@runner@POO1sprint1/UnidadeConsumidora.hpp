#pragma once

#include "Fatura.hpp"
#include "Endereco.hpp"
#include <string>
#include <vector>
using std::string;
using std::vector;

class UnidadeConsumidora {

private:

    int numeroInstalacao;
    Endereco endereco;
    string nomeTitular;
    float ultimaLeitura;
    string nivelTensao;
    int tensaoAtendimento;
    vector<Fatura> faturas;

public:

    float getUltimaLeitura() const;
    void setUltimaLeitura(float ultimaLeitura);
    UnidadeConsumidora(int codigoUc, Endereco endereco, const vector<Fatura> &faturas, int 
                       tensaoAtendimento);
    int getNumeroInstalacao();
    void setNumeroInstalacao(int);
    Endereco getEndereco();
    void setEndereco(Endereco);
    vector<Fatura> getFaturas();
    void pagarFatura(Fatura*);
    void adicionarFatura(Fatura);
    void gerarFatura(float);
};