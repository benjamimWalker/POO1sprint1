#pragma once

#include "string"
#include "Permissao.hpp"

using std::string;

class Usuario {

public:
    const string &getSenha() const;
    void setSenha(const string &senha);
    const Permissao &getPermissao() const;
    void setPermissao(const Permissao &permissao);
    Usuario(string senha, const Permissao &permissao);

private:

    int cod;
    string senha;
    Permissao permissao;
};