#pragma once
#include "string"
#include "Permissao.hpp"

using std::string;

class Usuario {
private:
    int cod;
public:
    const string &getSenha() const;

    void setSenha(const string &senha);

    const Permissao &getPermissao() const;

    void setPermissao(const Permissao &permissao);

private:
    string senha;
public:
    Usuario(string senha, const Permissao &permissao);

private:
    Permissao permissao;
};