#include <stdio.h>

#define MEGABIT_TO_MEGABYTE 0.125

int main(void)
{
    float download_speed, file_size;
    printf("Enter internet speed(mb/s) and file size(Mb) use space: ");
    scanf("%f%f", &download_speed, &file_size);
    float time = (float)(file_size / (download_speed * MEGABIT_TO_MEGABYTE));

    printf("При скорости загрузки %.2f мегабит в секунду "
           "файл размером %.2f мегабайт загружается за %.2f секунд(ы)", download_speed, file_size, time);

    return 0;
}