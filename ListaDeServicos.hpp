#pragma once

#include "Servico.hpp"
#include "Data.h"
#include <string>
#include <vector>

using std::string;
using std::stoi;
using std::vector;

class ListaDeServicos {
    vector<Servico> servicos;
    Data dataLista;
public:
    ListaDeServicos(const vector<Servico> &servicos, const Data &dataLista);

public:
    void adicionarServico(Servico);
    void removerServico(Servico);
    string imprimirLista();
    const Data &getDataLista() const;
    void setDataLista(const Data &dataLista);
    bool executarServico(Data, int);
};
