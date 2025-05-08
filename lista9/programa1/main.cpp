#include "ingressoVip.hpp"

int main()
{
    Ingresso i1("The great wall","3pm", 25);

    Ingresso i2("A bela e a fera","9pm", 30);

    Ingresso i3("O senhor os aneis","5pm", 45);

    IngressoVip i4("O senhor os aneis","5pm", 45, 20, "Refrigerante+Pipoca", false);

    cout << i1.GetInfo() << endl;
    cout << i2.GetInfo() << endl;
    cout << i3.GetInfo() << endl;
    cout << i4.GetInfo() << endl;

    return 0;
};
