#include "../c2html.h"
#include <stdbool.h>

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = NULL;

    C2HTML_OBJ(index, css_file, js_file);

    setup_file(&index, "Primeiro Programa em C");

    custom_tag("center");
    custom_tag("h1");
    add_text("Seu primeiro programa em C");
    custom_tag("h1", .close = true);
    custom_tag("center", .close = true);
    custom_tag("hr");

    custom_tag("div", .css_class = "centered");
    custom_tag("div", .css_class = "justified");

    custom_tag("table", .css_class = "center");
    custom_tag("tr align");
    {
        custom_tag("td");

        span("Olá, mundo!", .css_class = "big");
        br();
        br();

        add_text("Objetivo", .strong = true);
        add_text("Criar um programa que escreva \"Olá, mundo!\" na tela.");
        br();

        add_text("O famoso programa de computador \"Olá, mundo!\", ou mais comumente \"Hello, World!\"", .no_br = true);
        add_text(" é um programa comumente usado para exempos e testes simples.", .strong = true);
        br();

        add_text("Por onde começar?", .strong = true);
        add_text("Começa-se criando um arquivo de texto com a extenção ", .no_br = true);
        add_text(".c", .strong = true);
        br();

        add_text("Como é um programa de Olá mundo?", .strong = true);
        add_text("Um programa de olá mundo moderno em C se parece com isso:");
        br();

        custom_tag("div", .css_class = "rounded-box");
        {
            span("#include ", .css_class = "StorageClass");
            span("&ltstdio.h&gt", .css_class = "String");
            br();
            br();

            span("int ", .css_class = "Type");
            span("main(");
            span("void", .css_class = "Type");
            span(") {");
            br();
            br();
            span("&nbsp;    printf(");
            span("\"Hello, World!", .css_class = "String");
            span("\\n", .css_class = "StorageClass");
            span("\"", .css_class = "String");
            span(");");
            br();
            br();
            span("&nbsp;    return ", .css_class = "StorageClass");
            span("0", .css_class = "Number");
            span(";");
            br();
            span("}");
        }
        custom_tag("div", .close = true);
        br();

        add_text("Explicação:", .strong = true);
        br();

        span("#include ", .css_class = "StorageClass");
        span("&ltstdio.h&gt", .css_class = "String");
        br();
        br();

        add_text("Essa linha de código é responsavel por incluir a ", .no_br = true);
        add_text("biblioteca padrão de entrada e saída, ", .strong = true);
        /* STanDart Input and Output library*/
        add_text("(", .no_br = true);
        add_text("ST", .strong = true, .no_br = true);
        add_text("an", .no_br = true);
        add_text("D", .strong = true, .no_br = true);
        add_text("art ", .no_br = true);
        add_text("I", .strong = true, .no_br = true);
        add_text("nput and ", .no_br = true);
        add_text("O", .strong = true, .no_br = true);
        add_text("utput library)");

        add_text("Que é uma das bibliotecas padrão que servem para controlar a ", .no_br = true);
        add_text("Entrada (input), e saída (output) de informações do nosso programa via terminal;");
        add_text("Nesse exemplo, usamos somente a saída, escrevendo para a tela.");
        br();
        br();

        span("int ", .css_class = "Type");
        span("main(");
        span("void", .css_class = "Type");
        span(") {");
        br();
        br();

        add_text("Essa linha, define a função ", .no_br = true);
        add_text("main ", .strong = true, .no_br = true);
        add_text("(principal), do nosso programa.");
        add_text("É por ela onde o computador começa a executar o nosso programa.");
        add_text("Definimos tambem que a função principal retorna um numero inteiro, e não aceita argumentos.");
        br();
        br();

        add_text("{", .strong = true, .no_br = true);
        add_text(" e ", .no_br = true);
        add_text("}", .strong = true);
        add_text("Server para delimitar um \"escopo\", nesse caso, são usadas para delimitar a função principal");
        br();
        br();

        span("printf(");
        span("\"Hello, World!", .css_class = "String");
        span("\\n", .css_class = "StorageClass");
        span("\"", .css_class = "String");
        span(");");
        br();
        br();

        add_text("Nessa linha, estamos chamando a função ", .no_br = true);
        add_text("printf", .strong = true, .no_br = true);
        add_text(", que escreve textos formatados para o terminal ou linha de comando");
        add_text("Aqui, passamos \"Hello, World!\\n\" como argumento para a função.");
        add_text("o diretivo ", .no_br = true);
        add_text("\\n", .strong = true, .no_br = true);
        add_text(" indica, que, ao escrever a mensagem na tela, a proxima mensagem deve ser escrita em uma linha nova.");
        br();
        br();

        span("return ", .css_class = "StorageClass");
        span("0", .css_class = "Number");
        span(";");
        br();
        br();

        add_text("Essa linha indica ao programa que a função principal deve retornar 0");
        add_text("A função principal tem uma caracteristica especial, que, ao retornar, o programa termina sua execução");
        add_text("O valor 0, tem significado especial, nesse caso, ele indica que ");
        add_text("não houve erro algum durante a execução, e tudo ocorreu corretamente", .strong = true);
        br();
        br();

        custom_tag("td", .close = true);

        /*--------------------*/
        custom_tag("td width=50px", .in_line = true);
        /*--------------------*/
        custom_tag("td");
        add_img("../../images/hello_world.png", .width = 200);
        custom_tag("td", .close = true);
    }
    custom_tag("tr", .close = true);
    custom_tag("table", .close = true); /* center table */

    span("O primeiro Hello, World! em C", .css_class = "big");
    br();
    add_text("Aqui temos o primeiro programa de Hello, World! escrito em C, em um papel, e assinado por um de seus criadores");
    custom_tag("center");
    add_img("../../images/hello_world_papel.png", .width = 500);
    custom_tag("center", .close = true);

    add_text("Algumas diferenças notáveis", .strong = true);
    add_text("Nas primeiras verções do C, toda variavel que não tinha um tipo especificado, automaticamente emplicava ", .no_br = true);
    add_text("int", .strong = true);
    add_text("Não era nessesario afirmar que a função principal não aceita argumentos, isso viria a causar problemas futuramente.");
    add_text("Não era necessario incluir a biblioteca stdio.h, porque todo seu conteudo era embutido em todo programa, ", .no_br = true);
    add_text("que futuramente viria causar problemas para plataformas com menor suporte a biblioteca padrão.");
    add_text("Não era necessario retornar 0 explicitamente, o que pode causar erros de direcionalidade atualmente.");
    add_text("Hoje em dia, é preferivel que se diga explicitamente o que você quer ou não incluso no seu programa.");

    br();
    custom_tag("hr");
    br();

    custom_tag("table", .css_class = "center");
    custom_tag("tr align");
    {
        add_text("Programas em C não são sómente para escrever texto e fazer caulculos simples", .strong = true);
        br();

        add_text("Por exemplo, Essa página, qual você esta lendo nesse momento, apesar de atualmente ser feita em ", .no_br = true);
        add_text("html ", .strong = true, .no_br = true);
        add_text("e ", .no_br = true);
        add_text("css", .strong = true, .no_br = true);
        add_text(", as linguagens de páginas da web, esse website foi ", .no_br = true);
        add_text("gerado em C usando uma biblioteca desenvolvida especialmente para esse projeto.");

        add_text("Você pode conferir o código usado para gerar essa pagina ", .no_br = true);
        custom_tag("a target=\"_blank\" href=\"codigo_pagina.html\"", .in_line_text = "aqui");
        add_text(".");
    }
    custom_tag("tr", .close = true);
    custom_tag("table", .close = true); /* center table */

    custom_tag("div", .close = true);
    custom_tag("div", .close = true);

    end_file(&index);
    return 0;
}
