#pragma once
#include "Funcionario.hpp"
#include "Data.h"
#include "Endereco.hpp"
#include "UnidadeConsumidora.hpp"
#include <string>

using std::string;
using std::stoi;


class Servico {
    Data dataAgendamento;
    Data dataCriacao;
    Funcionario funcionario;
    Endereco endereco;
    static int counterId;
    int id;
protected:
    UnidadeConsumidora unidadeConsumidora;
    Data dataExecucao;
    bool statusServico;
public:
    Servico(const Data &dataAgendamento, const Data &dataCriacao, Funcionario funcionario, bool statusServico,
            const Data &dataExecucao, Endereco endereco, UnidadeConsumidora unidadeConsumidora);

    bool servicoExecutado(Data);

    const Data &getDataAgendamento() const;

    void setDataAgendamento(const Data &dataAgendamento);

    const Data &getDataCriacao() const;

    void setDataCriacao(const Data &dataCriacao);

    const Funcionario &getFuncionario() const;

    int getId() const;

    void setFuncionario(const Funcionario &funcionario);

    virtual bool isStatusServico() const;

    void setStatusServico(bool statusServico);

    const Data getDataExecucao() const;

    virtual void setDataExecucao(const Data &dataExecucao);

    const Endereco &getEndereco() const;

    void setEndereco(const Endereco &endereco);

    static int getCounterId();

    static void setCounterId(int counterId);
};
