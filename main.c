#include <stdio.h>
#include <stdlib.h>
                                               /*une anne bisextile est une anne qui est devisable par 400 */
int main()
{
    int a;
    printf("veillez entrer lanne");
    scanf("%d",&a);
    if(a % 400 == 0){
            printf("%d est une anne bisextile");
    }
    else{
            printf("%d nest pas une anne bisextile");
    }
    return 0;
}
