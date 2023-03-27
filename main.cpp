/*
Репозиторий к задаче
https://github.com/s-getmanov/tp_homework_37.git
*/
#include <stdio.h>

main()
{

    int summ = 0;

    printf("Суммируем числа от 1 до 100 ...\n");
    for (int i = 1; i <= 100; i++)
    {
        summ = summ + i;
    }

    printf("Сумма чисел от 1 до 100 = %i\n", summ);
}
