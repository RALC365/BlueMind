# BlueMind
> Just Remember

Proyecto de la clase de Generación de Empresas II.
Hecho en Arduino.

Funcionamiento:
BlueMind se conecta a un dispositivo con tecnología bluetooth, una vez que el dispositivo se aleja demasiado (excede el alcance la señal) y se desconoceta. BlueMind empieza a sonar como loco y hacer patarrates: esto con el objetivo, se hacerle recordar a la persona que esta olvidando su objeto.

### Versiones:

- LLavero
- Pulsera
- Collar
- Correa
- Etc

La tecnología que utiliza BlueMind es Arduino.

### Componentes Principales

- Arduino ESP32s (muy utilizado para el IoT)
- Foquitos LED
- Mini parlante
- Batería (se necesita un volteja de 6V)

### Detalles Técnicos

El BlueMind utiliza un arduino ESP32s, que es famosamente usado para el Internet de las Cosas, el cual cuanta con tecnología bluetooth 4.2 integrada. El ESP32s es la placa madre del BlueMind, este se encarga de monitorear al dispositivo al cual este emparejado, procesar y emitir una señal constante de alerta una vez que pierde de vista a su dispositivo maestro.


Para funcionar necesita un voltaje entre 6V – 12V, aunque para emitir la señal de alerta de LED puede funcionar con un voltaje mínimo de 5V. Si conectamos dos baterías Maxell SR626SW – 377 de 3V (aplicando ley de voltaje de Kirchhoff) en serie, obtenemos un voltaje de 6V, el necesario para su funcionamiento total.


Ya que el ESP32s cuanta con el modo de ahorro de energía “Light Sleep” que utiliza una técnica llamada “Clock Gating” que inhabilita partes de los circuitos apagando los pulsos de reloj, de modo que los flip-flops en ellos no tengan que cambiar de estado; como los estados de conmutación consumen energía, cuando no se conmuta, el consumo de energía llega a cero. Esto da como resultado un consumo de energía menor, que es de alrededor de 0,8 mA.
