#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather w);

int main(void) {

    struct Weather w;
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s %d %d %c", w.outlook, &w.temperature, &w.humidity, &w.wind);
        playing_decision(w);
        
    }
    return 0;
}

void playing_decision(struct Weather w) {
    if (!strcmp(w.outlook, "overcast")) printf("yes\n");
    else if (!strcmp(w.outlook, "rain")) {
        if (w.wind == 'F') printf("yes\n");
        else printf("no\n");
    }
    else {
        if (w.humidity > 77) printf("no\n");
        else printf("yes\n");
    }
}