#include "../c2html.h"

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = NULL;

    C2HTML_OBJ(index, css_file, js_file);
    setup_file(&index, "Exemplos de programas");

    custom_tag("center");
    custom_tag("h1", .in_line_text = "Exemplos de outros programas");
    custom_tag("center", .close = true);
    custom_tag("hr");

    custom_tag("div", .css_class = "centered");
    custom_tag("div", .css_class = "justified");
    {
        custom_tag("table", .css_class = "center");
        custom_tag("tr align");
        {
            custom_tag("td");
            {
                span("Lista de programas simples para exemplo", .css_class = "big");
                br_repeat(2);

                custom_tag("ul");
                {
                    custom_tag("li");
                    custom_tag("a target=\"_blank\" href=\"exemplo1.html\"", .in_line_text = "Calculadora de soma.");
                    custom_tag("li", .close = true);

                    custom_tag("li");
                    custom_tag("a target=\"_blank\" href=\"exemplo2.html\"", .in_line_text = "Loop for: repetir numero 10x.");
                    custom_tag("li", .close = true);

                    custom_tag("li");
                    custom_tag("a target=\"_blank\" href=\"exemplo3.html\"", .in_line_text = "Descobrir se o número é par ou impar");
                    custom_tag("li", .close = true);

                    custom_tag("li");
                    custom_tag("a target=\"_blank\" href=\"exemplo4.html\"", .in_line_text = "Listas e loops: cores favoritas.");
                    custom_tag("li", .close = true);
                }
                custom_tag("ul", .close = true);
            }
            custom_tag("td", .close = true);
        }
        custom_tag("tr", .close = true);
        custom_tag("table", .close = true);

        custom_tag("hr");

        custom_tag("table", .css_class = "center");
        custom_tag("tr align");
        {
            custom_tag("td");
            {
                span("Exemplos mais complexos", .css_class = "big");
                br_repeat(2);

                add_text("Exemplo de codigo de outros projetos meus:");

                custom_tag("ul");
                {
                    custom_tag("li");
                    custom_tag("a target=\"_blank\" href=\"lognest.h.html\"", .in_line_text = "lognest.h, biblioteca de logging");
                    custom_tag("li", .close = true);

                    custom_tag("li");
                    custom_tag("a target=\"_blank\" href=\"wf_collision.html\"", .in_line_text = "Wireframe Game collision.cpp (C++)");
                    custom_tag("li", .close = true);

                    custom_tag("li");
                    custom_tag("a target=\"_blank\" href=\"tired.html\"", .in_line_text = "Tired, Explorador de arquivos para o terminal");
                    custom_tag("li", .close = true);
                }
                custom_tag("ul", .close = true);
            }
            custom_tag("td", .close = true);

            custom_tag("td width=50px");
            custom_tag("td", .close = true);

            custom_tag("td");
            add_img("../../images/data_types.png", .width = 200);
            custom_tag("td", .close = true);
        }
        custom_tag("tr", .close = true);
        custom_tag("table", .close = true);

        custom_tag("hr");

        custom_tag("table", .css_class = "center");
        custom_tag("tr align");

        custom_tag("td");

        span("Links dos projetos mencionados: ", .css_class = "big");
        br_repeat(2);

        add_link("lognest.h", .href = "https://github.com/leaomartelo2/lognest");
        br();
        add_link("Wireframe Game", .href = "https://github.com/leaomartelo2/wireframe_game");
        br();
        add_link("tired", .href = "https://github.com/LeaoMartelo2/tired");
        br();

        custom_tag("td", .close = true);

        custom_tag("td width=50px");
        custom_tag("td", .close = true);

        custom_tag("td");
        add_img("../../images/github1.png", .width = 100);
        add_img("../../images/github2.png", .width = 100);
        custom_tag("td", .close = true);

        custom_tag("tr", .close = true);
        custom_tag("table", .close = true);
    }
    custom_tag("div", .close = true);
    custom_tag("div", .close = true);

    end_file(&index);
    return 0;
}
