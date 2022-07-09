#pragma once

class Sessao {

public:

  static Sessao& getInstance();
  void operator=(Sessao const&)  = delete;

private:

    Sessao() {}

};