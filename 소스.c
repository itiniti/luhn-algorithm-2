#include <stdio.h>

void main()
{
    printf("카드번호를 입력해 주세요 : ");
    char input[16];

    scanf("%s",&input);
    
    int sum = 0;
    int alternate = 0;
    for (int i = 16; i >= 0; i--)
    {
        int n = (int)(input[i] - '0');
        if (alternate)
        {
            n *= 2;

            if (n > 9)
            {
                n = (n % 10) + 1;
            }
            alternate = 0;
        }else{
            alternate = 1;
        }
        sum += n;
    }
    if (sum % 10 == 0)
        printf("사용가능한 카드번호입니다.");
    else
        printf("사용 불가능한 카드 번호 입니다.");
}