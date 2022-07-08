#pragma once

#include <string>
#include "Usuario.hpp"

using std::string;
using std::stoi;


class Funcionario : public Usuario{
    string nome;
public:

    const string &getNome() const;

    void setNome(const string &nome);

    int getId() const;

    Funcionario(const string &senha, const Permissao &permissao, string nome, int id);

    void setId(int id);

private:
    int id;
};