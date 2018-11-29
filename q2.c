#include <stdio.h>

void fct(void)
{
    int x;
    printf("%p\n", &x);
}

void fct2(void)
{
    int y;
    printf("%p\n", &y);
}

int main(void)
{
    fct();
    fct2();

    return 0;
}

/* 出力結果が
0x7ffee5edb31c
0x7ffee5edb31c
となった理由としては、
関数fctの変数xがfctが終了した時に解放され、
fct2で確保されたyの確保領域がxと同じだったため。*/