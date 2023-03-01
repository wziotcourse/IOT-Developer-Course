#ifndef BY_NAME_H
#define BY_NAME_H

void by_name()
{
    system("cls");
    char itemName[10];
    f = fopen("list.txt", "r");
    if (f == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("Enter the Name:\n");
        scanf("%s", itemName);
        flag = 0;
        while (!feof(f))
        {
            fscanf(f, "%d\t%s\t%lf\t", &item.code, item.name, &item.rate);
            if (!stricmp(itemName,item.name))
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