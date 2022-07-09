#pragma once

#include <string>
#include "LocalizacaoGeografica.hpp"

using std::string;

class Endereco : public LocalizacaoGeografica {
public:

    const string &getLogradouro() const;
    void setLogradouro(const string &logradouro);
    int getNumero() const;
    void setNumero(int numero);
    const string &getComplemento() const;
    void setComplemento(const string &complemento);
    const string &getCep() const;
    void setCep(const string &cep);
    const string &getCidade() const;
    void setCidade(const string &cidade);
    const string &getEstado() const;
    void setEstado(const string &estado);
    string toString() const;

    Endereco(float d, float d1, string logradouro, int numero, string complemento, string cep,
             string cidade, string estado);

private:

    string logradouro;
    int numero;
    string complemento;
    string cep;
    string cidade;
    string estado;
};