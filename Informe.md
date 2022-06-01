## PRÀCTICA 7
En l'exercici 1 hem reproduit un àudio des de la memòria interna de la ESP32.
## EXERCICI 2: Reproducció de música des d'una SD
Ara l'àudio el tinc guardat en format .mp3 dins la microSD. He conectat el lector de targetes i l'altaveu de la següent manera:
```cpp
#define SD_CS 5
#define SPI_MOSI 23
#define SPI_MISO 19
#define SPI_SCK 18
#define I2S_DIN 25
#define I2S_BCLK 27
#define I2S_LRC 26
```
En el port MISO hi he posat una resistència en sèria. El lector de SD està conectat a 5V mentre que l'altaveu està connectat a 3.3V. 

He agafat el projecte que ens proporciona la pràctica:  [Projecte](https://github.com/schreibfaul1/ESP32-audioI2S). He canviat la línia de codi on s'indica la ubicació de l'àudio: 
```cpp
audio.connecttoFS(SD, "BasketCase.mp3");
```
Després de diversos intents i provant de modificar codi i fitxers de carpetes varies no he aconseguit que em funcionés. En el següent vídeo podem veure l'error que m'apareix. Veiem que no arriba a entrar al setup ja que no ens apareix per pantalla *Iniciando SD...*. 
[Vídeo funcionament](https://drive.google.com/file/d/1YV_mDdiWtdB-o7Qs181eBEwbTJEzkA5X/view?usp=sharing)