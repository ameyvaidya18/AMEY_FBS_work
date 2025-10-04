#include <stdio.h>

int main() {
    int choice=3, num=456, temp, rev, rem, sum, i, count;

    

    switch(choice) {
        case 1: 
            if(num % 2 == 0)
                printf("%d is Even\n", num);
            else
                printf("%d is Odd\n", num);
            break;

        case 2: 
            count = 0;
            if(num <= 1) {
                printf("%d is not Prime\n", num);
            } else {
                for(i = 2; i <= num/2; i++) {
                    if(num % i == 0) {
                        count = 1;
                        break;
                    }
                }
                if(count == 0)
                    printf("%d is Prime\n", num);
                else
                    printf("%d is Not Prime\n", num);
            }
            break;

        case 3: 
            temp = num;
            rev = 0;
            while(temp > 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }
            if(rev == num)
                printf("%d is Palindrome\n", num);
            else
                printf("%d is Not Palindrome\n", num);
            break;

        case 4: 
            if(num > 0)
                printf("%d is Positive\n", num);
            else if(num < 0)
                printf("%d is Negative\n", num);
            else
                printf("Number is Zero\n");
            break;

        case 5: 
            temp = num;
            rev = 0;
            while(temp > 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }
            printf("Reversed Number = %d\n", rev);
            break;

        case 6: 
            temp = num;
            sum = 0;
            while(temp > 0) {
                rem = temp % 10;
                sum += rem;
                temp /= 10;
            }
            printf("Sum of Digits = %d\n", sum);
            break;
    }

    return 0;
}

