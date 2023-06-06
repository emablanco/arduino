## Conexión 

 * Typical pin layout used:
 * -----------------------------------------------------------------------------------------
 *             MFRC522      Arduino       Arduino   Arduino    Arduino          Arduino
 *             Reader/PCD   Uno/101       Mega      Nano v3    Leonardo/Micro   Pro Micro
 * Signal      Pin          Pin           Pin       Pin        Pin              Pin
 * -----------------------------------------------------------------------------------------
 * RST/Reset   RST          9             5         D9         RESET/ICSP-5     RST
 * SPI SS      SDA(SS)      10            53        D10        10               10
 * SPI MOSI    MOSI         11 / ICSP-4   51        D11        ICSP-4           16
 * SPI MISO    MISO         12 / ICSP-1   50        D12        ICSP-1           14
 * SPI SCK     SCK          13 / ICSP-3   52        D13        ICSP-3           15

## Los pines SPI varían dependiendo del modelo de Arduino que estés utilizando.

## Pines SPI correspondientes a algunos modelos comunes de Arduino:

1. Arduino Uno:
    MOSI: Pin 11
    MISO: Pin 12
    SCK: Pin 13
    SS: Pin 10

1. Arduino Mega:
    MOSI: Pin 51
    MISO: Pin 50
    SCK: Pin 52
    SS: Pins 53, 46, 47, 48, 49 (se pueden utilizar varios pines SS)

1. Arduino Nano:
    MOSI: Pin 11
    MISO: Pin 12
    SCK: Pin 13
    SS: Pin 10
