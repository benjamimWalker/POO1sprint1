#pragma once

#include <string>
#include "Cliente.hpp"

using std::string;

class ClienteJuridico: public Cliente {
private:
    string cnpj;
public:
    ClienteJuridico(const string &senha, const Permissao &permissao, const string &nome, const string &eMail,
                    const string &telefone, const Endereco &endereco, const vector<UnidadeConsumidora> &uc,
                    string cnpj);

    bool validarIdentificador();
    string getCnpj();
    void setCnpj(string);
};