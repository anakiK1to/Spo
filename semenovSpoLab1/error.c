//
// Created by k1toWorkDevice1 on 31.10.2023.
//

#include "error.h"
#include <stdio.h>

void yyerror(const char* s){
    fprintf(stderr, "Ошибка: %s\n", s);
}