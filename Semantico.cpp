#include "Semantico.h"
#include "Constants.h"

#include <iostream>

void Semantico::executeAction(int action, const Token *token) throw (SemanticError )
{
    std::cout << "A��o: " << action << ", Token: "  << token->getId() 
              << ", Lexema: " << token->getLexeme() << std::endl;
}

