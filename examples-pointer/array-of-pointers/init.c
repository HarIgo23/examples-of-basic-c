int main(void)
{
    int a[] = {1, 2, 3, 4};

    int *p1[3];
    int *p2[] = {&a[1], &a[2], &a[3]};
    int *p3[3] = {&a[3], &a[1], &a[2]};

    return 0;
}
