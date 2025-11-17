#include "../c2html.h"
#include <stdbool.h>

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = NULL;

    C2HTML_OBJ(index, css_file, js_file);

    setup_file(&index, "Ciencia Da Computação");

    custom_tag("center");
    {
        custom_tag("h1");
        add_text("Introdução a Ciência da computação");
        custom_tag("h1", .close = true);
    }
    custom_tag("center", .close = true);

    custom_tag("hr");

    custom_tag("div", .css_class = "centered");
    custom_tag("div", .css_class = "justified");
    {
        custom_tag("div", .css_class = "big", .in_line = true,
                   .in_line_text = "Objetivo:"
                                   "Entender o que é a Ciência da computação e sua importancia.");

        custom_tag("ul");
        {
            custom_tag("li", .in_line = true, .in_line_text = "O que é:");
            add_text("É o estudo de computadores, programação, e como software e hardware interagem.", .do_paragraph = true);
            add_text("Exemplos: Video games, websites, programas de computador, robotica.");

            custom_tag("li", .in_line = true, .in_line_text = "Porque aprender:");
            add_text("Habilidades de resolução de probemas", .do_paragraph = true);
            add_text("Criatividade para criação de software");
            add_text("Oportunidades em varias carreiras (Game design, engenharia de software, etc)");
        }
        custom_tag("ul", .close = true);

        custom_tag("hr");

        add_text("Ciência da computação não é so sobre programação!", .do_paragraph = true);
        br();
        add_text("É principalmente sobre entender como funciona um computador"
                 ", ao aprender você pode entender mais sobre a tecnologia que envolve no dia a dia" 
                 "e todas as possibilidades que vem com isso.");

    }
    custom_tag("div", .close = true);
    custom_tag("div", .close = true);

    end_file(&index);

    return 0;
}
