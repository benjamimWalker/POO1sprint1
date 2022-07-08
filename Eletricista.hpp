#pragma once
#include "Funcionario.hpp"

class Eletricista : public Funcionario {
public:
    Eletricista(const string &senha, const Permissao &permissao, const string &nome, int id);
};