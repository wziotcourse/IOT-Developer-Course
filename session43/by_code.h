#ifndef BY_CODE_H
#define BY_CODE_H

void by_code()
{
    system("cls");
    int cd;
    f = fopen("list.txt", "r");
    if (f == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("Enter the code:\n");
        scanf("%d", &cd);
        flag = 0;
        while (!feof(f))
        {
            fscanf(f, "%d\t%s\t%lf\t", &item.code, item.name, &item.rate);
            if (cd == item.code)
            {
                flag = 1;
                break;
            }            
        }
        if (flag == 0)
            {
                printf("Record not found \n");
            }
            else
            {
                printf("\n\t\tCode\tName\tRate\n");
                printf("\n\t\t%d\t%s\t%lf\n", item.code, item.name, item.rate);
        }
    }
}
#endif