#pragma once

#include "UnidadeConsumidora.hpp"
#include "Usuario.hpp"
#include "Endereco.hpp"
#include <string>
#include <vector>
using std::string;
using std::vector;


class Cliente : public Usuario {

protected:
    string nome;
    string e_mail;
    string telefone;
    Endereco endereco;
    vector<UnidadeConsumidora> uc;

public:
    Cliente(string nome, string eMail,
            string telefone, Endereco endereco);

    virtual bool validarIdentificador();
    void adicionarUnidadeConsumidora(UnidadeConsumidora uc);
    vector<UnidadeConsumidora> getUnidadesConsumidoras();
    string getNome();
    void setNome(string nome);
    string getE_mail();
    void setE_mail(string e_mail);
    string getTelefone();
    void setTelefone(string);
    Endereco getEndereco();
    void setEndereco(Endereco);
};