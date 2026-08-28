class Switch
{
    public:
      Switch(int g);
      bool is_pressed();
      bool has_changed();
    private:
      int  gpio;
      int last_state;
};