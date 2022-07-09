#include "UnidadeConsumidora.hpp"

#include <utility>

using std::string;

int UnidadeConsumidora::getNumeroInstalacao() {
    return this->numeroInstalacao;
}

void UnidadeConsumidora::setNumeroInstalacao(int numeroInstalacao) {
    this->numeroInstalacao = numeroInstalacao;
}

string UnidadeConsumidora::getNomeTitular() {
    return this->nomeTitular;
}

void UnidadeConsumidora::setgetNomeTitular(string nomeTitular) {
    this->nomeTitular = nunomeTitular;
}

Endereco UnidadeConsumidora::getEndereco(){
    return this->endereco;
}

void UnidadeConsumidora::setEndereco(Endereco endereco){
    this->endereco = endereco;
}

void UnidadeConsumidora::pagarFatura(Fatura *F){
    int i = F->getCodigo();

    for(int j = 0; j < faturas.size(); j++) {
        if(faturas[j].getCodigo() == i){
            faturas[j].setPago(true);
        }
    }

    for(auto it = faturas.begin(); it != faturas.end(); it++) {
        if (it->getCodigo() == i) {
            F->setPago(true);
        }
    }
}

void UnidadeConsumidora::adicionarFatura(Fatura F){
    faturas.push_back(F);
}

vector<Fatura> UnidadeConsumidora::getFaturas() {
    return this->faturas;
}

UnidadeConsumidora::UnidadeConsumidora(int numeroInstalacao, Endereco endereco, const     
                                       vector<Fatura> &faturas, int tensaoAtendimento): 
                                           numeroInstalacao(numeroInstalacao), 
                                           endereco(std::move(endereco)), faturas(faturas), 
                                           tensaoAtendimento(tensaoAtendimento) {
  
    UnidadeConsumidora::ultimaLeitura = 0;

    if (tensaoAtendimento < 1000)
        nivelTensao = "Baixa Tensão";
    else if (tensaoAtendimento >= 1000 && tensaoAtendimento <= 36000)
        nivelTensao = "Média Tensão";
    else
        nivelTensao = "Alta Tensão";
}

float UnidadeConsumidora::getUltimaLeitura() const {
    return ultimaLeitura;
}

void UnidadeConsumidora::setUltimaLeitura(float ultimaLeitura) {
    UnidadeConsumidora::ultimaLeitura = ultimaLeitura;
}

void UnidadeConsumidora::gerarFatura(float valor) {
  
    UnidadeConsumidora::adicionarFatura(Fatura(valor, Data().dateNow(),   
    Data().dateNow().plusOneMonth(), valor - UnidadeConsumidora::getUltimaLeitura()));
  
    UnidadeConsumidora::setUltimaLeitura(valor);
}
