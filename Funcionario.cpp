#include "Funcionario.hpp"

#include <utility>

const string &Funcionario::getNome() const {
    return nome;
}

void Funcionario::setNome(const string &nome) {
    Funcionario::nome = nome;
}

int Funcionario::getId() const {
    return id;
}

void Funcionario::setId(int id) {
    Funcionario::id = id;
}

Funcionario::Funcionario(const string &senha, const Permissao &permissao, string nome, int id) : Usuario(senha,
                                                                                                                permissao),
                                                                                                        nome(std::move(nome)),
                                                                                                        id(id) {}

