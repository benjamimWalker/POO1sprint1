
#include "Sessao.hpp"

Sessao& Sessao::getInstance() {
    static Sessao instance;
    return instance;
}

bool Sessao::validarOperacao(Usuario u){
  
}
