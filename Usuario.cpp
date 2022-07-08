#include "Usuario.hpp"

#include <utility>

Usuario::Usuario(string senha, const Permissao &permissao) : senha(std::move(senha)), permissao(permissao) {}

const string &Usuario::getSenha() const {
    return senha;
}

void Usuario::setSenha(const string &senha) {
    Usuario::senha = senha;
}

const Permissao &Usuario::getPermissao() const {
    return permissao;
}

void Usuario::setPermissao(const Permissao &permissao) {
    Usuario::permissao = permissao;
}
