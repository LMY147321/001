

#include <stdio.h>

void main()
{
    int qian = 0;
    printf("jinrucunquqianguanlixitong\n");
    while (1)
    {
        int a = 0;
        printf("1---cunqian\n");
        printf("2---quqain\n");
        printf("3---yue\n");
        printf("4---tuichu\n");
        printf("qingshurugongnengbianhao：\n");
        scanf("%d", &a);
        if (a == 1)
        {
            int cun;
            char x;
            printf("jinrucunqiangongneng,qingshuruyaocunrudejine：\n");
            scanf("%d", &cun);
            qian += cun;
            printf("cunruchenggong,dianjihuichejixu\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (a == 2)
        {
            int qu;
            char x;
            printf("jinruquqiangongneng，qingshuruyaoquchudejine\n");
            scanf("%d", &qu);

            if (qian >= qu)
            {
                qian -= qu;
                printf("quqianchenggong，dianjihuichejixu\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else if (qian < qu)
            {
                printf("yuebuzu，quqianshibai，dianjihuichejixu\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }

        if (a == 3)
        {
            char x;
            printf("dangqianyuewei%d\n", qian);
            printf("dianjihuichejixu\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (a == 4)
        {
            printf("chengxujieshu\n");
            break;
        }
    }
    return 0;
}
