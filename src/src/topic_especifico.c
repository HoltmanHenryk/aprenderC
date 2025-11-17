#include "../c2html.h"
#include "stdbool.h"

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = NULL;

    C2HTML_OBJ(index, css_file, js_file);

    setup_file(&index, "Conceitos específicos de C");

    custom_tag("center");
    custom_tag("h1", .in_line_text = "Conceitos específicos de C");
    custom_tag("center", .close = true);
    custom_tag("hr");

    custom_tag("div", .css_class = "centered");
    custom_tag("div", .css_class = "justified");

    add_text("Aqui abordaremos alguns conceitos específicos sobre a linguagem ", .no_br = true);
    add_text("C", .strong = true, .no_br = true);
    add_text(", que nem sempre se aplicam a outras linguagens.");
    br();
    custom_tag("hr");
    br();

    custom_tag("h2", .in_line_text = "Conceitos importantes sobre a linguagem C:");
    br();

    custom_tag("table", .css_class = "center");
    custom_tag("tr align");
    {
        custom_tag("td");

        span("1. Compiladores", .css_class = "big");
        br();
        br();

        add_text("O que são compiladores?", .strong = true);
        add_text("Compiladores são uma ferramenta que 'traduz' o codigo que você escreve para uma linguagem que o computador consegue entender.");
        br();

        add_text("Por que precisamos de compiladores?", .strong = true);
        add_text("CPUs (o 'cérebro do computador'), não compreendem textos da mesma forma que pessoas, eles só compreendem ", .no_br = true);
        add_text("binário ", .strong = true, .no_br = true);
        add_text("ou tambem chamado de ", .no_br = true);
        add_text("linguagem de máquina", .strong = true, .no_br = true);
        add_text(".");
        br();

        add_text("Toda linguagem precisa de compiladores?", .strong = true);
        add_text("Não, nem toda linguagem é uma linguagem 'compilada', ", .no_br = true);
        add_text("porém, é importante lembrar que linguagem não compiladas tem várias desvantagens, ", .no_br = true);
        add_text("a principal sendo que ela se torna lenta em comparação a linguagens que não passam pro esse processo.");
        br();
        add_text("Exemplos de linguagens compiladas são:", .strong = true);
        add_text("C, C++, Go, Rust, Swift");
        add_text("Exemplos de linguagens NÃO compiladas (interpretadas ou scripts):", .strong = true);
        add_text("Python, JavaScript, Ruby, PHP, Bash");

        custom_tag("td", .close = true);

        /*--------------------*/
        custom_tag("td width=50px", .in_line = true);
        /*--------------------*/
        custom_tag("td");
        add_img("../../images/compiler.png", .width = 200);
        custom_tag("td", .close = true);
    }
    custom_tag("tr", .close = true);
    custom_tag("table", .close = true); /* center table */

    custom_tag("table", .css_class = "center");
    custom_tag("tr align");
    {
        custom_tag("td");

        span("1.1 Compiladores de C", .css_class = "big");
        br();
        br();

        add_text("Há mais de um compilador de C", .strong = true);
        add_text("Existem multiplos compiladores de C disponiveis para diversas ocasiões, e tem seus usos específicos");
        add_text("Aqui estão 3 \"Grandes\" compiladores de C");
        br();
        br();

        custom_tag("table", .css_class = "custom-table");
        {
            custom_tag("thead");
            {
                custom_tag("tr");
                custom_tag("th", .in_line_text = "Compilador");
                custom_tag("th", .in_line_text = "Descrição");
                custom_tag("th", .in_line_text = "Logo");
                custom_tag("tr", .close = true);
            }
            custom_tag("thead", .close = true);

            custom_tag("tbody");
            {
                custom_tag("tr");
                custom_tag("td", .in_line_text = "gcc");
                custom_tag("td", .in_line_text = "Compilador de codigo-aberto, que suporta multiplas linguagens"
                                                 " Criado pela GNU software foundation, para uso em seu sistema,"
                                                 " hoje há suporte para quase toda plataforma e"
                                                 " arquitetura.");
                custom_tag("td");
                {
                    add_img("../../images/gcc_logo.png", .width = 100);
                }
                custom_tag("td", .close = true);
                custom_tag("tr", .close = true);

                custom_tag("tr");
                custom_tag("td", .in_line_text = "clang");
                custom_tag("td", .in_line_text = "Conhecido tambem como LLVM-Clang, tem grande ênfase em modulariedade"
                                                 " e reportar erros de forma amigavel ao usuário."
                                                 " Suporta principalmente C++, porem, ainda é otimo para C.");
                custom_tag("td");
                {
                    add_img("../../images/clang_logo.png", .width = 100);
                }
                custom_tag("td", .close = true);
                custom_tag("tr", .close = true);

                custom_tag("tr");
                custom_tag("td", .in_line_text = "msvc");
                custom_tag("td", .in_line_text = "Microsoft Visual C++, ou cl.exe, é o compilador criado pela Microsoft de"
                                                 " uso mais comum no Windows."
                                                 " Suporta uma variante de C++ da Microsoft, porem, é compativel e utilizado para C.");
                custom_tag("td");
                {
                    add_img("../../images/msvc_logo.png", .width = 100);
                }
                custom_tag("td", .close = true);
                custom_tag("tr", .close = true);
            }
            custom_tag("tbody", .close = true);
        }
        custom_tag("table", .close = true);

        br();

        custom_tag("td", .close = true);

        custom_tag("hr");
    }
    custom_tag("tr", .close = true);
    custom_tag("table", .close = true); /* center table */

    custom_tag("hr");

    custom_tag("table", .css_class = "center");
    custom_tag("tr align");
    {
        custom_tag("td");

        span("2. C e C++", .css_class = "big");
        br();
        br();

        add_text("Qual a diferença?", .strong = true);
        add_text("C++ é uma linguagem 'inspirada' no C, ela vem a surgir em 1979, com o nome 'C with classes', (C com classes)");
        add_text("Veio a ganhar o nome C++ em 1985, públicada por seu criador ", .no_br = true);
        add_link("Bjarne Stroustrup", .href = "https://pt.wikipedia.org/wiki/Bjarne_Stroustrup");
        add_text(".");
        br();

        add_text("No começo ela era C com funcionalidades que facilitavam ", .no_br = true);
        add_text("programação orientada a objetos", .strong = true, .no_br = true);
        add_text(", porem, logo adotou novas funcionalidades e hoje em dia é bem diferente do C");
        br();

        add_text("Devido a seu antepassado em comum, muitas bibliotecas feitas para uma linguagem funcionam e inter-operam na outra.");
        add_text("Não são competidoras entre-si, porem trabaham juntas para produção de grandes quantidade de programas e software atualmente.");



        custom_tag("td", .close = true);

        /*--------------------*/
        custom_tag("td width=50px", .in_line = true);
        /*--------------------*/
        custom_tag("td");
        add_img("../../images/c_cpp_split.png", .width = 200);
        custom_tag("td", .close = true);
    }
    custom_tag("tr", .close = true);
    custom_tag("table", .close = true); /* center table */

    custom_tag("div", .close = true);
    custom_tag("div", .close = true);

    end_file(&index);

    return 0;
}
