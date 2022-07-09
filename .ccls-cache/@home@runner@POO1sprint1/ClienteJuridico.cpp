//#pragma once
#include "ClienteJuridico.hpp"

#include <utility>

using std::string;


bool ClienteJuridico::validarIdentificador() {
    return getCnpj().size() == 14;
}

string ClienteJuridico::getCnpj() { return cnpj; }

void ClienteJuridico::setCnpj(string cnpj) { this->cnpj = cnpj; }

ClienteJuridico::ClienteJuridico( const string &nome,
                                 const string &eMail, const string &telefone, const Endereco &endereco,
                                 const vector<UnidadeConsumidora> &uc, string cnpj) : Cliente(senha, permissao,
                                                                                                     nome, eMail,
                                                                                                     telefone, endereco,
                                                                                                     uc), cnpj(std::move(cnpj)) {}

