#include "../c2html.h"
#include <stdbool.h>

int main(void) {

    const char *css_file = "style.css";
    const char *js_file = NULL;

    C2HTML_OBJ(index, css_file, js_file);

    setup_file(&index, "Pagina inicial");

    custom_tag("center");
    {
        custom_tag("h1");
        add_text("O que é a linguagem de programação C?", .no_br = true);
        custom_tag("h1", .close = true);
    }
    custom_tag("center", .close = true);

    custom_tag("div", .css_class = "centered");
    {
        custom_tag("div", .css_class = "justified");
        {
            add_text("C é uma linguagem de programação criada em ", .no_br = true);
            add_text("1970", .strong = true, .no_br = true);
            add_text(" por ", .no_br = true);
            add_link("Dennis Ritchie", .href = "https://pt.wikipedia.org/wiki/Dennis_Ritchie");
            add_text(" e ", .no_br = true);
            add_link("Ken Thompson", .href = "https://pt.wikipedia.org/wiki/Ken_Thompson");
            add_text(".");

            add_text("É conhecido por sua eficiência e controle, sendo popular para ", .no_br = true);
            add_text("programação de sistemas, e sistemas operacionais.", .strong = true, .no_br = true);
        }
        custom_tag("div", .close = true);
        custom_tag("hr");

        custom_tag("table", .css_class = "center");
        {
            custom_tag("div", .css_class = "big");
            add_text("Motivos para aprender ", .no_br = true);
            add_text("C", .strong = true, .no_br = true);
            add_text(":", .no_br = true);
            custom_tag("div", .close = true);

            custom_tag("tr align");
            {
                custom_tag("td");
                {
                    custom_tag("ul");
                    {
                        custom_tag("li");
                        add_text("Sintaxe: pode ser tão simples ou tão complexa como o seu projeto necessitar.");
                        custom_tag("li", .close = true);

                        br();

                        custom_tag("li");
                        add_text("Portabilidade: há compiladores de C para quase toda plataforma hoje em dia.");
                        custom_tag("li", .close = true);

                        br();

                        custom_tag("li");
                        add_text("Rico em bibliotecas: Milhões de bibliotecas de todo tipo: Jogos, Simulação, Renderização, ETC.");
                        custom_tag("li", .close = true);

                        br();

                        custom_tag("li");
                        add_text("Fundação de outras linguas: Ao aprender C, você ganha conhecimento de OUTRAS LINGUAGENS, "
                                 "Como C++, Java, Python, que são todas inspiradas/baseadas em C");
                        custom_tag("li", .close = true);

                        br();
                    }
                    custom_tag("ul", .close = true);
                }
                custom_tag("td", .close = true);

                custom_tag("td width=50px");
                custom_tag("td", .close = true);

                custom_tag("td");
                {
                    add_img("images/c_logo_real.png", .width = 150);
                    br();
                    span("Logo da linguagem C", .css_class = "small");
                }
                custom_tag("td", .close = true);
            }
            custom_tag("tr", .close = true);
        }
        custom_tag("table", .close = true);

        custom_tag("hr");

        custom_tag("div", .css_class = "big");
        add_text("Topicos: ", .no_br = true);
        custom_tag("div", .close = true);

        br();
        br();

        custom_tag("ul");
        {
            custom_tag("li");
            add_link("1. Introdução a Ciencia da computação", .href = "topic/ciencia_computacao");
            custom_tag("li", .close = true);

            custom_tag("li");
            add_link("2. Conceitos basicos de programação", .href = "topic/conceitos_programacao");
            custom_tag("li", .close = true);

            custom_tag("li");
            add_link("3. Conceitos especifícos do C", .href = "topic/especifico");
            custom_tag("li", .close = true);

            custom_tag("li");
            add_link("4. Seu primeiro programa em C", .href = "topic/primeiro_programa");
            custom_tag("li", .close = true);

            custom_tag("li");
            add_link("5. Programa simples: Idade do usuário", .href = "topic/programa_simples");
            custom_tag("li", .close = true);

            custom_tag("li");
            add_link("6. Outros exemplos de programas", .href = "topic/exemplos");
            custom_tag("li", .close = true);
        }
        custom_tag("ul", .close = true);
    }
    custom_tag("div", .close = true);

    custom_tag("hr");
    
    custom_tag("center");
    add_text("Código fonte desta pagina esta disponivel em ");
    add_link("https://github.com/HoltmanHenryk/aprenderC", .href = "https://github.com/HoltmanHenryk/aprenderC");
    custom_tag("center", .close = true);

    end_file(&index);

    return 0;
}
