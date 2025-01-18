#include <stdio.h>
#include "pico/stdlib.h"

#define ROWS 4
#define COLS 4

const uint8_t row_pins[ROWS] = {9, 8, 7, 6};
const uint8_t col_pins[COLS] = {5, 4, 3, 2};

#define LED_GREEN 10
#define LED_BLUE 11
#define LED_RED 12
#define BUZZER_PIN 21

const char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}};

void iniciar_teclado() {
    for (int i = 0; i < ROWS; i++) {
        gpio_init(row_pins[i]);
        gpio_set_dir(row_pins[i], GPIO_OUT);
        gpio_put(row_pins[i], 1);
    }
    for (int j = 0; j < COLS; j++) {
        gpio_init(col_pins[j]);
        gpio_set_dir(col_pins[j], GPIO_IN);
        gpio_pull_up(col_pins[j]);
    }
}

char get_tecla() {
    for (int i = 0; i < ROWS; i++) {
        gpio_put(row_pins[i], 0);
        for (int j = 0; j < COLS; j++) {
            if (gpio_get(col_pins[j]) == 0) {
                while (gpio_get(col_pins[j]) == 0); // Aguarda a tecla ser solta
                gpio_put(row_pins[i], 1);
                return keys[i][j];
            }
        }
        gpio_put(row_pins[i], 1);
    }
    return '\0'; // Nenhuma tecla pressionada
}

void tocar_buzzer(int frequencia, int duracao) {
    for (int i = 0; i < duracao * 1000; i += (1000000 / frequencia) / 2) {
        gpio_put(BUZZER_PIN, 1);
        sleep_us((1000000 / frequencia) / 2);
        gpio_put(BUZZER_PIN, 0);
        sleep_us((1000000 / frequencia) / 2);
    }
}

int main() {
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_put(LED_GREEN, 0);

    gpio_init(LED_BLUE);
    gpio_set_dir(LED_BLUE, GPIO_OUT);
    gpio_put(LED_BLUE, 0);

    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_put(LED_RED, 0);

    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);
    gpio_put(BUZZER_PIN, 0); 

    iniciar_teclado();

    while (1) {
        char key = get_tecla();
        if (key != '\0') {
            printf("Tecla pressionada: %c\n", key);

            if (key == 'D') {
                gpio_put(LED_GREEN, 1);
                gpio_put(LED_BLUE, 1);
                gpio_put(LED_RED, 1);
                tocar_buzzer(1000, 1); 
            } else {
                gpio_put(LED_GREEN, 0);
                gpio_put(LED_BLUE, 0);
                gpio_put(LED_RED, 0);
            }
        }
        sleep_ms(100);
    }

    return 0;
}
