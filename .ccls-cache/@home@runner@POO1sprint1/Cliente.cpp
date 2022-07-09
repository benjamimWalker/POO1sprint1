
#include "Cliente.hpp"

#include <utility>
using std::string;
using std::vector;


bool Cliente::validarIdentificador() {
    return true;
}

void Cliente::adicionarUnidadeConsumidora(UnidadeConsumidora uc) {
    this->uc.push_back(uc);
};

string Cliente::getNome(){
    return nome;
}

void Cliente::setNome(string nome){
    this->nome = nome;
}

string Cliente::getE_mail(){
    return e_mail;
}

void Cliente::setE_mail(string e_mail){
    this->e_mail = e_mail;
}

string Cliente::getTelefone(){
    return telefone;
}

void Cliente::setTelefone(string telefone){
    this->telefone = telefone;
}

Endereco Cliente::getEndereco(){
    return endereco;
}

void Cliente::setEndereco(Endereco endereco){
    this->endereco = endereco;
}

vector<UnidadeConsumidora> Cliente::getUnidadesConsumidoras() {
    return this->uc;
}

Cliente::Cliente( string nome, string eMail,
                 string telefone, Endereco endereco){
  
                 }
