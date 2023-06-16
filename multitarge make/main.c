#include "main.h"
#include "congnhan_module.h"
#include "anxin_module.h"
#include "antrom_module.h"

void process(someone_t* fi, int n){
    FILE *fp;
    fp = fopen ("output.txt", "w+");
    for (int i = 0; i<n;i++){
        printf("Nguoi thu: %d\n",i+1);
        printf("Type: %s\n",(fi+i)->type);
        if ((fi+i)->type == "congnhan") printf("Income: %d\n",(fi+i)->income);
        else printf("%s\n",(fi+i)->income);
        (fi+i)->action(i,fp);
    }
    fclose(fp);
}

void main(){
    int n;
    printf("Nhap so nguoi muon tao < 100\n");
    scanf("%d",&n);
    someone_t nguoi[50];
    char* act = (char* )malloc(n*sizeof(char));
    for (int i =0; i<n;i++)
    {
        loainguoi a = rand()%3;
        if (a == anxin){
            nguoi[i].type = "anxin";
            nguoi[i].income = "tuytam";
            nguoi[i].action = cadge;
        }
        else if (a == antrom){
            nguoi[i].type = "antrom";
            nguoi[i].income = "henxui";
            nguoi[i].action  = stole;
        }
        else if (a == congnhan)
        {
            nguoi[i].type = "congnhan";
            nguoi[i].income = 500000;
            nguoi[i].action  = work;
        }
        else printf("Code sai");
    }

    process(nguoi,n);
}

