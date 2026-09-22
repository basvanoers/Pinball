class Coil
{
    public:
      Coil(int g,int en);
      void turn_on();
      void turn_on_update();
      void turn_on_full_power();
      void turn_off();
      void set_power(int power);
       bool IS_ACTIVE;

    private:
      int gpio;
      int gpio_en;
      int last_state;
      int  slice;
      int  channel;
      int solenoidStartTime;
     
};