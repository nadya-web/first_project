{"filter":false,"title":"v2.c","tooltip":"/v2.c","undoManager":{"mark":1,"position":1,"stack":[[{"start":{"row":0,"column":0},"end":{"row":29,"column":1},"action":"insert","lines":["#include <stdio.h>","","int main(){","    ","    int num1, num2, num3, i, x, y;","    num1 = 1;","    num2 = 1;","    i = 2;","    y = 0;","    int lst[12] = {0};","    ","    lst[0] = num1;","    lst[1] = num2;","","    printf(\"%d, %d, \", num1, num2);","    ","    for (num3; num3<=100;){","        ","        num3 = num1 + num2;","        lst[i] = num3;","        num1 = num2;","        num2 = num3;","        i++;","    }","    for (y;y<=12;y++){","        x = lst[i];","        printf(\"%d\", x);","    }","    return 0;","}"],"id":1}],[{"start":{"row":3,"column":0},"end":{"row":3,"column":4},"action":"remove","lines":["    "],"id":2},{"start":{"row":10,"column":0},"end":{"row":10,"column":4},"action":"remove","lines":["    "]},{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"remove","lines":["    "]},{"start":{"row":17,"column":0},"end":{"row":17,"column":8},"action":"remove","lines":["        "]}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":29,"column":1},"end":{"row":29,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1589471982279,"hash":"4cf3a9cd7adc23462dc70fe0dd5368fcc45da9d5"}