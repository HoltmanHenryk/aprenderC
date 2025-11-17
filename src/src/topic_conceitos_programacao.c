#include "../c2html.h"
#include <stdbool.h>

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = NULL;

    C2HTML_OBJ(index, css_file, js_file);

    setup_file(&index, "Conceitos basicos de programação");

    custom_tag("center");
    {
        custom_tag("h1", .in_line = true, .in_line_text = "O que é programação?");
    }
    custom_tag("center", .close = true);
    custom_tag("hr");

    custom_tag("div", .css_class = "centered");
    custom_tag("div", .css_class = "justified");
    {
        add_text("Definição", .strong = true, .no_br = true);
        add_text(": Programação é o processo de escrever instruções para o computador seguir, permitindo que ele cumpra tarefas");
        br();

        add_text("Analogia", .strong = true, .no_br = true);
        add_text(": Funciona como uma receita. Da mesma forma que uma receita provem instruções"
                 " passo-a-passo para preparar um prato,",
                 .no_br = true);
        add_text(" a programação é dar uma sequencia de comandos para o computador, na ordem correta, para chegar o resultado esperado");
        br();

        add_text("Importancia", .strong = true, .no_br = true);
        add_text(": Entender programação permite que você use o computador mais eficientemente, automatize suas tarefas", .no_br = true);
        add_text(" e resolva problemas do dia-a-dia com uso da tecnologia");
        br();

        custom_tag("hr");

        custom_tag("h2", .in_line = true, .in_line_text = "Conceitos chave de programação:");
        br();

        /*----------------------*/
        custom_tag("table", .css_class = "center");
        custom_tag("tr align");
        custom_tag("td");

        custom_tag("div", .css_class = "big", .in_line = true, .in_line_text = "1. Variáveis");
        br();

        add_text("O que são variáveis?", .strong = true);
        add_text("Variáveis são lugares na memoria do computador que guardam valores."
                 " Pense nelas como caixinhas que guardam tipos de coisas diferentes.");

        br();

        add_text("Proposito das variáveis?", .strong = true);
        add_text("Guardar informações: permitem que você salve informações e as use futuramente no seu programa.");
        add_text("Mudaveis (ou não): O valor delas podem ou não mudar, depende do seu programa.");

        br();

        add_text("Exemplo em C:", .strong = true);
        br();
        custom_tag("div", .css_class = "rounded-box");
        {
            custom_tag("span", .css_class = "Type", .in_line = true, .in_line_text = "int ");
            add_text("idade = ", .no_br = true);
            custom_tag("span", .css_class = "Number", .in_line = true, .in_line_text = "9");
            add_text(";");
            br();
            custom_tag("span", .css_class = "StorageClass", .in_line = true, .in_line_text = "const ");
            custom_tag("span", .css_class = "Type", .in_line = true, .in_line_text = "int ");
            add_text("outra_idade = ", .no_br = true);
            custom_tag("span", .css_class = "Number", .in_line = true, .in_line_text = "10");
            add_text(";");
        }
        custom_tag("div", .close = true); /* rounded box */
        br();

        add_text("Explicação do exemplo:", .strong = true);
        add_text("Na primeira linha, define-se uma variável chamada 'idade', qual guarda um valor inteiro (int)");
        br();
        add_text("E no segundo exemplo, cria se uma 'variável constante', chamada outra_idade, que tambem guada um valor inteiro");
        br();

        add_text("Diferenças: ", .strong = true);
        add_text("O valor de 'idade', pode mudar durante a execução do programa");
        add_text("A constante 'outra_idade' serve para dar um nome ao valor, para saber o que ele representa");

        custom_tag("td", .close = true);
        /*----------------------*/
        custom_tag("td width=50px", .in_line = true);
        /*----------------------*/
        custom_tag("td");
        add_img("../../images/variaveis.png", .width = 200);
        custom_tag("td", .close = true);
        /*----------------------*/
        custom_tag("tr", .close = true);
        custom_tag("table", .close = true); /* center */

        br();
        custom_tag("hr");

        /*----------------------*/
        custom_tag("table", .css_class = "center");
        custom_tag("tr align");
        custom_tag("td");

        custom_tag("div", .css_class = "big", .in_line = true, .in_line_text = "2. Tipos de dados");
        br();

        add_text("O que são tipos de dados?", .strong = true);
        add_text("Tipos de dados controlam e que tipo de informações são armazenadas em uma variavel, seu tamanho"
                 " e quais operações podem ser realizadas sobre ela.");

        br();

        add_text("Tipos de dados comuns do C", .strong = true);
        br();

        custom_tag("table", .css_class = "custom-table");
        {
            custom_tag("thead");
            {
                custom_tag("tr");
                {
                    custom_tag("th", .in_line = true, .in_line_text = "TIPO");
                    custom_tag("th", .in_line = true, .in_line_text = "DESCRIÇÃO");
                    custom_tag("th", .in_line = true, .in_line_text = "EXEMPLO");
                }
                custom_tag("tr", .close = true);
            }
            custom_tag("thead", .close = true);

            custom_tag("tbody");
            {
                custom_tag("tr");
                {
                    custom_tag("td", .in_line = true, .in_line_text = "int");
                    custom_tag("td", .in_line = true, .in_line_text = "Numeros inteiros");
                    custom_tag("td", .in_line = true, .in_line_text = "int idade = 10;");
                }
                custom_tag("tr", .close = true);

                custom_tag("tr");
                {
                    custom_tag("td", .in_line = true, .in_line_text = "float");
                    custom_tag("td", .in_line = true, .in_line_text = "Numeros decimais");
                    custom_tag("td", .in_line = true, .in_line_text = "float segundos = 1.50f;");
                }
                custom_tag("tr", .close = true);

                custom_tag("tr");
                {
                    custom_tag("td", .in_line = true, .in_line_text = "char");
                    custom_tag("td", .in_line = true, .in_line_text = "Caracteres");
                    custom_tag("td", .in_line = true, .in_line_text = "char nota = 'A';");
                }
                custom_tag("tr", .close = true);

                custom_tag("tr");
                {
                    custom_tag("td", .in_line = true, .in_line_text = "double");
                    custom_tag("td", .in_line = true, .in_line_text = "Numeros decimais de alta precisão");
                    custom_tag("td", .in_line = true, .in_line_text = "double PI = 3.141592653;");
                }
                custom_tag("tr", .close = true);
            }
            custom_tag("tbody", .close = true);
        }
        custom_tag("table", .close = true);

        br();

        custom_tag("td", .close = true);
        /*----------------------*/
        custom_tag("td width=50px", .in_line = true);
        /*----------------------*/
        custom_tag("td");
        add_img("../../images/data_types.png", .width = 200);
        custom_tag("td", .close = true);
        /*----------------------*/
        custom_tag("tr", .close = true);
        custom_tag("table", .close = true); /* center */

        custom_tag("hr");

        custom_tag("table", .css_class = "center");
        custom_tag("tr align");
        custom_tag("td");

        custom_tag("div", .css_class = "big", .in_line = true, .in_line_text = "3. Operadores");
        br();

        add_text("Operadores são simbolos que fazem o computador executar uma", .no_br = true);
        add_text(" operação.", .strong = true);
        br();

        add_text("Eles podem ser divididos em 3 categorias:");

        add_text("Matemáticos");
        custom_tag("ul");
        {
            custom_tag("li", .in_line = true, .in_line_text = "+ (Adição)");
            custom_tag("li", .in_line = true, .in_line_text = "- (Subtração)");
            custom_tag("li", .in_line = true, .in_line_text = "* (Multiplicação)");
            custom_tag("li", .in_line = true, .in_line_text = "/ (Divisão)");
            custom_tag("li", .in_line = true, .in_line_text = "% (Modulo / Resto)");
        }
        custom_tag("ul", .close = true);

        add_text("Relacionais");
        custom_tag("ul");
        {
            custom_tag("li", .in_line = true, .in_line_text = "== (Igual a)");
            custom_tag("li", .in_line = true, .in_line_text = "!= (Não Igual / Diferente)");
            custom_tag("li", .in_line = true, .in_line_text = ">  (Maior que)");
            custom_tag("li", .in_line = true, .in_line_text = "<  (Menor que)");
            custom_tag("li", .in_line = true, .in_line_text = ">= (Maior ou igual a)");
            custom_tag("li", .in_line = true, .in_line_text = "<= (Menor ou igual a)");
        }
        custom_tag("ul", .close = true);

        add_text("Lógicos");
        custom_tag("ul");
        {
            custom_tag("li", .in_line = true, .in_line_text = "&& (AND / e)");
            custom_tag("li", .in_line = true, .in_line_text = "|| (OR / ou)");
            custom_tag("li", .in_line = true, .in_line_text = "!  (NOT / não, ou negação)");
        }
        custom_tag("ul", .close = true);

        custom_tag("td", .close = true);
        /*----------------------*/
        custom_tag("td width=50px", .in_line = true);
        /*----------------------*/
        custom_tag("td");
        add_img("../../images/operadores.png", .width = 200);
        custom_tag("td", .close = true);
        /*----------------------*/
        custom_tag("tr", .close = true);
        custom_tag("table", .close = true); /* centered */

        custom_tag("tr", .close = true);
        custom_tag("table", .close = true); /* center */

        custom_tag("hr");

        custom_tag("table", .css_class = "center");
        custom_tag("tr align");
        custom_tag("td");

        custom_tag("div", .css_class = "big", .in_line = true, .in_line_text = "4. Estruturas de controle");
        br();

        add_text("Mudam a execução do programa dependendo das condições atuais");

        add_text("IF", .strong = true);
        add_text("O IF é a estrutura de controle mais comum, ela executa codigo somente se a condição utilizada for verdadeira");
        br();

        add_text("Exemplo estrutura de controle IF:", .strong = true);
        br();
        custom_tag("div", .css_class = "rounded-box");
        {
            custom_tag("span", .css_class = "Type", .in_line = true, .in_line_text = "bool ");
            add_text("verdadeiro =", .no_br = true);
            custom_tag("span", .css_class = "Number", .in_line = true, .in_line_text = " true");
            add_text(";");
            br();
            custom_tag("span", .css_class = "StorageClass", .in_line = true, .in_line_text = "if");
            add_text("(verdadeiro)", .no_br = true);
            add_text(" {");
            add_text("&nbsp;    printf(", .no_br = true);
            custom_tag("span", .css_class = "String", .in_line = true, .in_line_text = "\"VERDADEIRO!\"");
            add_text(");");
            add_text("}");
        }
        custom_tag("div", .close = true); /* rounded box */
        br();

        add_text("Explicação do exemplo:", .strong = true);
        add_text("A mensagem 'VERDADEIRO!' só vai aparecer na tela, caso 'verdadeiro' for verdade (true)");
        br();

        custom_tag("td", .close = true);
        /*----------------------*/
        custom_tag("td width=50px", .in_line = true);
        /*----------------------*/
        custom_tag("td");
        add_img("../../images/controlflow.png", .width = 200);
        custom_tag("td", .close = true);
        /*----------------------*/
        custom_tag("tr", .close = true);
        custom_tag("table", .close = true); /* centered */
    }
    custom_tag("div", .close = true); // centered
    custom_tag("div", .close = true); // justified

    end_file(&index);
    return 0;
}
