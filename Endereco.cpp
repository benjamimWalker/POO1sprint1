#include "Endereco.hpp"

#include <utility>

const string &Endereco::getLogradouro() const {
    return logradouro;
}

void Endereco::setLogradouro(const string &logradouro) {
    Endereco::logradouro = logradouro;
}

int Endereco::getNumero() const {
    return numero;
}

void Endereco::setNumero(int numero) {
    Endereco::numero = numero;
}

const string &Endereco::getComplemento() const {
    return complemento;
}

void Endereco::setComplemento(const string &complemento) {
    Endereco::complemento = complemento;
}

const string &Endereco::getCep() const {
    return cep;
}

void Endereco::setCep(const string &cep) {
    Endereco::cep = cep;
}

const string &Endereco::getCidade() const {
    return cidade;
}

void Endereco::setCidade(const string &cidade) {
    Endereco::cidade = cidade;
}

const string &Endereco::getEstado() const {
    return estado;
}

void Endereco::setEstado(const string &estado) {
    Endereco::estado = estado;
}

Endereco::Endereco(float d, float d1, string logradouro, int numero, string complemento,
                   string cep, string cidade, string estado) : LocalizacaoGeografica(d, d1),
                                                                                    logradouro(std::move(logradouro)),
                                                                                    numero(numero),
                                                                                    complemento(std::move(complemento)), cep(std::move(cep)),
                                                                                    cidade(std::move(cidade)), estado(std::move(estado)) {}

string Endereco::toString() const {
    return "Logradouro: " + logradouro + "\nNumero: " + std::to_string(numero) + "\nComplemento: " + complemento + "\nCEP: " + cep + "\nCidade: " + cidade + "\nEstado: " + estado;
}

