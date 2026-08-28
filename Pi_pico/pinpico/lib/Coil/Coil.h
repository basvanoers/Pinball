class Coil
{
    public:
      Coil(int g);
      void turn_on();
      void turn_on_update();
      void turn_on_full_power();
      void turn_off();
      void set_power(int power);
       bool IS_ACTIVE;

    private:
      int gpio;
      int last_state;
      int  slice;
      int  channel;
      int solenoidStartTime;
     
};