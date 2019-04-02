#ifndef __RTC_H__
#define __RTC_H__

#include <Wire.h>

typedef struct
{
    uint8_t Hour;
    uint8_t Minute;
    uint8_t Second;
} RTC_Time;

typedef struct
{
    uint8_t WeekDay;
    uint8_t Month;
    uint8_t Date;
    uint16_t Year;
} RTC_Date;

class RTC
{
  public:
    RTC();
    void getBm8563Time(void);

    void setTime(RTC_Time *RTC_time);
    void setData(RTC_Date *RTC_date);ß

    void getTime(RTC_Time *RTC_time);
    void getData(RTC_Date *RTC_date);

  public:
    uint8_t Second;
    uint8_t Minute;
    uint8_t Hour;
    uint8_t Week;
    uint8_t Day;
    uint8_t Month;
    uint8_t Year;
    uint8_t DateString[9];
    uint8_t TimeString[9];

    uint8_t asc[14];

  private:
    void bcd2asc(void);
    void dataMask();
    void str2Time(void);

    uint8_t bcd2ToByte(uint8_t Value);
    uint8_t byteToBcd2(uint8_t Value);

  private:
    /*定义数组用来存储读取的时间数据 */
    uint8_t trdata[7];
    /*定义数组用来存储转换的 asc 码时间数据*/
    // uint8_t asc[14];
};

#endif
