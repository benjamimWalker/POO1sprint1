#pragma once
#include "string"

using std::string;

class Permissao {
private:
    int cod;
public:
    int getCod() const;

    void setCod(int cod);

public:
    Permissao();
};