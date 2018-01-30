#include <stdio.h>

int main(void) {

    long long seconds, minutes, hours, days, raw;

    scanf("%lld", &raw);

    seconds = raw;

    days = seconds / 86400;

    seconds %= 86400;

    hours  = seconds / 3600;

    seconds %= 3600;

    minutes = seconds / 60;

    seconds %= 60;

    printf("%lld s = %lld d %lld h %lld m %lld s", raw, days, hours, minutes, seconds);

    return 0;
}