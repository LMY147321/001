#include <stdio.h>

int main()
{
    int qian = 0;
    printf("jinruqianbaoguanlixitong\n");
    while (1)
    {
        printf("1--cunqian\n");
        printf("2--quqian\n");
        printf("3--yue\n");
        printf("4--yuichu\n");

        int code;
        printf("qingshuruxiangyinggongnengbianhao:\n");
        scanf("%d", &code);
        if (code == 1)
        {
            int cun;
            scanf("%d", &cun);
            char x;
            scanf("%d", &cun);
            qian += cun;
            printf("jinrucunqiangongneng:\n");
            printf("cunqianchenggong，anhuichejixu");
        }
        if (code == 2)
        {
            int qu;
            char x;
            printf("jinruquqiangongneng,qingshurujine\n");
            scanf("%d",&qu);
            qian -= qu;
            printf("quqianchenggong，anhuichejixu");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            printf("yu e :\n");
            printf("%d", qian);
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if(code == 4){
            printf("chuiche jx\n");
            break;
        }
    }
}
