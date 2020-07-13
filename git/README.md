# Git


### Eu, somente eu 🥶

Caso você nunca tenha usado Git e não sabe como funciona, sugiro dar uma lida nesse material:

[Tutorial Git iniciante (em inglês)](https://product.hubspot.com/blog/git-and-github-tutorial-for-beginners)

**Aqui temos o seguinte cenário:** você está trabalhando sozinho e tem que fazer a conexão entre sua máquina local e o seu repositório no Github.

O projeto que iremos fazer é bem simples, iremos utilizar somente arquivos de texto simples para entender como funcionam o Git e o Github.

1. Crie uma pasta com o nome `my-first-github-repo` no local em que preferir no seu computador
2. Agora é com você: inicie o git, crie um ou mais arquivos de texto, faça `commits` (não esqueça da mensagem) 
3. Feito isso, agora é hora de upar o projeto no Github
4. **Pronto! Você finalizou a primeira parte**

>P.s: Se tiver alguma dificuldade, peça ajuda para mim ou para algum dos outros futuros pisciners! Tenha certeza que todos estão super dispostos a te ajudar (:

---

### Git no mundo real 🥵

Antes de começar essa parte, sugiro dar uma olhada nesse material:

[Tutorial Git contribuindo com um projeto Open Source (em inglês)](https://www.theodinproject.com/courses/ruby-programming/lessons/using-git-in-the-real-world)

**Aqui temos o seguinte cenário:** você está trabalhando junto com outros devs em um projeto que já está em produção (pense por exemplo em um site que já está no ar).

Neste caso iremos fazer uma simulação desse ambiente, porém apenas com arquivos de texto simples.

Pense no repositório `42-SP-future-pisciners` como o repositório do site que já está em produção (ele será o `upstream`). O que você vai fazer é adicionar um arquivo de texto (que irá criar no seu computador) como se fosse uma nova funcionalidade que vai adicionar ao site.

1. Faça um fork do repositório `upstream`. Agora você terá um repositório pŕoprio no seu Github que é chamado de `origin`. Como clonamos esse repositório, nós ja temos um remoto que aponta para o `origin` (nosso fork no Github). Nós precisamos adicionar também um remoto que aponte para o repositório `upstream`. Resumindo:
    - `origin`: repositório `42-SP-future-pisciners` que você forkou
    - `upstream`: repositório `42-SP-future-pisciners` original
2. Clone os arquivos do `origin` para a sua máquina local. É nesse repositório local que você irá fazer todas as mudanças (alterar arquivos, adicionar arquivos, etc). Aqui, como iremos adicionar um novo arquivo de texto (nova funcionalidade), criamos um novo `branch` (lembre de fazer `checkout`). Nomeei o `branch` com o nome `add_[seu nome]_introduction`
3. Dentro da pasta `git` você irá adicionar uma pasta com o seu nome, e dentro dessa pasta criar um aquivo `introducing_myself.txt` onde você irá se apresentar (fale sobre você, coisa desse tipo). Depois de feito isso, faça um novo `commit` (não esqueça da mensagem!)
4. Agora iremos fazer o merge do nosso `branch` ao `master`. Para isso precisamos fazer `checkout` para onde queremos fazer o `merge`, neste caso fazemos checkout para o `master`
5. Agora precisamos enviar o nosso `master` para o nosso `origin`, pois nós não temos acesso direto para mandar essas modificações para o `upstream`
6. Finalmente, fazemos um `pull request` para o upstream, enviando o nosso `origin`. O `pull request` pode ser feito pela interface do Github
7. **Pronto! Acredito que finalizando até aqui você já consegue utilizar o Git na piscina sem demais problemas**
>P.s: Se tiver alguma dificuldade, peça ajuda para mim ou para algum dos outros futuros pisciners! Tenha certeza que todos estão super dispostos a te ajudar (:
