//
// Created by k1toWorkDevice1 on 31.10.2023.
//

#include "main.h"

extern ASTNode ** allNodes;
extern u_int64_t allNodesCount;

int main(int argc, char *argv[]) {
    allNodes = malloc(1024 * 8 * sizeof(ASTNode*));
    allNodesCount = 0;
    if (argc > 1) {
        FILE *input_file = fopen(argv[1], "r");
        if (input_file) {
            yyin = input_file;
            yyparse();
            fclose(input_file);
            printAST();


        } else {
            printf("Не удалось открыть файл: %s\n", argv[1]);
        }
    } else {
        printf("Использование: %s <input_file>\n", argv[0]);
    }
    return 0;
}
