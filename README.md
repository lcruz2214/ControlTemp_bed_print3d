# Controle Básico de Temperatura da Minha Mesa de Impressão 3D

Há três anos, a controladora de temperatura da minha mesa de impressora queimou. Assim que pude, adquiri outra, mas ela também queimou depois de alguns meses, tornando a impressão em ABS difícil. Então, peguei algumas coisas do Arduino que eu tinha e montei um circuito acoplador. A lógica implementada não é interessante, mas a única coisa que vale a pena mencionar é o uso de entradas em modo PULLUP e também o uso de interrupções do sistema oferecido pelo Arduino.

#Esquema do geral do circuito

![circ_ctrl_bed_temp](https://user-images.githubusercontent.com/32270262/215796901-b1c21cad-2267-4cbf-b717-ceda6347d588.jpg)

O Led na ligado no pino 13 representa a mesa

![photo1675177864 (3)](https://user-images.githubusercontent.com/32270262/215799467-28e2674f-7bab-4917-8a46-91de24b4d6f1.jpeg)
![photo1675177864](https://user-images.githubusercontent.com/32270262/215799474-8516931c-13a6-41c7-8b25-da2e81e19794.jpeg)
![photo1675177865](https://user-images.githubusercontent.com/32270262/215799478-1c8a82df-9109-4fd8-8944-36b27ae0ccc4.jpeg)
![photo1675177864 (1)](https://user-images.githubusercontent.com/32270262/215799486-ee1f5309-6cd9-44cb-8ab0-c4b125ea034a.jpeg)
![photo1675177864 (2)](https://user-images.githubusercontent.com/32270262/215799488-b2974977-7711-4bec-bb9c-77a68d956827.jpeg)



