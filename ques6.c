#include <stdio.h>

// Constants
const int NUM_CITIES = 3;
const int DAYS_IN_WEEK = 7;

// Function to calculate average temperature of each city
void calculateAverageTemperature(int temperatures[][DAYS_IN_WEEK], float averages[]) {
    for (int i = 0; i < NUM_CITIES; i++) {
        float sum = 0.0;
        for (int j = 0; j < DAYS_IN_WEEK; j++) {
            sum += temperatures[i][j];
        }
        averages[i] = sum / DAYS_IN_WEEK;
    }
}

int main() {
    int temperatures[NUM_CITIES][DAYS_IN_WEEK];
    float averages[NUM_CITIES];

    // Input temperatures for each city for each day of the week
    printf("Enter the temperature of cities for a week:\n");
    for (int i = 0; i < NUM_CITIES; i++) {
        printf("City %d:\n", i + 1);
        for (int j = 0; j < DAYS_IN_WEEK; j++) {
            printf("Temperature for Day %d: ", j + 1);
            scanf("%d", &temperatures[i][j]);
        }
    }

    // Calculate average temperature for each city
    calculateAverageTemperature(temperatures, averages);

    // Print city wise average temperatures
    printf("\nAverage temperatures for each city:\n");
    for (int i = 0; i < NUM_CITIES; i++) {
        printf("City %d: %.2f\n", i + 1, averages[i]);
    }

    return 0;
}
