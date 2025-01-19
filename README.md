# Projeto 02: **Controle de Pinos GPIO com Teclado Matricial**
**EMBARCATECH - UNIDADE 04**


## Créditos
**Desenvolvido pelo SubGrupo 9 - Grupo 4**
- **Adryellen Alves de Souza**  
- **Carlos Henrique Silva Lopes**
- **Graziele Coelho de Alencar**  
- **Nivaldo Rodrigues da Silva Júnior**  
- **Uriel Hapuque Barboza Santos**


## **Link do vídeo de Ensaio**
https://drive.google.com/file/d/1kH6LtFmuF-1HuEnGSQzd5xKeoVmxzLYN/view?usp=sharing 


## **Descrição do Projeto**
Este projeto implementa o controle de pinos GPIO de um **Raspberry Pi Pico W** utilizando um teclado matricial 4x4. O objetivo é controlar LEDs RGB e um buzzer com base nas teclas pressionadas, simulando o funcionamento no ambiente de desenvolvimento **Wokwi**.

## **Funcionalidades**

1. **Controle Individual de LEDs**:
   - Tecla **A**: Liga o LED verde.
   - Tecla **B**: Liga o LED azul.
   - Tecla **C**: Liga o LED vermelho.
   - Tecla **D**: Liga todos os LEDs simultaneamente e aciona o buzzer por 1 segundo.
   - Tecla **#**: Aciona o buzzer por 1 segundo.
   - Qualquer outra tecla: Apaga todos os LEDs.

2. **Teclado Matricial**:
   - Leitura do teclado 4x4 para capturar as teclas pressionadas.

3. **Controle do Buzzer**:
  - O buzzer é acionado pela tecla **D** e emite um som com frequência de 1000 Hz por 1 segundo.

4. **Extensibilidade**:
   - Código modular, com funções dedicadas para ligar/desligar LEDs, capturar teclas e controlar o buzzer.


## Requisitos

### Hardware
- **Raspberry Pi Pico W**
- Teclado matricial 4x4
- LEDs RGB
- Resistores de 1kΩ (para os LEDs)
- Buzzer

### Software
- **VS Code** (Visual Studio Code)
- **Pico SDK** configurado no ambiente de desenvolvimento
- Simulador **Wokwi**


## Configuração do Projeto

1. Clone este repositório para sua máquina:

   ```
   git clone https://github.com/adryalves/Projeto-02-EmbarcaTech.git
   cd Projeto-02-EmbarcaTech
   ```

2. Certifique-se de que o **Pico SDK** está configurado no VS Code.

3. Abra o projeto no **VS Code** e configure os arquivos `CMakeLists.txt` adequados para compilar o código.

4. Execute o projeto no simulador **Wokwi** ou faça o upload para o hardware físico do Raspberry Pi Pico W.


## Estrutura do Código

### Principais Arquivos
- **`main.c`**: Contém a lógica principal para leitura do teclado, controle dos LEDs e do buzzer.
- **`diagram.json`**: Configuração física do projeto no simulador Wokwi.
- **`README.md`**: Documentação detalhada do projeto.

### Funções Principais

#### `void iniciar_teclado()`
- Configura os pinos GPIO associados às linhas e colunas do teclado matricial.

#### `char get_tecla()`
- Lê a tecla pressionada no teclado matricial e retorna o caractere correspondente.

#### `void ligar_todos_leds()`
- Liga todos os LEDs RGB simultaneamente.

#### `void desligar_todos_leds()`
- Desliga todos os LEDs RGB.

#### `void tocar_buzzer(int frequencia, int duracao)`
- Aciona o buzzer com a frequência e duração especificadas.


## Simulação no Wokwi

1. Acesse o simulador **Wokwi** no navegador.
2. Importe o arquivo `diagram.json` para visualizar a configuração física.
3. Execute o código no simulador para verificar o funcionamento dos LEDs, do teclado matricial e do buzzer.


## Testes e Validação

1. Pressione as teclas no teclado matricial e observe as ações:
   - **A**: Apenas o LED verde deve acender.
   - **B**: Apenas o LED azul deve acender.
   - **C**: Apenas o LED vermelho deve acender.
   - **D**: Todos os LEDs devem acender, e o buzzer deve emitir um som de 1000 Hz por 1 segundo.
   - **#**: O buzzer deve emitir um som de 1000 Hz por 1 segundo.
   - Outras teclas: Todos os LEDs devem apagar.

3. Certifique-se de que o comportamento está de acordo com o esperado tanto no simulador quanto no hardware real.

