#include <iostream>
#include <utility>
#include "ListaDeServicos.hpp"

using namespace std;

string ListaDeServicos::imprimirLista() {
    string impressao;
    impressao += "Data: " + dataLista.toString() + "\n";

    for (int i = 0; i < this->servicos.size(); i++) {
        impressao += "Data do serviço: " + this->servicos[i].getDataExecucao().toString() + "\n";
        impressao += "Endereço: " + this->servicos[i].getEndereco().getLogradouro() + "\n";
        impressao += "Hora: " + to_string(this->servicos[i].getDataExecucao().getHora()) + "\n";
    }

    return impressao;
}

bool ListaDeServicos::executarServico(Data data, int idServico) {
    bool flagAchou = false;
    for (int i = 0; i < this->servicos.size(); i++) {
        if (this->servicos[i].getId() == idServico) {
            flagAchou = true;
            return this->servicos[i].servicoExecutado(data);
        }
    }
    return flagAchou;
}

void ListaDeServicos::adicionarServico(Servico servico) {
    servicos.push_back(servico);
}

void ListaDeServicos::removerServico(Servico servico) {
    for (int i = 0; i < servicos.size(); i++) {
        if (servicos[i].getId() == servico.getId()) {
            servicos.erase(servicos.begin() + i);
        }
    }
}

const Data &ListaDeServicos::getDataLista() const {
    return dataLista;
}

void ListaDeServicos::setDataLista(const Data &dataLista) {
    ListaDeServicos::dataLista = dataLista;
}

ListaDeServicos::ListaDeServicos(const vector<Servico> &servicos, const Data &dataLista) : servicos(servicos),
                                                                                           dataLista(dataLista) {}