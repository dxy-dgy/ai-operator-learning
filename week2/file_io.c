#include <stdio.h>
int main(){
    FILE* fp = fopen("data.txt","w");
    if (!fp) return 1;
    for (int i = 1; i < 5; i++){
        fprintf(fp, "%d %.2lf\n", i, 0.1*i);
    }
    fclose(fp);
    return 0;
}