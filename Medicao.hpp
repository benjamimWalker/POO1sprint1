#pragma once

#include <string>
#include <regex>
#include "Servico.hpp"

using std::string;
using std::stoi;

class Medicao : public Servico {

private:
    int codMedicao;
    float valorMedicao;

    void leituraMedicao(float);

public:
    int getCodMedicao() const;

    void setCodMedicao(int codMedicao);

    bool isStatusServico() const override;

    void setDataExecucao(const Data &dataExecucao) override;

    float getValorMedicao() const;

    void setValorMedicao(float valorMedicao);
    bool servicoExecutado(Data, float);

    Medicao(const Data &dataAgendamento, const Data &dataCriacao, const Funcionario &funcionario, bool statusServico,
            const Data &dataExecucao, const Endereco &endereco, const UnidadeConsumidora &unidadeConsumidora,
            int codMedicao, float valorMedicao);
};
