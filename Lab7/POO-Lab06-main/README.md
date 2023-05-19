**1)** Construir as classes para representar uma hierarquia Politico / Presidente /Governador / Prefeito, conforme discutida em sala de aula.
* Acrescente uma função Imprime() em cada uma das classes.
* No construtor de cada classe, acrescente mensagens de depuração para saber
por onde o programa está passando enquanto é executado.
* Utilize as funções definidas nas classes bases dentro das classes derivadas.

**2)** Crie uma hierarquia de classes para representar a hierarquia Ponto/Circulo/Cilindro,
considere que o Cilindro é um Circulo com altura diferente de zero e que o Circulo é
um Ponto com raio diferente de zero. Além dos construtores, métodos de acesso,
operadores de leitura (>>) e impressão (<<), implemente as funções area() e
volume() para a hierarquia.

**3)** Utilizar a classe polinômio do laboratório 5 para implementar uma função que
encontre pelo menos uma raiz real dele, se ela existir utilizando o método de Newton:
Para encontrar uma raiz real de um polinômio p(x)=a0+a1x+...+anxn, (n > 2), pode-se
aplicar o método de Newton.

Implemente na classe Polinômio as seguintes funções:

* Dado um polinômio p(x), calcule e retorne a sua derivada p'(x).
* Dado um polinômio p(x), calcule seu valor em um ponto. Utilize essa função
para calcular p(xn) e p'(xn) em cada iteração.
* Dado um polinômio p(x), uma aproximação inicial x0 e o número máximo m de
iterações que devem ser executadas, calcule uma raiz real pelo método de
Newton, se ela existir.

**4)** Analisar a classe de exemplo do Livro do Deitel que representa um número de
telefone formatado, e alterar essa classe para que funcione com o formato utilizado
no Brasil.