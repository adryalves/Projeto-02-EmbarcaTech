#include <stdio.h>
#include "pico/stdlib.h"

#define ROWS 4
#define COLS 4

const uint8_t row_pins[ROWS] = {9, 8, 7, 6};
const uint8_t col_pins[COLS] = {5, 4, 3, 2};

#define LED_GREEN 10
#define LED_BLUE 11
#define LED_RED 12

const char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}};

<<<<<<< HEAD
void iniciar_teclado() {
    for (int i = 0; i < ROWS; i++) {
=======
void iniciar_teclado()
{
    for (int i = 0; i < ROWS; i++)
    {
>>>>>>> 299ada4a4baf8aa4abec5534ef3745534841a1ed
        gpio_init(row_pins[i]);
        gpio_set_dir(row_pins[i], GPIO_OUT);
        gpio_put(row_pins[i], 1);
    }
<<<<<<< HEAD
    for (int j = 0; j < COLS; j++) {
=======
    for (int j = 0; j < COLS; j++)
    {
>>>>>>> 299ada4a4baf8aa4abec5534ef3745534841a1ed
        gpio_init(col_pins[j]);
        gpio_set_dir(col_pins[j], GPIO_IN);
        gpio_pull_up(col_pins[j]);
    }
}

<<<<<<< HEAD
char get_tecla() {
    for (int i = 0; i < ROWS; i++) {
        gpio_put(row_pins[i], 0);
        for (int j = 0; j < COLS; j++) {
            if (gpio_get(col_pins[j]) == 0) {
=======
char get_tecla()
{
    for (int i = 0; i < ROWS; i++)
    {
        gpio_put(row_pins[i], 0);
        for (int j = 0; j < COLS; j++)
        {
            if (gpio_get(col_pins[j]) == 0)
            {
>>>>>>> 299ada4a4baf8aa4abec5534ef3745534841a1ed
                while (gpio_get(col_pins[j]) == 0)
                    ; // Aguarda a tecla ser solta
                gpio_put(row_pins[i], 1);
                return keys[i][j];
            }
        }
        gpio_put(row_pins[i], 1);
    }
    return '\0'; // Nenhuma tecla pressionada
}

<<<<<<< HEAD
int main() {
=======
int main()
{

>>>>>>> 299ada4a4baf8aa4abec5534ef3745534841a1ed
    // Inicializa os LEDs
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_put(LED_GREEN, 0);

    gpio_init(LED_BLUE);
    gpio_set_dir(LED_BLUE, GPIO_OUT);
    gpio_put(LED_BLUE, 0);

    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_put(LED_RED, 0);

    // Inicializa o teclado
    iniciar_teclado();

<<<<<<< HEAD
    while (1) {
        char key = get_tecla();
        if (key != '\0') {
            printf("Tecla pressionada: %c\n", key);

            if (key == 'A') {
                gpio_put(LED_GREEN, 1);  // Liga LED Verde
                gpio_put(LED_BLUE, 0);   // Apaga os outros LEDs
                gpio_put(LED_RED, 0);
            } else if (key == 'B') {
                gpio_put(LED_BLUE, 1);   // Liga LED Azul
                gpio_put(LED_GREEN, 0);
                gpio_put(LED_RED, 0);
            } else if (key == 'C') {
                gpio_put(LED_RED, 1);    // Liga LED Vermelho
                gpio_put(LED_GREEN, 0);
                gpio_put(LED_BLUE, 0);
            } else if (key == 'D') {
                gpio_put(LED_GREEN, 1);  // Liga todos os LEDs
                gpio_put(LED_BLUE, 1);
                gpio_put(LED_RED, 1);
            } else {
                gpio_put(LED_GREEN, 0);  // Apaga todos os LEDs
=======
    while (1)
    {
        char key = get_tecla();
        if (key != '\0')
        {
            printf("Tecla pressionada: %c\n", key);

            if (key == 'D')
            {
                // Liga os LEDs
                gpio_put(LED_GREEN, 1);
                gpio_put(LED_BLUE, 1);
                gpio_put(LED_RED, 1);
            }
            else
            {
                // Desliga os LEDs
                gpio_put(LED_GREEN, 0);
>>>>>>> 299ada4a4baf8aa4abec5534ef3745534841a1ed
                gpio_put(LED_BLUE, 0);
                gpio_put(LED_RED, 0);
            }
        }
<<<<<<< HEAD
        sleep_ms(100); // Pequeno delay para evitar leitura repetida
=======
        sleep_ms(100);
>>>>>>> 299ada4a4baf8aa4abec5534ef3745534841a1ed
    }

    return 0;
}
