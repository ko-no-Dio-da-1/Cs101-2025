#include <stdio.h>

int main() {
    FILE *fp;
    int a[] = {0, 1, 2};
    char b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};

    // 開啟二進位檔案以寫入
    fp = fopen("a.bin", "wb");
    if (fp == NULL) {
        perror("無法開啟檔案");
        return 1;
    }

    fwrite(a, sizeof(int), 3, fp);
    fwrite(b, sizeof(char), 3, fp);
    fwrite(c, sizeof(float), 3, fp);

    fclose(fp);

    // 讀取剛剛寫入的資料
    int ra[3];
    char rb[3];
    float rc[3];

    fp = fopen("a.bin", "rb");
    if (fp == NULL) {
        perror("無法開啟檔案");
        return 1;
    }

    fread(ra, sizeof(int), 3, fp);
    fread(rb, sizeof(char), 3, fp);
    fread(rc, sizeof(float), 3, fp);

    fclose(fp);

    // 輸出讀取結果
    printf("%d %d %d\n", ra[0], ra[1], ra[2]);
    printf("%c %c %c\n", rb[0], rb[1], rb[2]);
    printf("%.1f %.1f %.1f\n", rc[0], rc[1], rc[2]);

    return 0;
}
