# Pluviômetro de Báscula Automático
No cenário de mudanças climáticas, a coleta de dados meteorológicos se tornam fundamentais para a compreensão do meio ambiente e a prevenção de catástrofes. Um dos instrumentos presentes em estações meteorológicas é o pluviômetro, capaz de medir a quantidade de líquidos ou sólidos (chuva, neve, granizo) precipitados durante um determinado tempo e local. 
Para exemplificar como é feita tal medição, suponha que o telhado de determinado lugar tenha 10 metros quadrados e após uma hora de chuva o pluviômetro marcar 20mm, quer dizer que cerca de 200 litros foram despejados sobre o local na última hora

<img alt = "Prototipos" src = "https://github.com/HAzCKz/Pluviometro_Digital/blob/main/img/img_prototipo.png"/>
<p align = center>Figura 1 - Protótipos estruturais <br> Disponível em: <a href = "https://www.thingiverse.com/thing:2846373/files">Thingiverse</a></p>

## Funcionamento
Para o desenvolvimento do projeto, foi idealizado um pluviômetro automático do tipo basculante devido a sua construção simples e de baixo custo quando comparada a equipamentos profissionais. Com uma báscula em sua construção, dipositivo semelhante a uma gangorra em miniatura, a água da chuva entra pelo funil e cai em um dos lados da báscula, fazendo com que a mesma realize movimentos alternados de um lado para o outro, como pode ser visto na **figura 2**. Sendo assim, os movimentos realizados pelo dispositivo são registrados por meio de um sensor eletromagnético (Reed Switch) e transmitidos a um microcontrolador (ESP-32).

<img alt = "Funcionamento da báscula" src = "https://github.com/HAzCKz/Pluviometro_Digital/blob/main/img/figura1.png"/>
<p align = center> Figura 2 - Funcionamento do pluviômetro <br> Disponível em: <a href = "https://eventoscientificos.ifsc.edu.br/index.php/sepei/sepei2014/paper/viewFile/465/688">Intercomparação Laboratorial de Pluviômetros de Báscula.</a></p>

## Materiais
Os materiais utilizados têm como objetivo baratear o projeto e torná-lo sustentável. Diante disso, a montagem do circuito de aquisição e transmissão dos dados é composta por um microcontrolador **ESP32** do modelo DOIT ESP32 DEVKIT V1, um sensor de temperatura **DHT11**, um sensor **Reed Switch**, e uma **placa solar** para alimentar o microcontrolador. A montagem do circuito pode ser vista na **figura 3**. A parte estrutural do pluviômetro foi construída fazendo uso de peças 3D de um projeto incabado e materiais reutilizados.



