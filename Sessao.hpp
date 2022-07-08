#pragma once

class Sessao {
public:
    static Sessao& getInstance();
private:
    Sessao() {}
public:
    void operator=(Sessao const&)  = delete;
};