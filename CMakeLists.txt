    cmake_minimum_required(VERSION 3.22)
project(POO1sprint1)

set(CMAKE_CXX_STANDARD 14)

add_executable(POO1sprint1 main.cpp Cliente.cpp Cliente.hpp ClienteFisico.cpp ClienteFisico.hpp
        ClienteJuridico.cpp
        ClienteJuridico.hpp
        Fatura.cpp
        Data.cpp
        Data.h
        Formato.cpp
        Formato.h
        ExecaoCustomizada.h
        Fatura.hpp
        UnidadeConsumidora.cpp
        UnidadeConsumidora.hpp
        Desligamento.cpp Desligamento.hpp Funcionario.cpp Funcionario.hpp LigacaoNova.cpp LigacaoNova.hpp Medicao.hpp Medicao.cpp Servico.cpp Servico.hpp Troca.cpp Troca.hpp ReligacaoPorPagamento.cpp ReligacaoPorPagamento.hpp LocalizacaoGeografica.cpp LocalizacaoGeografica.hpp Endereco.cpp Endereco.hpp Comercial.cpp Comercial.hpp Residencial.cpp Residencial.hpp IluminacaoPublica.cpp IluminacaoPublica.hpp Industrial.cpp Industrial.hpp Permissao.cpp Permissao.hpp Usuario.cpp Usuario.hpp Leiturista.cpp Leiturista.hpp Eletricista.cpp Eletricista.hpp ListaDeServicos.cpp ListaDeServicos.hpp Logger.cpp Logger.hpp Log.cpp Log.hpp LogLeitura.cpp LogLeitura.hpp Excecao.cpp Excecao.hpp Sessao.cpp Sessao.hpp)
