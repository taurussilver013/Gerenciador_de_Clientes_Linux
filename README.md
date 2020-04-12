# Gerenciador_de_Clientes
Sistema básico para a realização de cadastro de clientes desenvolvido através da Linguagem C.



# Descrição do Código
No momento, consiste em apenas duas funções: Cadastro() e Listar(). Essas funções realizam o próprio cadastro e listam todos
os clientes registrados no banco de dados, respectivamente. 

Para armazenar essas informações, o sistema utiliza o arquivo "dados.txt" e para sua utilização, tanto de leitura quanto de
incrementação, é realizada uma verifição no ponteiro FILE* DB. Caso retorne NULL, o sistema exibe uma mensagem de erro no
DB e para a execução. Caso contrário, funcionará normalmente.

Quanto ao restante das funções, foram preparadas algumas "improvizações" que futuramente talvez sejam solucionadas. Devido a
isso, o Usuário deve alterar e remover os dados manualmente e por fim, salvar o arquivo de texto. 

# Observação
Esse sistema é a base de outro que pretendo construir futuramente. Talvez traga novas versões desse projeto, ou crie outro.
Estou praticando e aprimorando meus conhecimentos. Caso tenha alguma sugestão de aprimoramento, ficarei feliz em receber
críticas construtivas. Obrigado pela atenção.

# Como utilizar?
Basta baixar e compilar o arquivo "index.c" no seu próprio Sistema Operacional. 

Lembrando que o mesmo foi desenvolvido em ambiente Linux, portanto, serão necessárias algumas modificações para ser 
executado em outros ambientes como Windows.
