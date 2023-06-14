#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("This is a quadratic equation calculator\n");
    float a = get_float("Enter the a-value: ");
    float b = get_float("Enter the b-value: ");
    float c = get_float("Enter the c-value: ");
    float d = pow(b, 2) - 4*a*c;
    printf("The determinant is %.3f\n", d);
    int one_ans = -b / 2*a;
    float ans1 = (-b + sqrt(d)) / (2*a);
    float ans2 = (-b - sqrt(d)) / (2*a);
    float left_ans = -b / (2*a);
    float right_ans = sqrt(-d) / (2*a);
    if (d == 0)
    {
        printf("The answer is %i", one_ans);
    }
    else if (d > 0)
    {
        printf("The answers are: %.3f and %.3f\n", ans1, ans2);
    }
    else
    {
        printf("The answers are: %.3f + %.3fi and %.3f - %.3fi", left_ans, right_ans, left_ans, right_ans);
    }
}