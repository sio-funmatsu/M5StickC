#ifndef __AXP192_H__
#define __AXP192_H__

#include <Wire.h>
#include <Arduino.h>

class AXP192
{
  public:
    AXP192();
    void begin(void);
    void screenBreath(uint8_t brightness);

    void enableCoulombcounter(void);
    void disableCoulombcounter(void);
    void stopCoulombcounter(void);
    void clearCoulombcounter(void);

    uint32_t getCoulombchargeData(void);
    uint32_t getCoulombdischargeData(void);
    float getCoulombData(void);

    uint16_t getVbatData(void);

    uint16_t getIchargeData(void);
    uint16_t getIdischargeData(void);

    uint16_t getTempData(void);

    uint32_t getPowerbatData(void);

    uint16_t getVinData(void);
    uint16_t getIinData(void);

  public:
  private:
};

#endif
