#include "Audio.h"
#include "SD.h"
#include "FS.h"
// Digital I/O used
#define SD_CS 5
#define SPI_MOSI 23
#define SPI_MISO 19
#define SPI_SCK 18
#define I2S_DIN 25
#define I2S_BCLK 27
#define I2S_LRC 26
Audio audio;
void setup(){
pinMode(SD_CS, OUTPUT);
digitalWrite(SD_CS, HIGH);
SPI.begin(SPI_SCK, SPI_MISO, SPI_MOSI);
Serial.begin(115200);
Serial.print("Iniciando SD ...");
SD.begin(SD_CS);

if (!SD.begin(SD_CS)) {
Serial.println("No se pudo inicializar");
 return;
}

Serial.println("inicializacion exitosa");
Serial.printf("Llegint: %s\n", "BaketCase.mp3");
audio.setPinout(I2S_BCLK, I2S_LRC, I2S_DIN);
audio.setVolume(10); // 0...21
audio.connecttoFS(SD, "BasketCase.mp3");



}
void loop(){
audio.loop();
}
