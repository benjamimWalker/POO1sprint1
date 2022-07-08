#pragma once
#include "string"

using std::string;

class Excecao : public std::exception {
    string mensagemErro;
    int tipoErro;
public:
    Excecao(const string &mensagemErro, int tipoErro);

    const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override;
};

