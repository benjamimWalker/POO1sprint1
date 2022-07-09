

/*
==================================================
COLOQUEM O MÁXIMO DE TESTES QUE CONSEGUIREM AQUI
QUANTO MAIS MELHOR
==================================================
*/


#include <iostream>
#include "ClienteFisico.hpp"
#include "ClienteJuridico.hpp"
#include "UnidadeConsumidora.hpp"
#include "ListaDeServicos.hpp"
#include "Desligamento.hpp"
#include "Fatura.hpp"
#include "Sessao.hpp"
#include "Excecao.hpp"

using namespace std;
int main() {
    Sessao sessao = Sessao::getInstance();

//    cout << "Hello World!" << endl;
//    Fatura fatura1 = Fatura(300.0f, Data().dateNow(), Data().dateNow().plusOneMonth(), 0.3f);
//    cout << "depois" << endl;
//    Fatura fatura2 = Fatura(310.0f, Data().dateNow(), Data().dateNow().plusOneMonth(), 0.4f);
//
//    // cout Data
//         cout << "Data " << fatura1.getDataEmissao().getDia() << " " << endl;
//            cout << "Data " << fatura1.getDataEmissao().getMes() << " " << endl;
//            cout << "Data " << fatura1.getDataEmissao().getAno() << " " << endl;
//         fatura1.setCodigo(1111);
//    fatura2.setCodigo(2222);
//    vector<Fatura> faturas;
//
//    faturas.push_back(fatura1);
//    faturas.push_back(fatura2);
//
////    UnidadeConsumidora unidadeConsumidora1 = UnidadeConsumidora(123, Endereco(4.5f, 7.3f, "logradouro",
////                                                                                 564, "complemento", "cep", "cidade", "estado"), faturas);
////    UnidadeConsumidora unidadeConsumidora2 = UnidadeConsumidora(456, Endereco(4.5f, 7.3f, "logradouro2",
////                                                                                 564, "complemento2", "cep2", "cidade2", "estado2"), faturas);
//
//    vector<UnidadeConsumidora> unidadesConsumidoras;
////    unidadesConsumidoras.push_back(unidadeConsumidora1);
////    unidadesConsumidoras.push_back(unidadeConsumidora2);
//
//    Permissao permissao = Permissao();
//    ClienteFisico clienteFisico = ClienteFisico("senha", permissao, "Joao", "joao@gmail.com", "12345678", Endereco(4.5f, 7.3f, "logradouro",
//                                                                                                                    564, "complemento", "cep", "cidade", "estado"),
//                                                unidadesConsumidoras, "43384549031");
//
//    // cout each clienteFisico's attribute
//    cout << "CPF: " << clienteFisico.getCpf() << endl;
//    cout << "Nome: " << clienteFisico.getNome() << endl;
//    cout << "Email: " << clienteFisico.getE_mail() << endl;
//    cout << "Telefone: " << clienteFisico.getTelefone() << endl;
//    // cout object Endereco
//    cout << "Endereco: " << endl;
//    cout << "Logradouro: " << clienteFisico.getEndereco().getLogradouro() << endl;
//    cout << "Numero: " << clienteFisico.getEndereco().getNumero() << endl;
//    cout << "Complemento: " << clienteFisico.getEndereco().getComplemento() << endl;
//    cout << "CEP: " << clienteFisico.getEndereco().getCep() << endl;
//    cout << "Cidade: " << clienteFisico.getEndereco().getCidade() << endl;
//    cout << "Estado: " << clienteFisico.getEndereco().getEstado() << endl;
//    // cout object UnidadeConsumidora
//    cout << "Unidades Consumidoras: " << endl;
////    cout << "Codigo: " << unidadeConsumidora1.getNumeroInstalacao() << endl;
////    cout << "Endereco: " << endl;
////    cout << "Logradouro: " << unidadeConsumidora1.getEndereco().getLogradouro() << endl;
////    cout << "Numero: " << unidadeConsumidora1.getEndereco().getNumero() << endl;
////    cout << "Complemento: " << unidadeConsumidora1.getEndereco().getComplemento() << endl;
////    cout << "CEP: " << unidadeConsumidora1.getEndereco().getCep() << endl;
////    cout << "Cidade: " << unidadeConsumidora1.getEndereco().getCidade() << endl;
////    cout << "Estado: " << unidadeConsumidora1.getEndereco().getEstado() << endl;
//
//    ClienteJuridico clienteJuridico = ClienteJuridico("senha", permissao, "joao", "joao@gmail.com", "12345678", Endereco(4.5f, 7.3f, "logradouro",
//                                                                                                     564, "complemento", "cep", "cidade", "estado"), unidadesConsumidoras, "43384549031112");
//    cout << "CLIENTE JURIDICO" << endl;
//    cout << "===============================================================" << endl;
//    // cout each clienteJuridico's attribute
//    cout << "CNPJ: " << clienteJuridico.getCnpj() << endl;
//    cout << "Nome: " << clienteJuridico.getNome() << endl;
//    cout << "Email: " << clienteJuridico.getE_mail() << endl;
//    cout << "Telefone: " << clienteJuridico.getTelefone() << endl;
//    cout << "Endereco: " << endl;
//    cout << "Logradouro: " << clienteJuridico.getEndereco().getLogradouro() << endl;
//    cout << "Numero: " << clienteJuridico.getEndereco().getNumero() << endl;
//    cout << "Complemento: " << clienteJuridico.getEndereco().getComplemento() << endl;
//    cout << "CEP: " << clienteJuridico.getEndereco().getCep() << endl;
//    cout << "Cidade: " << clienteJuridico.getEndereco().getCidade() << endl;
//    cout << "Estado: " << clienteJuridico.getEndereco().getEstado() << endl;
//    cout << "Unidades Consumidoras: " << endl;
//
//    if (clienteJuridico.validarIdentificador()) {
//        cout << "Identificador valido" << endl;
//    }
//    else {
//        cout << "Identificador invalido" << endl;
//    }
//
//    cout << "ADICIONAR UNIDADE CONSUMIDORA" << endl;
//    cout << "===============================================================" << endl;
////    clienteJuridico.adicionarUnidadeConsumidora(unidadeConsumidora1);
////
////    cout << "Fatura 1 está paga ? " << unidadeConsumidora1.getFaturas()[0].isPago() << endl;
////    unidadeConsumidora1.pagarFatura(&fatura1);
////    cout << "Fatura 1 está paga ? " << unidadeConsumidora1.getFaturas()[0].isPago() << endl;
//
//
//
//    Funcionario funcionario1 = Funcionario("senha", permissao, "Joao", 3232);
//    Funcionario funcionario2 = Funcionario("senha", permissao, "Maria", 3432);
//    Funcionario funcionario3 = Funcionario("senha", permissao, "Jose", 3532);
////
////    Servico sx = Servico(funcionario1, Data().dateNow(), false, Data().dateNow().plusOneMonth(), Endereco(4.5f, 7.3f, "logradouro",
////                                                                                                          564, "complemento", "cep", "cidade", "estado"));
////    cout << "id do primeiro serviço: " << sx.getId() << endl;
////    Servico sx2 = Servico(funcionario1, Data().dateNow(), false, Data().dateNow().plusOneMonth(), Endereco(4.5f, 7.3f, "logradouro",564, "complemento", "cep", "cidade", "estado"));
////    cout << "id do segundo serviço " << sx2.getId() << endl;
////
////    Servico servico1 = Servico(funcionario1, Data().dateNow(), false, Data().dateNow().plusOneMonth(), Endereco(4.5f, 7.3f, "logradouro",
////                                                                                                                564, "complemento", "cep", "cidade", "estado"));
////    Servico servico2 = Servico(funcionario1, Data().dateNow(), false, Data().dateNow().plusOneMonth(), Endereco(4.5f, 7.3f, "logradouro",
////                                                                                                                564, "complemento", "cep", "cidade", "estado"));
////    vector<Servico> vetordeServicos1 = {servico1, servico2};
////    ListaDeServicos listaDeServicos = ListaDeServicos(vetordeServicos1, Data().dateNow());
////
////    Funcionario Fx = Funcionario("senha", permissao, "Zezinho da Esquina", 313);
////
////
////    listaDeServicos.adicionarServico(sx);
////    listaDeServicos.adicionarServico(sx2);
////    cout << "Lista de Servicos" << endl;
////    cout << "===============================================================" << endl;
////    cout << listaDeServicos.imprimirLista() << endl;
////    if (listaDeServicos.executarServico(Data().dateNow(), 1)) {
////        cout << "Serviço executado com sucesso" << endl;
////    } else {
////        cout << "Serviço não executado" << endl;
////    }
////
////    cout << "Desligamento" << endl;
////    cout << "===============================================================" << endl;
////    Desligamento desligamento =  Desligamento(funcionario1, Data().dateNow(), true, Data().dateNow().plusOneYear(), Endereco(4.5f, 7.3f, "logradouro",
////    564, "complemento", "cep", "cidade", "estado"), 345, "motivos confidenciais");
////    cout << "Data do desligamento: " << desligamento.getData().toString() << endl;
////    cout << "Hora do desligamento: " << desligamento.getData().getHora() << endl;
////    cout << "Endereco do desligamento: " << desligamento.getEndereco().toString() << endl;
////    cout << "Funcionario do desligamento: " << desligamento.getfuncionario().getNome() << endl;
////    cout << "Motivo do desligamento: " << desligamento.getMotivoEncerramento() << endl;
////    cout << "Codigo do desligamento: " << desligamento.getCodMotivoEncerramento() << endl;
}
