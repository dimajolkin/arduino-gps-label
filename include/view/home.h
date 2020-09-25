
class Home: public BaseView {
    private:
        uint8_t is_render = 0;

    public:
        Home(Adafruit_ST7735 *display, uint8_t dy): BaseView(display, dy) {}
        ~Home() {}

        void render() {
            display->setCursor(100, 150);
            display->setTextSize(1);
            display->print(F("Menu"));    
        }

        void onClick(uint8_t btn) {
            if (btn == BTN_OK) {
                return redirectTo(new Setting(display, dy));
            }
        }
};