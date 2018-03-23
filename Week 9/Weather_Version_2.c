#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather wt_param[], int n);

int main(void) {

    struct Weather w[5];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s %d %d %c", w[i].outlook, &w[i].temperature, &w[i].humidity, &w[i].wind);
    }

    playing_decision(w, n);

    return 0;
}

void playing_decision(struct Weather wt_param[], int n) {
    for(int i = 0; i < n; i++) {
        if (!strcmp(wt_param[i].outlook, "overcast")) printf("yes\n");
        else if (!strcmp(wt_param[i].outlook, "rain")) {
            if (wt_param[i].wind == 'F') printf("yes\n");
            else printf("no\n");
        }
        else {
            if (wt_param[i].humidity > 77) printf("no\n");
            else printf("yes\n");
        }
    }    
}