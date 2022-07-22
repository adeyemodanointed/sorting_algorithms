#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {6220, 8246, 9776, 12768, 13635, 15081, 15486, 15544, 16363, 17969, 18172, 26005, 30176, 37982, 45080, 50822, 53364, 63583, 64593, 70629, 74947, 76073, 79298, 80696, 98337, 105264, 105286, 111285, 121940, 132812, 133719, 135006, 137752, 138154, 139067, 143132, 144260, 150960, 155079, 155232, 156836, 157846, 159684, 165331, 169891, 170955, 174254, 179502, 184589, 188981};    

    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
