#include <stdio.h>
int main(void)
{
    int x = 123;
    int *ptr;
    printf("%p\n", &x);
    ptr = &x;
    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    return 0;
}

/* int型ポインタ変数のptrに変数xのアドレスを代入され、
９行目の参照演算子＊でポインタ変数ptrに入っているxのアドレスに間接参照して出力した。 */