#include "Eletricista.hpp"

Eletricista::Eletricista(const string &senha, const Permissao &permissao, const string &nome, int id) : Funcionario(
        senha, permissao, nome, id) {}
