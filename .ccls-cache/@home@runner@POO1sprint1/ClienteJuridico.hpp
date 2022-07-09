#pragma once

#include <string>
#include "Cliente.hpp"

using std::string;

class ClienteJuridico: public Cliente {
private:
    string cnpj;
public:
    ClienteJuridico(const string &nome, const string &eMail,
                    const string &telefone, const Endereco &endereco,
                    string cnpj);

    bool validarIdentificador();
    string getCnpj();
    void setCnpj(string);
};