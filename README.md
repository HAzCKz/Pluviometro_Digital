# Pluviômetro de Báscula Automático
<p align = justify> No cenário de mudanças climáticas, a coleta de dados meteorológicos se tornam fundamentais para a compreensão do meio ambiente e a prevenção de catástrofes. Um dos instrumentos presentes em estações meteorológicas é o pluviômetro, capaz de medir a quantidade de líquidos ou sólidos (chuva, neve, granizo) precipitados durante um determinado tempo e local. 
Para exemplificar como é feita tal medição, suponha que o telhado de determinado lugar tenha 10 metros quadrados e após uma hora de chuva o pluviômetro marcar 20mm, isso quer dizer que cerca de 200 litros foram despejados sobre o local na última hora.</p>

<img alt = "Prototipos" src = "https://github.com/HAzCKz/Pluviometro_Digital/blob/main/img/figura1.png"/>
<p align = center>Figura 1 - Protótipos estruturais <br> Disponível em: <a href = "https://www.thingiverse.com/thing:2846373/files">Thingiverse</a></p>

## Métodos
<p align = justify> Para o desenvolvimento do projeto, foi idealizado um pluviômetro automático do tipo basculante devido a sua construção simples e de baixo custo quando comparada a equipamentos profissionais. Com uma báscula em sua construção, dipositivo semelhante a uma gangorra em miniatura, a água da chuva entra pelo funil e cai em um dos lados da báscula, fazendo com que a mesma realize movimentos alternados de um lado para o outro, como pode ser visto na Figura 2. Sendo assim, os movimentos realizados pelo dispositivo são registrados por meio de um sensor eletromagnético (Reed Switch) e transmitidos a um microcontrolador (ESP-32).</p>

<img alt = "Funcionamento da báscula" src = "https://github.com/HAzCKz/Pluviometro_Digital/blob/main/img/figura2.png"/>
<p align = center> Figura 2 - Funcionamento do pluviômetro <br> Disponível em: <a href = "https://eventoscientificos.ifsc.edu.br/index.php/sepei/sepei2014/paper/viewFile/465/688">Intercomparação Laboratorial de Pluviômetros de Báscula.</a></p>

## Materiais

<p align = justify> Os materiais utilizados têm como objetivo baratear o projeto e torná-lo sustentável. Diante disso, a montagem do circuito de aquisição e transmissão dos dados é composta por um microcontrolador <b>ESP32</b> do modelo DOIT ESP32 DEVKIT V1, um sensor de temperatura <b>DHT11</b>, um sensor <b>Reed Switch</b>, e uma <b>Placa Solar</b> para alimentar o microcontrolador. A montagem do circuito pode ser vista na <b>Figura 3</b>. A parte estrutural do pluviômetro foi construída fazendo uso de peças 3D de um projeto incabado e materiais reaproveitados.</p>

<div align = center>
<img alt = "Circuito elétrico" src = "https://github.com/HAzCKz/Pluviometro_Digital/blob/main/img/figura3.PNG" align = center/>
<p>Figura 3 - Circuito elétrico</p>
</div>

## Metodologia

<p align = justify> A metodologia de pesquisa utilizada neste trabalho teve um caráter exploratório e consistiu no levantamento bibliogŕafico na área de internet das coisas (Blynk), dispositivos pluviométricos, desenvolvimento de peças 3D e mudanças climáticas. A plataforma Blynk (Figura 4) permite a prototipagem, implantação e gerenciamento remoto de dispositivos eletrônicos. Desta forma, criou-se uma aplicação web capaz de monitorar em tempo real a temperatura, umidade relativa do ar e a precipitação do local.</p>
<p>A calibração da báscula foi feita em laboratório e fez-se uso de uma proveta e um becker para descobrir qual é o volume de água necessário para que a báscula realize o movimento de giro completo. Por meio do método indutivo de calibração, analisou-se quantos ml restavam no becker após 100ml serem despejados sob a área de coleta</p>

<div align = center>
<img alt = "Blynk" src = "https://github.com/HAzCKz/Pluviometro_Digital/blob/main/img/figura4.png"/>
<p>Figura 4 - Aplicação web Blynk</p>
</div>

## Resultados 

<p align = justify> Os equipamentos do âmbito profissional apresentam elevados custos, podendo variar de R$ 700,00 até mais de R$ 10.000,00 dependendo da sua forma de transmissão e tratamento dos dados, tornando-se assim, pouco acessível à compreensão climática a pequenos agricultores e a população em geral. A Tabela 1 mostra uma estimativa dos valores gastos ao longo de todo o projeto considerando os custos desde o seu princípio.</p>

<table>
  <caption>
    Tabela 1 - Custos dos materiais utilizados para construção do projeto
  </caption>
  <tr>
    <th>Componentes</th>
    <th>Quantidade</th>
    <th>Origem</th>
    <th>Valor Total</th>
  </tr>

  <tr>
    <td>Placa Solar</td>
    <td>1</td>
    <td>Mercado Virtual</td>
    <td>R$ 120,00</td>
  </tr>

  <tr>
    <td>Bateria recarregável</td>
    <td>2</td>
    <td>Mercado Virtual</td>
    <td>R$ 56,00</td>
  </tr>

  <tr>
    <td>ESP32</td>
    <td>1</td>
    <td>Mercado virtual</td>
    <td>R$32,00</td>
  </tr>

  <tr>
    <td>Reed Switch</td>
    <td>10</td>
    <td>Mercado virtual</td>
    <td>R$ 20,00</td>
  </tr>

  <tr>
    <td>Rolamento(3,4,8)</td>
    <td>5</td>
    <td>Mercado Virtual</td>
    <td>R$ 19,00</td>
  </tr>

  <tr>
    <td>DHT11</td>
    <td>1</td>
    <td>Mercado virtual</td>
    <td>R$ 8,70</td>
  </tr>

  <tr>
    <td>Jumpers</td>
    <td>20</td>
    <td>Mercado virtual</td>
    <td>R$ 5,80</td>
  </tr>
  
  <tr>
    <td>Imã</td>
    <td>2</td>
    <td>Mercado Virtual</td>
    <td>R$ 5,00</td>
  </tr>

  <tr>
    <td>Peças 3D</td>
    <td>7</td>
    <td>Impressora local</td>
    <td>R$ 0,00</td>
  </tr>

  <tr>
    <td>Suporte de ferro</td>
    <td>1</td>
    <td>Reciclagem</td>
    <td>R$ 0,00</td>
  </tr>

  <tr>
    <td>Caixa de ferro</td>
    <td>1</td>
    <td>Reciclagem</td>
    <td>R$ 0,00</td>
  </tr>
  
</table>



