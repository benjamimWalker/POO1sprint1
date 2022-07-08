#pragma once

#include <string>
#include "Cliente.hpp"

using std::string;

class ClienteFisico: public Cliente {
private:

    string cpf;

public:
    bool validarIdentificador() override;
    string getCpf();
    void setCpf(string);

    ClienteFisico(const string &senha, const Permissao &permissao, const string &nome, const string &eMail,
                  const string &telefone, const Endereco &endereco, const vector<UnidadeConsumidora> &uc,
                  string cpf);
};