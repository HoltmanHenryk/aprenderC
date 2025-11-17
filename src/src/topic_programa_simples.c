#include "../c2html.h"

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = NULL;

    C2HTML_OBJ(index, css_file, js_file);
    setup_file(&index, "Idade Do Usuário");

    custom_tag("center");
    custom_tag("h1", .in_line_text = "Programa Simples: Idade do Usuário");
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
                span("Idade do usuário", .css_class = "big");
                br();

                add_text("Agora faremos um programa simples, que:");
                add_text("-Pergunta a idade do usuário.");
                add_text("-Diz a idade digitada.");
                add_text("-Diz se o usuário é maior ou menos que 10 anos.");
            }
            custom_tag("td", .close = true);
            /*         */
            custom_tag("td width=50px", .in_line = true);
            /*         */
            custom_tag("td");
            {
                add_img("../../images/compiler.png", .width = 200);
            }
            custom_tag("td", .close = true);
        }
        custom_tag("tr", .close = true);
        custom_tag("table", .close = true);

        /*+++++++++++++++++++++++++++++++*/
        custom_tag("hr");

        custom_tag("table", .css_class = "center");
        custom_tag("tr align");
        {
            custom_tag("td");
            {
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
                    span("&nbsp        int ", .css_class = "Type");
                    span("idade = ");
                    span("0", .css_class = "Number");
                    span(";");
                    br();
                    br();
                    span("&nbsp        printf(");
                    span("&quot;Digite sua idade:&quot;", .css_class = "String");
                    span(");");
                    br();
                    span("&nbsp    scanf(");
                    span("&quot;", .css_class = "String");
                    span("%d", .css_class = "StorageClass");
                    span("&quot;", .css_class = "String");
                    span(", &idade);");
                    br();
                    br();
                    span("&nbsp        printf(");
                    span("&quot;Você tem: ", .css_class = "String");
                    span("%d ", .css_class = "StorageClass");
                    span("anos!", .css_class = "String");
                    span("\\n", .css_class = "StorageClass");
                    span("&quot;", .css_class = "String");
                    span(", idade);");
                    br();
                    br();
                    span("&nbsp        if ", .css_class = "StorageClass");
                    span("(idade > ");
                    span("10", .css_class = "Number");
                    span(") ");
                    span("printf(");
                    span("&quot;Você tem mais que 10 anos", .css_class = "String");
                    span("\\n", .css_class = "StorageClass");
                    span("&quot;", .css_class = "String");
                    span(")");
                    br();
                    br();
                    span("return ", .css_class = "StorageClass");
                    span("0", .css_class = "Number");
                    span(";");
                }
                custom_tag("div", .close = true);
            }
        }
        custom_tag("tr", .close = true);
        custom_tag("table", .close = true);

        /**/
        custom_tag("hr");

        custom_tag("table", .css_class = "center");
        custom_tag("tr align");
        {
            add_text("Aqui, começamos incluindo a biblioteca stdio.h novamente.");
            br();
            add_text("Então declaramos main, como todo programa C.");
            br();
            add_text("Declaramos uma variavel, do tipo int, chamada idade, que inicialmente tem valor 0.");
            br();
            add_text("Informamos o usuário o que digitar (sua idade).");
            br();
            add_text("Usamos ", .no_br = true);
            add_text("scanf()", .strong = true, .no_br = true);
            add_text(" para capturar o que o usuário digitar, especificamos que queremos um numero inteiro ou decimál com ", .no_br = true);
            add_text("%d", .strong = true, .no_br = true);
            add_text(". Falamos tambem para ele guardar o valor digitado na variavel idade.");
            br();
            add_text("Usamos printf novamente para escrever a idade do usuário na tela.");
            br();
            add_text("E finalmente, SOMENTE se a idade digitada for maior que 10, escrevemos 'Você tem mais que 10 anos' na tela.");
            br();
            add_text("Finalizamos a excução do programa informando que tudo ocorreu como experado.");
        }
        custom_tag("tr", .close = true);
        custom_tag("table", .close = true);
    }
    custom_tag("div", .close = true);
    custom_tag("div", .close = true);

    end_file(&index);
    return 0;
}
