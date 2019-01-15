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
            printf("jinrucunqiangongneng:\n");
            scanf("%d", &cun);

            qian += cun;
            printf("cunqianchenggong，anhuichejixu");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("jinruquqiangongneng,qingshurujine\n");
            int qu;
            scanf("%d", &qu);
            if (qian < qu)
            {
                printf("yuebuzu,quqianshibai,dianjihuichetuichu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                qian -= qu;
                printf("quqianchenggong，anhuichejixu");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 3)
        {
            printf("yu e :\n");
            printf("%d,dianjihuichejixu\n", qian);
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("chuiche jx\n");
            break;
        }
    }
}
