## Gerenciador_de_Clientes
O sistema realiza o cadastro de clientes se baseando no Nome, E-mail e Cpf de um indivíduo. Esses dados são salvos em um
arquivo de texto que é utilizado como um "Banco de Dados". 

![main](https://github.com/Niiick013/Gerenciador_de_Clientes/blob/master/main.png)

Além disso, é possível também, listar todos os clientes e seus dados contidos no DB. E para tal, o programa considera todos
os dados como uma String e os exibe na tela através do Terminal Linux.

![list](https://github.com/Niiick013/Gerenciador_de_Clientes/blob/master/list.png)


## Como utilizar
Para utilizar o programa, basta baixar o arquivo "index.c" e usar um compilador para torná-lo executável na máquina. 

Vale lembrar que, devido a alguns problemas e bugs do sistema, apenas as funções de cadastro e listagem de clientes estão
funcionando perfeitamente. Já as outras funções orientarão o usuário a realizar tal ato caso necessário.

### Obsevação
O código foi desenvolvido em ambiente Linux, no entanto, pode ser executado em outros ambientes substituindo alguns comandos
como o sleep(1) ou o system("clear") que são próprios do SO Linux.

A lógica em si não afetará o funcionamento do software, sendo assim basta modificar apenas os comandos para limpar e pausar
a execução.
