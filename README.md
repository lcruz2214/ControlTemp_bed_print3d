# Controle Básico de Temperatura da Minha Mesa de Impressão 3D

Há três anos, a controladora de temperatura da minha mesa de impressora queimou. Assim que pude, adquiri outra, mas ela também queimou depois de alguns meses, tornando a impressão em ABS difícil. Então, peguei algumas coisas do Arduino que eu tinha e montei um circuito acoplador. A lógica implementada não é interessante, mas a única coisa que vale a pena mencionar é o uso de entradas em modo PULLUP e também o uso de interrupções do sistema oferecido pelo Arduino.

#Esquema do geral do circuito

![circ_ctrl_bed_temp](https://user-images.githubusercontent.com/32270262/215796901-b1c21cad-2267-4cbf-b717-ceda6347d588.jpg)

O Led na ligado no pino 13 representa a mesa
