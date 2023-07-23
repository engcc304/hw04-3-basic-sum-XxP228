
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>
int main() {
    float a = 0 ;
    float b = 0 ;
    float c = 0 ;

    printf("Enter num1 : ");
    scanf("%f", &a);
    printf("Enter num2 : ");
    scanf("%f", &b);
    printf("Enter num3 : ");
    scanf("%f", &c);

    printf("Answer = %f", a + b + c);
    return 0 ;
}