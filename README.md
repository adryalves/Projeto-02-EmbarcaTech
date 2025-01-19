# Projeto 02: **Controle de Pinos GPIO com Teclado Matricial**
**EMBARCATECH - UNIDADE 04**
---

---

## Créditos
**Desenvolvido pelo SubGrupo 9 - Grupo 4**
- **Adryellen Alves de Souza**  
- **Carlos Henrique Silva Lopes**
- **Graziele Coelho de Alencar**  
- **Nivaldo Rodrigues da Silva Júnior**  
- **Uriel Hapuque Barboza Santos**

---

## **Descrição do Projeto**
Este projeto implementa o controle de pinos GPIO de um **Raspberry Pi Pico W** utilizando um teclado matricial 4x4. O objetivo é controlar LEDs RGB e um buzzer com base nas teclas pressionadas, simulando o funcionamento no ambiente de desenvolvimento **Wokwi**.

## **Funcionalidades**

1. **Controle Individual de LEDs**:
   - Tecla **A**: Liga o LED verde.
   - Tecla **B**: Liga o LED azul.
   - Tecla **C**: Liga o LED vermelho.
   - Tecla **D**: Liga todos os LEDs simultaneamente.

   2. **Teclado Matricial**:
   - Leitura do teclado 4x4 para capturar as teclas pressionadas.


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

---

## Configuração do Projeto

1. Clone este repositório para sua máquina:

   ```bash
   git clone https://github.com/adryalves/Projeto-02-EmbarcaTech.git
   cd Projeto-02-EmbarcaTech
   ```

2. Certifique-se de que o **Pico SDK** está configurado no VS Code.

3. Abra o projeto no **VS Code** e configure os arquivos `CMakeLists.txt` adequados para compilar o código.

4. Execute o projeto no simulador **Wokwi** ou faça o upload para o hardware físico do Raspberry Pi Pico W.

---

## Estrutura do Código

### Principais Arquivos
- **`main.c`**: Contém a lógica principal para leitura do teclado e controle dos LEDs.
- **`diagram.json`**: Configuração física do projeto no simulador Wokwi.
- **`README.md`**: Documentação detalhada do projeto.

### Funções Principais

---

## Simulação no Wokwi

1. Acesse o simulador **Wokwi** no navegador.
2. Importe o arquivo `diagram.json` para visualizar a configuração física.
3. Execute o código no simulador para verificar o funcionamento dos LEDs e do teclado matricial.

---

## Testes e Validação
