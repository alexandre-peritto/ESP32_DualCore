# ESP32_DualCore
Estudo para utilização do processamento Dual Core no ESP32.
Me baseei nos exemplos do Andreas Spiess [https://github.com/SensorsIot/ESP32-Dual-Core]
Porém minha intenção é deixar estruturado em uma biblioteca, onde é necessário inicializar passando as funções que rodarão em loop no Core 0 e no Core 1.

Poderia ser feito com a IDE do Arduino, mas para facilitar a programação com o Intellicence e tirar vantagem das classes do C++ de forma mais simplificada estou utilizando a seguinte configuração:

IDE: Visual Studio Community 2017 [https://www.visualstudio.com/pt-br/downloads/]
Plugin Arduino: Visual Micro [http://www.visualmicro.com/]
