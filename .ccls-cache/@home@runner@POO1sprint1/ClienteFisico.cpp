//#pragma once

#include "ClienteFisico.hpp"

#include <utility>
using std::string;

bool ClienteFisico::validarIdentificador() {
    int mult1[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
    int mult2[10] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

    string cpf1 = getCpf();
    string tempCpf;
    string digito;
    int soma = 0;
    int resto;

    if (cpf1.size() != 11) {
        return false;
    }

    tempCpf = cpf1.substr(0, 9);

    for (int i = 0; i < 9; i++) {
        soma += (tempCpf[i] - '0') * mult1[i];
    }

    resto = soma % 11;

    if (resto < 2) {
        resto = 0;
    } else {
        resto = 11 - resto;
    }

    digito = std::to_string(resto);
    tempCpf += digito;

    soma = 0;

    for (int i = 0; i < 10; i++) {
        soma += (tempCpf[i] - '0') * mult2[i];
    }

    resto = soma % 11;

    if (resto < 2) {
        resto = 0;
    } else {
        resto = 11 - resto;
    }

    digito += std::to_string(resto);

    return digito == cpf1.substr(9, 2);
}

string ClienteFisico::getCpf(){
    return cpf;
}

void ClienteFisico::setCpf(string cpf){
    this->cpf = cpf;
}

ClienteFisico::ClienteFisico(const string &senha, const Permissao &permissao, const string &nome, const string &eMail,
                             const string &telefone, const Endereco &endereco, const vector<UnidadeConsumidora> &uc,
                             string cpf) : Cliente(senha, permissao, nome, eMail, telefone, endereco, uc),
                                                  cpf(std::move(cpf)) {}

