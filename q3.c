#include <stdio.h>
#define MAXN 1000

struct Goods {
    int id;
    char name[10];
    float price;
} good[MAXM];

int ReadFromFile(struct Goods* p_gds, char* file_name){
    FILE* txtin;
    txtin = fopen(file_name, "r");
    int n=0;
    while(~fscanf(txtin, "%d %s %f\n", &p_gds->id,p_gds->name,&p_gds->price)){
        p_gds++;
        n++;
    }
    fclose(txtin);
    return n;
}

void sort(struct Goods* p_gds, int num){
    int i, j, flag;
    for(i = 0; i < num - 1; i++){
        flag=i;
        for(j = i + 1; j < num; j++)
            if(p_gds[j].id < p_gds[f].id)
                f = j;
        if(i != f){
            struct Goods T = p_gds[i];
            p_gds[i] = p_gds[f];
            p_gds[f] = T;
        }
    }
}

void search(struct Goods* p_gds, int num, int gds_id){
    int i = 0, j = num, mid;
    int f = 0;
    while(i < j){
        mid = (i + j) / 2;
        if(p_gds[mid].id == gds_id){
            f = 1;
            break;
        }
        if(p_gds[mid].id < gds_id)
            i = mid + 1;
        else
            j = mid;
    }
    if(f)
        printf("id:%d name:%s price:%f\n", p_gds[mid].id, p_gds[mid].name, p_gds[mid].price);
    else
        printf("Not found id%d\n", gds_id);
}

void WriteToFile(struct Good* p_gds, char* file_name, int num){
    File* txtout;
    txtout = fopen(file_name, "w");
    int i;
    for(i = 0; i < num; i++, p_gds++)
        fprintf(txtout, "%d %s %f\n", p_gds->id, p_gds->name, p_gds->price);
    fclose(txtout);
}

int main(){
    int id, num = ReadFromFile(good, "goods_file.txt");
    sort(good, num);
    while(~scanf("%d\n",&id))
        search(good, num, id);
    WriteToFile(good, "goods_file1.txt", num);
    return 0;
}
